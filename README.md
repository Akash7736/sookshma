# sookshma
Repo for sookshma Autonomous Surface Vessel .

## launch mavros 
ros2 launch mavros apm.launch fcu_url:=/dev/ttyACM0

## launch uwb 
ros2 launch uwb uwb_launch.py fcu_url:=/dev/ttyUSB0
