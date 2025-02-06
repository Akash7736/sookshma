#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from custom_interfaces.msg import Actuator  

class ActuatorToThrustCommand(Node):    

    def __init__(self):
        super().__init__('actuator_to_thrust_command')

        # Subscribe to the Actuator topic
        self.subscription = self.create_subscription(
            Actuator,
            '/kurma_00/actuator_cmd',
            self.actuator_callback,
            10)
        self.subscription  # Prevent unused variable warning

        # Publisher for the thrust command topic
        self.publisher = self.create_publisher(String, '/sookshma/thrust_command', 10)

    def actuator_callback(self, msg):
        # Extract the propeller and rudder values from the Actuator message
        propeller = msg.propeller
        rudder = msg.rudder

        # Format the string message as required by the Arduino
        thrust_command_msg = String()
        thrust_command_msg.data = f"T:{propeller:.2f},S:{rudder:.2f},R:0.00"  # Assuming turn_radius is 0.00

        # Publish the formatted message to the thrust command topic
        self.publisher.publish(thrust_command_msg)
        self.get_logger().info(f"Published: {thrust_command_msg.data}")

def main(args=None):
    rclpy.init(args=args)

    actuator_to_thrust_command = ActuatorToThrustCommand()

    rclpy.spin(actuator_to_thrust_command)

    # Destroy the node explicitly
    actuator_to_thrust_command.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()