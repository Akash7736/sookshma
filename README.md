# sookshma
Repo for sookshma Autonomous Surface Vessel .

## launch mavros 
ros2 launch mavros apm.launch fcu_url:=/dev/ttyACM0

## launch uwb 
ros2 launch uwb uwb_launch.py uwb_url:=/dev/ttyUSB0

## launch kf 
ros2 launch kf kf_launch.py fcu_url:=/dev/ttyACM0 uwb_url:=/dev/ttyUSB0
launch args fcu_url and uwb_url are optional
