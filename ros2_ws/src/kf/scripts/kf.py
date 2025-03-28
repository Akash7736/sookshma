#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import NavSatFix, Imu
from custom_interfaces.msg import EstimatedState
import numpy as np
from scipy.spatial.transform import Rotation
from math import sin, cos
import pyproj

class KalmanFilterNode(Node):
    def __init__(self):
        super().__init__('kalman_filter_node')
        
        self.x = np.zeros((6, 1))
        self.P = np.eye(6) * 1000
        self.Q = np.diag([0.1, 0.1, 0.1, 0.1, 0.1, 0.1])
        self.R_gps = np.diag([1.0, 1.0])
        self.R_imu = np.diag([0.1, 0.1])
        self.last_time = None
        
        # Origin for GPS conversion
        self.origin_lat = None
        self.origin_lon = None
        
        self.gps_sub = self.create_subscription(
            NavSatFix,
            '/wamv/sensors/gps/gps/fix',
            self.gps_callback,
            10)
            
        self.imu_sub = self.create_subscription(
            Imu,
            '/wamv/sensors/imu/imu/data',
            self.imu_callback,
            10)
            
        self.state_pub = self.create_publisher(
            EstimatedState,
            '/wamv/state_estimate',
            10)

    def gps_to_xy_ENU(self, origin_lat, origin_long, goal_lat, goal_long):
        geodesic = pyproj.Geod(ellps='WGS84')
        azimuth, back_azimuth, distance = geodesic.inv(origin_long, origin_lat, goal_long, goal_lat)
        azimuth = np.radians(azimuth)
        y = np.cos(azimuth) * distance
        x = np.sin(azimuth) * distance
        return x, y

    def predict(self, dt):
        F = np.eye(6)
        F[3,0] = dt * cos(self.x[5,0])
        F[3,1] = -dt * sin(self.x[5,0])
        F[4,0] = dt * sin(self.x[5,0])
        F[4,1] = dt * cos(self.x[5,0])
        
        self.x = F @ self.x
        self.P = F @ self.P @ F.T + self.Q

    def update_gps(self, lat, lon):
        if self.origin_lat is None:
            self.origin_lat = -33.7227686619523
            self.origin_lon = 150.67399121622609
            return
        

            
        x, y = self.gps_to_xy_ENU(self.origin_lat, self.origin_lon, lat, lon)
        measured_pos = np.array([[x], [y]])
        
        H = np.zeros((2, 6))
        H[0,3] = 1.0
        H[1,4] = 1.0
        
        self.update(measured_pos, H, self.R_gps)

    def update_imu(self, r, psi):
        measured_imu = np.array([[r], [psi]])
        
        H = np.zeros((2, 6))
        H[0,2] = 1.0
        H[1,5] = 1.0
        
        self.update(measured_imu, H, self.R_imu)

    def update(self, z, H, R):
        y = z - H @ self.x
        S = H @ self.P @ H.T + R
        K = self.P @ H.T @ np.linalg.inv(S)
        self.x = self.x + K @ y
        self.P = (np.eye(6) - K @ H) @ self.P

    def gps_callback(self, msg):
        current_time = self.get_clock().now().nanoseconds / 1e9
        
        if self.last_time is not None:
            dt = current_time - self.last_time
            self.predict(dt)
            
        self.update_gps(msg.latitude, msg.longitude)
        self.last_time = current_time
        self.publish_state()

    def imu_callback(self, msg):
        current_time = self.get_clock().now().nanoseconds / 1e9
        
        if self.last_time is not None:
            dt = current_time - self.last_time
            self.predict(dt)
        
        quat = [msg.orientation.x, msg.orientation.y, 
                msg.orientation.z, msg.orientation.w]
        euler = Rotation.from_quat(quat).as_euler('xyz')
        psi = euler[2]
        r = msg.angular_velocity.z
        
        self.update_imu(r, psi)
        self.last_time = current_time
        self.publish_state()

    def publish_state(self):
        msg = EstimatedState()
        msg.u = float(self.x[0])
        msg.v = float(self.x[1])
        msg.r = float(self.x[2])
        msg.x = float(self.x[3])
        msg.y = float(self.x[4])
        msg.heading = float(self.x[5])
        
        self.state_pub.publish(msg)

def main():
    rclpy.init()
    node = KalmanFilterNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()