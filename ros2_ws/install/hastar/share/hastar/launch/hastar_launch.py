from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration

from launch_ros.substitutions import FindPackageShare
import os

def generate_launch_description():
    # Declare the 'uwb_url' launch argument
    fcu_url_arg = DeclareLaunchArgument(
        name='uwb_url',  # Name of the argument
        default_value='/dev/ttyUSB0',  # Default value for the argument
        description='FCU URL port for the UWB node'  # Description
    )

    # Node definition, using the 'uwb_url' argument
    uwb_node = Node(
        package='uwb',
        executable='uwb.py',
        name='uwb_node',
        parameters=[{'uwb_url': LaunchConfiguration('uwb_url')}]
    )

    wp_tracking_node = Node(
        package='hastar',
        executable='wp_tracking.py',
        name='wp_tracking_node',
    )

    # Include the sbg_driver launch file
    sbg_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(FindPackageShare('sbg_driver').find('sbg_driver'), 'launch', 'sbg_device_launch.py')
        )
    )

    return LaunchDescription([
        fcu_url_arg,
        uwb_node,
        sbg_launch, 
        wp_tracking_node
    ])