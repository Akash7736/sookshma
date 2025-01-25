cd /home/mavlab
git clone -b humble https://github.com/micro-ROS/micro_ros_setup.git
sudo apt update && rosdep update
rosdep install --from-paths src --ignore-src -y
ros2 run micro_ros_setup create_firmware_ws.sh host
ros2 run micro_ros_setup build_firmware.sh
ros2 run micro_ros_setup create_agent_ws.sh
ros2 run micro_ros_setup build_agent.sh
cd /home/mavlab

