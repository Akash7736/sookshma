from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
from launch.launch_description_sources import AnyLaunchDescriptionSource
from launch_ros.actions import Node

def generate_launch_description():
    # Declare all the launch arguments
    fcu_url_arg = DeclareLaunchArgument(
        'fcu_url',
        default_value='/dev/ttyACM0:57600'
    )
    
    # Add UWB URL argument
    uwb_url_arg = DeclareLaunchArgument(
        'uwb_url',
        default_value='/dev/ttyUSB0',
        description='URL for the UWB connection'
    )
    
    gcs_url_arg = DeclareLaunchArgument(
        'gcs_url',
        default_value=''
    )
    
    tgt_system_arg = DeclareLaunchArgument(
        'tgt_system',
        default_value='1'
    )
    
    tgt_component_arg = DeclareLaunchArgument(
        'tgt_component',
        default_value='1'
    )
    
    log_output_arg = DeclareLaunchArgument(
        'log_output',
        default_value='screen'
    )
    
    fcu_protocol_arg = DeclareLaunchArgument(
        'fcu_protocol',
        default_value='v2.0'
    )
    
    respawn_mavros_arg = DeclareLaunchArgument(
        'respawn_mavros',
        default_value='false'
    )
    
    namespace_arg = DeclareLaunchArgument(
        'namespace',
        default_value='mavros'
    )

    # Include the node.launch file
    node_launch = IncludeLaunchDescription(
        AnyLaunchDescriptionSource(
            PathJoinSubstitution([
                FindPackageShare('mavros'),
                'launch',
                'node.launch'
            ])
        ),
        launch_arguments={
            'pluginlists_yaml': PathJoinSubstitution([
                FindPackageShare('mavros'),
                'launch',
                'apm_pluginlists.yaml'
            ]),
            'config_yaml': PathJoinSubstitution([
                FindPackageShare('mavros'),
                'launch',
                'apm_config.yaml'
            ]),
            'fcu_url': LaunchConfiguration('fcu_url'),
            'gcs_url': LaunchConfiguration('gcs_url'),
            'tgt_system': LaunchConfiguration('tgt_system'),
            'tgt_component': LaunchConfiguration('tgt_component'),
            'fcu_protocol': LaunchConfiguration('fcu_protocol'),
            'respawn_mavros': LaunchConfiguration('respawn_mavros'),
            'namespace': LaunchConfiguration('namespace')
        }.items()
    )

    # UWB node definition with uwb_url
    uwb_node = Node(
        package='uwb',
        executable='uwb.py',
        name='uwb_node',
        parameters=[{'uwb_url': LaunchConfiguration('uwb_url')}]
    )

    # kf_node = Node(
    #     package='kf',
    #     executable='kf_uwb.py',
    #     name='kalman_filter_node'
    # )

    return LaunchDescription([
        fcu_url_arg,
        uwb_url_arg,  # Added uwb_url argument
        gcs_url_arg,
        tgt_system_arg,
        tgt_component_arg,
        log_output_arg,
        fcu_protocol_arg,
        respawn_mavros_arg,
        namespace_arg,
        node_launch,
        uwb_node,
        kf_node
    ])