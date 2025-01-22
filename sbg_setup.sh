cd /home/mavlab
git clone https://github.com/SBG-Systems/sbg_ros2_driver.git
cd sbg_ros2_driver
rosdep update
rosdep install -y --from-path .
cd /home/mavlab