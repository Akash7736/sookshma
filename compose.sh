#!/bin/bash

cleanup() {
    echo "Stopping containers..."
    docker stop sookshma_docker mros >/dev/null 2>&1
    docker rm sookshma_docker mros >/dev/null 2>&1
    exit 0
}

# Trap SIGINT (Ctrl+C) and SIGTERM for cleanup
trap cleanup SIGINT SIGTERM

# Remove any existing containers with the same name
echo "Checking for existing containers..."
docker rm -f sookshma_docker mros >/dev/null 2>&1

sudo udevadm control --reload-rules && sudo udevadm trigger

# Run handshake and check status
if ! python3 handshake.py; then
    echo "Arduino handshake failed. Exiting..."
    exit 1
fi



# Start the sookshma container in interactive mode without auto-removal
docker run -d --gpus all --privileged --name sookshma_docker \
    --net=host \
    --env="DISPLAY" \
    --env="ROS_DOMAIN_ID=0" \
    --workdir="/workspaces/mavlab" \
    --volume="$(pwd)":"/workspaces/mavlab" \
    --volume="/dev/shm":"/dev/shm" \
    --volume="/dev/sbg":"/dev/sbg" \
    --volume="/dev/uwb":"/dev/uwb" \
    --volume="/dev/ardusimple":"/dev/ardusimple" \
    --volume="/dev/propeller":"/dev/propeller" \
    --volume="/dev/rudder":"/dev/rudder" \
    --volume="/tmp/.X11-unix:/tmp/.X11-unix:rw" \
    abhilashiit/sookshma_ros2:1.0 sleep infinity &

# Start the micro-ROS container
docker run -d --rm --privileged --name mros \
    --net=host \
    --env="ROS_DOMAIN_ID=0" \
    -v /dev:/dev \
    --device-cgroup-rule='c *:* rmw' \
    --device=/dev/ttyACM0:/dev/ttyACM0 \
    microros/micro-ros-agent:humble serial --dev /dev/ttyACM0

# Show logs of mros container in real-time
docker logs -f mros &


echo "Running msg_convert.py inside sookshma_docker..."
docker exec -it sookshma_docker bash -c "source /opt/ros/humble/setup.bash && cd ros2_ws && source install/setup.bash && sudo chmod 666 /dev/sbg && sudo chmod 666 /dev/uwb && python3 /workspaces/mavlab/msg_convert.py"



# Wait for user to press Ctrl+C
wait
