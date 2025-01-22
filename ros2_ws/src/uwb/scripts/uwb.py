#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import cmath
import numpy as np
from serial import Serial
import time
# import matplotlib.pyplot as plt
import json
import re
import numpy as np
from geometry_msgs.msg import Vector3
from sensor_msgs.msg import Imu
from nav_msgs.msg import Odometry

# USB PORT

L = 31.6
B = 20.6
c1 = 2.5
# L = 2.24
# B = 1.12
# c1 = 0.66

def P123(r1,r2,r3):
    f = cmath.sqrt(-B**4*L**2 - B**2*L**4 + 2*B**2*L**2*r1**2 + 2*B**2*L**2*r3**2 - B**2*r2**4 + 2*B**2*r2**2*r3**2 - B**2*r3**4 - L**2*r1**4 + 2*L**2*r1**2*r2**2 - L**2*r2**4)
    if f.real == 0:
        return None
    if f.real != 0: 
        s = ((L**2 + r2**2 - r3**2)/(2*L), (B**2 + r1**2 - r2**2)/(2*B), c1 - np.sqrt(-B**4*L**2 - B**2*L**4 + 2*B**2*L**2*r1**2 + 2*B**2*L**2*r3**2 - B**2*r2**4 + 2*B**2*r2**2*r3**2 - B**2*r3**4 - L**2*r1**4 + 2*L**2*r1**2*r2**2 - L**2*r2**4)/(2*B*L))
        return [s[0],s[1]]
    
def P124(r1,r2,r4):
    f = cmath.sqrt(-B**4*L**2 - B**2*L**4 + 2*B**2*L**2*r2**2 + 2*B**2*L**2*r4**2 - B**2*r1**4 + 2*B**2*r1**2*r4**2 - B**2*r4**4 - L**2*r1**4 + 2*L**2*r1**2*r2**2 - L**2*r2**4)
    if f.real == 0:
        return None
    if f.real != 0: 
        s = ((L**2 + r1**2 - r4**2)/(2*L), (B**2 + r1**2 - r2**2)/(2*B), c1 - np.sqrt(-B**4*L**2 - B**2*L**4 + 2*B**2*L**2*r2**2 + 2*B**2*L**2*r4**2 - B**2*r1**4 + 2*B**2*r1**2*r4**2 - B**2*r4**4 - L**2*r1**4 + 2*L**2*r1**2*r2**2 - L**2*r2**4)/(2*B*L))
        return [s[0],s[1]]
    
def P143(r1,r4,r3):
    f = cmath.sqrt(-B**4*L**2 - B**2*L**4 + 2*B**2*L**2*r1**2 + 2*B**2*L**2*r3**2 - B**2*r1**4 + 2*B**2*r1**2*r4**2 - B**2*r4**4 - L**2*r3**4 + 2*L**2*r3**2*r4**2 - L**2*r4**4)
    if f.real == 0:
        return None
    if f.real != 0:
        s = ((L**2 + r1**2 - r4**2)/(2*L), -(-B**2 + r3**2 - r4**2)/(2*B), c1 - np.sqrt(-B**4*L**2 - B**2*L**4 + 2*B**2*L**2*r1**2 + 2*B**2*L**2*r3**2 - B**2*r1**4 + 2*B**2*r1**2*r4**2 - B**2*r4**4 - L**2*r3**4 + 2*L**2*r3**2*r4**2 - L**2*r4**4)/(2*B*L))
        return [s[0],s[1]]
    
def P243(r2,r4,r3):
    f = cmath.sqrt(-B**4*L**2 - B**2*L**4 + 2*B**2*L**2*r2**2 + 2*B**2*L**2*r4**2 - B**2*r2**4 + 2*B**2*r2**2*r3**2 - B**2*r3**4 - L**2*r3**4 + 2*L**2*r3**2*r4**2 - L**2*r4**4)
    if f.real == 0:
        return None
    if f.real != 0: 
        s = ((L**2 + r2**2 - r3**2)/(2*L), -(-B**2 + r3**2 - r4**2)/(2*B), c1 - np.sqrt(-B**4*L**2 - B**2*L**4 + 2*B**2*L**2*r2**2 + 2*B**2*L**2*r4**2 - B**2*r2**4 + 2*B**2*r2**2*r3**2 - B**2*r3**4 - L**2*r3**4 + 2*L**2*r3**2*r4**2 - L**2*r4**4)/(2*B*L))
        return [s[0],s[1]]


class uwb_node(Node):
    def __init__(self):
        super().__init__('uwb_node')

                # Declare and retrieve the 'uwb_url' parameter
        self.declare_parameter('uwb_url', '/dev/ttyUSB0')  # Default value
        uwb_url = self.get_parameter('uwb_url').get_parameter_value().string_value

        # Log the received value
        self.get_logger().info(f'UWB URL received: {uwb_url}')

        # portName='/dev/ttyUSB0'
        portName= uwb_url
        # Create Serial object:
        self.ser = Serial(portName) # Also opens the port during object creation
        self.ser.close() # To set parameters

        # Change settings for Arduino default Serial.begin:
        self.ser.baudrate=115200
        self.ser.port=portName
        self.ser.bytesize=8
        self.ser.parity='N'
        self.ser.stopbits=1
        self.ser.timeout=0.1
        # Open port
        self.ser.open()
        self.ser.reset_input_buffer()


        self.pub = self.create_publisher(Vector3, '/uwb/loc', 10)
        self.l = self.create_timer(timer_period_sec=2.0, callback= self.uwb_loc_pub)
        self.imu_sub = self.create_subscription(Imu, '/imu/data', self.imu_callback, 10)
        self.odom = self.create_publisher(Odometry, '/uwb/odom', 10)
        self.timer = self.create_timer(0.1, self.odom_callback)
        self.imu = Imu()
        
        self.pose = None
        
    def imu_callback(self, imu: Imu):
        self.imu = imu

    def odom_callback(self, ):
        if self.pose is None:
            return
        
        msg = Odometry()
        msg.header.frame_id = 'odom'
        msg.header.stamp = self.imu.header.stamp
        
        msg.child_frame_id = 'velodyne'
        msg.pose.pose.position.x, msg.pose.pose.position.y = self.pose
        msg.pose.pose.orientation = self.imu.orientation
        self.odom.publish(msg)
    
    def uwb_loc_pub(self, ):
        try:
            # self.ser.reset_input_buffer()
            N=self.ser.in_waiting        
            data=self.ser.readline() 
            data=data.decode('utf-8')
            f = json.loads(data)
            dis = {}
            for i in f['links']:
                if int(i["A"])==1786:
                    dis["r1"]=float(i["R"])
                if int(i["A"])==1787:
                    dis["r2"]=float(i["R"])
                if int(i["A"])==1788:
                    dis["r3"]=float(i["R"])
                if int(i["A"])==1789:
                    dis["r4"]=float(i["R"])
            # print(dis)
            if len(dis)<3:
                print(f"No Fix.  {len(dis)} anchors detected")
            elif len(dis)==3:
                print("3d fix")
                try:
                    if set(dis.keys()) == {'r1','r2','r3'}:
                        fs = P123(dis['r1'],dis['r2'],dis['r3'])
                    if set(dis.keys()) == {'r1','r2','r4'}:
                        fs = P124(dis['r1'],dis['r2'],dis['r4'])
                    if set(dis.keys()) == {'r1','r4','r3'}:
                        fs = P143(dis['r1'],dis['r4'],dis['r3'])
                    if set(dis.keys()) == {'r2','r4','r3'}:
                        fs = P243(dis['r2'],dis['r4'],dis['r3'])
                    print(fs)
                    uwbmsg = Vector3()
                    uwbmsg.x = fs[0]
                    uwbmsg.y = fs[1]
                    self.pose = fs
                    self.pub.publish(uwbmsg)
                    
                except RuntimeError:
                    print("value error")
            elif len(dis)==4:
                try:
                    print("4d Fix")
                    
                    fs1 = P123(dis['r1'],dis['r2'],dis['r3'])
                    fs2 = P124(dis['r1'],dis['r2'],dis['r4'])
                    fs3 = P143(dis['r1'],dis['r4'],dis['r3'])
                    fs4 = P243(dis['r2'],dis['r4'],dis['r3'])
                    fsx = np.mean([fs1[0],fs2[0],fs3[0],fs4[0]])
                    fsy = np.mean([fs1[1],fs2[1],fs3[1],fs4[1]])
                    fs = [fsx,fsy]
                    print(fs)
                
                    uwbmsg = Vector3()
                    uwbmsg.x = fs[0]
                    uwbmsg.y = fs[1]
                    self.pose = fs
                    self.pub.publish(uwbmsg)
                   
                except RuntimeError:
                    print("value error")
            # print(dis)
        except KeyboardInterrupt:
            return
        except Exception as e:
            pass
def main(args=None):

    rclpy.init(args=args)
    node = uwb_node()

    try:
        node.get_logger().info(f"UWB Started")
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
    self.ser.close()

















