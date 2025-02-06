from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():


    # Node definition, using the 'uwb_url' argument
    kf_node = Node(
        package='kf',
        executable='kf_uwb.py',
        name='kalman_filter_node'
    )


    return LaunchDescription([
        kf_node
    ])
