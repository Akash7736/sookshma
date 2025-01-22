cmake_minimum_required(VERSION 3.8)
project(uwb)

# Dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)

# Include directories (if you have any C++ header files)
include_directories(include)

# Install launch files
install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

# Install Python script as executable
install(PROGRAMS
  scripts/uwb.py  # Add your Python script here
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()