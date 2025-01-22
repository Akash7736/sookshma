from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

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

    return LaunchDescription([
        fcu_url_arg,
        uwb_node
    ])
