#!/usr/bin/env python3

from sympy import rust_code
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Pose, PoseStamped
from nav_msgs.msg import Odometry, Path
from custom_interfaces.msg import Actuator
import numpy as np
import math
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy
from sensor_msgs.msg import Imu

class ONRTBoat(Node):
    def __init__(self):
        super().__init__('onrt_boat_controller')

        # QoS profile for better performance
        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            history=HistoryPolicy.KEEP_LAST,
            depth=1
        )

        self.actuator_publisher = self.create_publisher(Actuator, '/kurma_00/actuator_cmd', 10)
        # self.odometry_subscriber = self.create_subscription(  Odometry, '/kurma_00/odometry_sim', self.odometry_callback, qos_profile)
        self.uwb_subscriber = self.create_subscription( Odometry, '/uwb/odom', self.uwb_callback , 20 )
        
        # self.path_publisher = self.create_publisher(Path, '/kurma_00/global_path', 5)
        self.imu_subscriber = self.create_subscription( Imu , '/imu/data' , self.imu_callback , 20 )


        self.pose = Pose()
        self.path_msg = Path()
        self.path_msg.header.frame_id = 'map'
        self.yaw = 0.0
        self.xpe = 0.0
        self.ype = 0.0
        self.yp_int = 0.0
        self.psi_des = 0.0
        self.previous_angle = 0.0
        self.last_time = self.get_clock().now()

        # Controller parameters
        self.kp_angular = 20.0
        self.kd_angular = 0.001
        self.k_los = 0.1
        self.ship_length = 0.750
        self.lookahead_distance = 2 * self.ship_length

        # Path definition
        self.path = [
            [5.6,2.6 ], [7.6, 14.2]]
            #[30, 20], [30, 30], [20, 30], [20, 20], [20, 10]
        #]
        self.current_goal_index = 0

        self.create_timer(0.1, self.control_loop)  # 10 Hz control loop

    # def odometry_callback(self, msg):
    #     self.pose = msg.pose.pose
    #     self.yaw = self.quaternion_to_yaw(self.pose.orientation)

    def imu_callback(self, msg):
        # msg = Imu()
        # print(msg)
        _, _, self.yaw=  self.quat_to_eul((msg.orientation.w , msg.orientation.x , msg.orientation.y , msg.orientation.z)) 
        # print(self.yaw, 'im yaw')

    def uwb_callback(self, msg):
        # msg= PoseWithCovariance()
        # self.pose = msg.pose  # Update the pose with the latest odometry data
        # msg = Odometry()
        self.pose = msg.pose.pose

    def quat_to_eul(self, quat):
        # Convert quaternion to Euler angles (ZYX order)
        # qw, qx, qy, qz = quat[3], quat[0], quat[1], quat[2]
        qw, qx, qy, qz = quat[0], quat[1], quat[2], quat[3]

        
        theta1 = np.arcsin(2 * (qy * qw - qx * qz))
        
        if theta1 > 0:
            theta2 = np.pi - theta1
        else:
            theta2 = -np.pi - theta1
        
        if theta1 == np.pi/2:
            phi1 = np.arctan2(2 * (qx * qy - qz * qw), 1 - 2 * (qx ** 2 + qz ** 2))
            psi1 = 0.0
            phi2, psi2 = phi1, psi1        
        elif theta1 == -np.pi/2:
            phi1 = np.arctan2(-2 * (qx * qy - qz * qw), 1 - 2 * (qx ** 2 + qz ** 2))
            psi1 = 0.0
            phi2, psi2 = phi1, psi1
        else:
            phi1 = np.arctan2(2 * (qy * qz + qx * qw), 1 - 2 * (qx ** 2 + qy ** 2))
            phi2 = np.arctan2(-2 * (qy * qz + qx * qw), -1 + 2 * (qx ** 2 + qy ** 2))
            psi1 = np.arctan2(2 * (qx * qy + qz * qw), 1 - 2 * (qy ** 2 + qz ** 2))
            psi2 = np.arctan2(-2 * (qx * qy + qz * qw), -1 + 2 * (qy ** 2 + qz ** 2))
        
        eul1 = np.array([phi1, theta1, psi1])
        eul2 = np.array([phi2, theta2, psi2])

        return eul1 if np.linalg.norm(eul1) < np.linalg.norm(eul2) else eul2
    
    def create_path_poses(self, path, G_or_L_path):
        path_msg = Path()
        path_msg.header.frame_id = 'map'
        path_msg.header.stamp = self.get_clock().now().to_msg()
        
        for point in path:
            x, y = point
            pose = PoseStamped()
            pose.header.frame_id = 'map'
            pose.header.stamp = self.get_clock().now().to_msg()
            pose.pose.position.x = float(x)
            pose.pose.position.y = float(y)
            pose.pose.position.z = 0.0
            pose.pose.orientation.w = 1.0
            
            path_msg.poses.append(pose)

        if G_or_L_path == "global":
            self.path_msg = path_msg
        elif G_or_L_path == "local":
            self.lcl_path_msg = path_msg

    def control_loop(self):
        if self.current_goal_index >= len(self.path) - 1:
            self.stop()
            return

        current_goal = self.path[self.current_goal_index]
        next_goal = self.path[self.current_goal_index + 1]

        propeller_speed = self.calculate_linear_velocity()
        rudder_angle = self.calculate_angular_velocity(current_goal, next_goal)

        self.publish_actuator_command(propeller_speed, rudder_angle)
        self.path = np.array(self.path)
        # self.create_path_poses(self.path, "global")
        # self.path_msg.header.stamp = self.get_clock().now().to_msg()
        # self.path_publisher.publish(self.path_msg)

        if self.xpe > 5.0:  # Goal reached condition
            self.current_goal_index += 1

    def calculate_linear_velocity(self):
        return 200.0  # Constant RPM for simplicity

    def calculate_angular_velocity(self, current_goal, next_goal):
        x, y = self.pose.position.x, self.pose.position.y
        print(x,y, " im position")
        print(self.yaw, 'im yaw')

        path_angle = math.atan2(next_goal[1] - current_goal[1], next_goal[0] - current_goal[0])
        print(path_angle, 'im path angle')
        print(current_goal, next_goal,  " the two ilos points" )

        self.ype = -(x - current_goal[0]) * math.sin(path_angle) + (y - current_goal[1]) * math.cos(path_angle)
        self.xpe = (x - current_goal[0]) * math.cos(path_angle) + (y - current_goal[1]) * math.sin(path_angle)

        kp = 1.0 / self.lookahead_distance
        ki = kp * self.k_los

        self.psi_des = path_angle - math.atan(kp * self.ype + ki * self.yp_int)

        ypd_int = (self.lookahead_distance * self.ype) / (self.lookahead_distance**2 + (self.ype + self.k_los * self.yp_int)**2)
        current_time = self.get_clock().now()
        dt = (current_time - self.last_time).nanoseconds / 1e9
        self.yp_int += ypd_int * dt
        self.last_time = current_time

        angle_error = (self.yaw - self.psi_des + math.pi) % (2 * math.pi) - math.pi
        d_angle_error = (angle_error - self.previous_angle) / dt
        self.previous_angle = angle_error

        return -(self.kp_angular * angle_error + self.kd_angular * d_angle_error)*0.2

    def publish_actuator_command(self, propeller_speed, rudder_angle):
        actuator_cmd = Actuator()
        actuator_cmd.propeller = float(propeller_speed)
        actuator_cmd.rudder = float(rudder_angle)
        self.actuator_publisher.publish(actuator_cmd)

        print( propeller_speed, rudder_angle, 'prop and rudder')

    def stop(self):
        self.publish_actuator_command(0.0, 0.0)

def main(args=None):
    rclpy.init(args=args)
    onrt_boat = ONRTBoat()
    
    try:
        rclpy.spin(onrt_boat)
    except KeyboardInterrupt:
        pass
    finally:
        onrt_boat.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
