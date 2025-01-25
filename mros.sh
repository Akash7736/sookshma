#!/bin/bash
sudo udevadm control --reload-rules && sudo udevadm trigger
docker run -it --rm --privileged --name mros --net=host --env="ROS_DOMAIN_ID=0" -v /dev:/dev --device-cgroup-rule='c *:* rmw' --device=/dev/ttyACM0:/dev/ttyACM0  microros/micro-ros-agent:humble serial --dev /dev/ttyACM0

