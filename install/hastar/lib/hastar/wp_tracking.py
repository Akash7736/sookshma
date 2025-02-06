#!/usr/bin/env python3

from threading import local
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Pose, PoseWithCovariance
from std_msgs.msg import Float32
from nav_msgs.msg import Odometry
from custom_interfaces.msg import Actuator
import numpy as np
import time
from math import sqrt, atan2
import math
import matplotlib.pyplot as plt  # Import Matplotlib
import temp_path as pt
from sensor_msgs.msg import Imu



class ONRTBoat(Node):
    def __init__(self):
        super().__init__('makara_controller')

        # self.actuator_publisher = self.create_publisher( Actuator , '/makara_00/actuator_cmd' , 100)
        # self.uwb_subscriber = self.create_subscription( PoseWithCovariance , '/makara_00/uwb_00', self.uwb_callback , 20 )
        self.imu_subscriber = self.create_subscription( Imu , '/imu/data' , self.imu_callback , 20 )
        
        self.actuator_publisher = self.create_publisher( Actuator , '/kurma_00/actuator_cmd' , 100)
        self.uwb_subscriber = self.create_subscription( Odometry, '/uwb/odom', self.uwb_callback , 20 )
        # self.imu_subscriber = self.create_subscription( Imu , '/imu/data' , self.imu_callback , 20 )


        
        self.pose = Pose()
        self.prop = Float32()
        self.rudr = Float32()
        self.scaling = 1

        self.time0 = time.time()

        self.rate_value = 200

        self.previous_angle = [0]
        self.time0 = time.time()
        self.xpe = 0
        self.ype = 0
        self.yp_int = 0
        self.kp = 3
        self.psi_des = 0

        self.a = 1

        self.time_data = []
        self.rudder_data = []
        self.ype_data = []


        self.yaw = 0


    def uwb_callback(self, msg):


        # msg= PoseWithCovariance()
        # self.pose = msg.pose  # Update the pose with the latest odometry data



        # msg = Odometry()
        self.pose = msg.pose.pose

        # print( self.pose.orientation.w , self.pose.orientation.x , self.pose.orientation.y ,self.pose.orientation.z )
        # self.yaw = self.quat_to_eul( [self.pose.orientation.w , self.pose.orientation.x , self.pose.orientation.y ,self.pose.orientation.z ])[-1]

        # _, _, self.yaw=  self.quat_to_eul(msg.orientation.w , msg.orientation.x , msg.orientation.y , msg.orientation.z) 
        # current_position = (self.pose.position.x, self.pose.position.y)
        # You might want to add logic here if needed


    def imu_callback(self, msg):
        # msg = Imu()

        _, _, self.yaw=  self.quat_to_eul(msg.orientation.w , msg.orientation.x , msg.orientation.y , msg.orientation.z) 

        # You might want to add logic here if needed
    def euclidean_distance(self, goal_pose):
        return sqrt(pow((goal_pose[0] / self.scaling - self.pose.position.x), 2) +
                    pow((goal_pose[1] / self.scaling - self.pose.position.y), 2))



    def linear_vel(self, local_goal0 , local_goal1):

 
        lin_vel = 600  #rpm

        return lin_vel 






    def angular_vel(self, local_goal0 , local_goal1, kp=20, kd=0.001):

    
        x_ = self.pose.position.x ; y_ = self.pose.position.y

        current_yaw = self.yaw
        path_vector  = [local_goal1[0] -local_goal0[0] , local_goal1[1] -local_goal0[1]]
        pi_p = np.arctan2( path_vector[1], path_vector[0])

        self.ype =  (-np.sin(pi_p)*(x_-local_goal0[0]) + np.cos(pi_p)*(y_-local_goal0[1]) )  # cross track error
        self.xpe =  ( np.cos(pi_p)*(x_-local_goal0[0]) + np.sin(pi_p)*(y_-local_goal0[1]))   # along track error    # this(-1) because of the coordinates

        print(self.xpe,'along track error')
        print(self.ype,'cross track error')


        ship_length = 3
        del_ = 2 * ship_length


        # gama = .2
        # del_ = (30-0.01) *np.exp( - gama *self.ype**2 )   +0.01        # variable lookahead
        self.kp = 1/ del_
        self.k = 0.1                           # Design Parameter for ILOS
        self.ki = self.kp*self.k
        self.psi_des = pi_p - np.arctan(self.kp*self.ype +self.ki*self.yp_int  )



        ypd_int = (del_*self.ype)/(del_**2 + (self.ype + self.k*self.yp_int)**2)
        self.yp_int = self.yp_int + ypd_int*(1/self.rate_value)

        pi = math.pi

        angle: float = ( current_yaw - self.psi_des )  # angle error
        time1 = time.time()

        angle = (angle + pi) % (2 * pi) - pi

        last_angle = self.previous_angle[0]
        del_error = (angle - last_angle)
        del_time = (time1 - self.time0)
        self.time0 = time1
        self.previous_angle[0] = angle        #update

        # ang_vel: float =  ( kp * angle + kd * del_error / self.rate_value ) * 0.2
        print(self.psi_des, self.yaw, pi_p,  'psi des ,  yaw, path angle')
        # print(self.psi_des, self.yaw, 'psides and yaw')
        ang_vel: float =  ( kp * angle + kd * del_error / self.rate_value ) *2 

        # if ang_vel > 90:
        #     ang_vel = 90
        # elif ang_vel < -90:
        #     ang_vel = -90

        return ang_vel    # ang_vel
    


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



    def move_to_goal(self):
        
        actuator_cmd = Actuator()



        # path  = [ [ 20, 20  ], [20,25] , [20, 30] , [20, 35], [20, 40], [20, 45]  ] 

        path  =  [[6.3, 3.9] , [11.6 , 14.4 ]    ]
        # path  = [ [ 20, 20  ], [30,20] , [30, 30] , [40, 30], [40, 20], [30, 20] , [30, 30] , [20, 30] , [20, 20] , [20, 10]  ] 

        i = int
        i = 0 
        print(len( path) )
        while i < len( path):
            i += 1
            self.xpe=-20

            if i == (len(path) -1 ):
                self.stop()
                break

            local_goal0 = path[i]
            local_goal1 = path[i+1]
            print(self.xpe,'in loop')
            while  (self.xpe ) <= 5:                                  ##########################################################
                print(i , 'im i')
                # print( self.xpe, local_goal0,local_goal1, 'xpe  local goal 0,1 ')
                actuator_cmd.propeller = float(self.linear_vel(local_goal0 , local_goal1))
                actuator_cmd.rudder = float(self.angular_vel(local_goal0 , local_goal1) * -1)
                self.actuator_publisher.publish(actuator_cmd)

                # print(self.pose, 'im  pose')
                # print(self.yaw, ' im  yaw')

                # print( self.xpe, local_goal0,local_goal1, 'xpe  local goal 0,1 ')
                print( actuator_cmd , "act cmd")
                # print()
                rclpy.spin_once(self)  # Ensure callbacks are processed

                
            self.stop()





        # path = [[20.0, 20.0, 0.0], [20, 25, 0.0], [20, 30, 0.0]]
        # for i in range(len(path)-1):
        #     print(i , 'im i')
        #     self.xpe=0
         
        #     if i == (len(path) -1):
        #         self.stop()
        #         break

        #     local_goal0 = path[i]
        #     local_goal1 = path[i+1]
        #     end_raw = path[-1]
        #     print(self.xpe,'in loop')
        #     if (self.xpe ) <= - goal_tolerance:                                  ##########################################################
        #         print(i , 'im i')
        #         print( self.xpe, local_goal0,local_goal1, 'xpe  local goal 0,1 ')
        #         actuator_cmd.propeller = float(self.linear_vel(local_goal0 , local_goal1))
        #         actuator_cmd.rudder = float(self.angular_vel(local_goal0 , local_goal1) * -1)
        #         self.actuator_publisher.publish(actuator_cmd)

        #         # rclpy.spin_once(self)  # Ensure callbacks are processed
        #         print( self.xpe, local_goal0,local_goal1, 'xpe  local goal 0,1 ')
                
        #     self.stop()



    def stop(self):
        actuator_cmd = Actuator()
        
        actuator_cmd.rudder = float(0)
        actuator_cmd.propeller = float(0)

        # Publish stop command
        self.actuator_publisher.publish(actuator_cmd)

def main(args=None):
    rclpy.init(args=args)
    makara_boat = ONRTBoat()
    
    try:
        makara_boat.move_to_goal()
    except KeyboardInterrupt:
        pass
    finally:
        makara_boat.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
