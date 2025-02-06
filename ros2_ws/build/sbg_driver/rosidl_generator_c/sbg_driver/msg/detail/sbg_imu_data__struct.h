// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgImuData.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_IMU_DATA__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_IMU_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'imu_status'
#include "sbg_driver/msg/detail/sbg_imu_status__struct.h"
// Member 'accel'
// Member 'gyro'
// Member 'delta_vel'
// Member 'delta_angle'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/SbgImuData in the package sbg_driver.
/**
  * SBG Ellipse Messages
 */
typedef struct sbg_driver__msg__SbgImuData
{
  std_msgs__msg__Header header;
  /// Time since sensor is powered up
  uint32_t time_stamp;
  /// IMU Status
  sbg_driver__msg__SbgImuStatus imu_status;
  /// Filtered Accelerometer
  ///
  /// NED convention:
  ///   x: X axis of the device frame
  ///   y: Y axis of the device frame
  ///   z: Z axis of the device frame
  ///
  /// ENU convention:
  ///   x: X axis of the device frame
  ///   y: -Y axis of the device frame
  ///   z: -Z axis of the device frame
  geometry_msgs__msg__Vector3 accel;
  /// Filtered Gyroscope
  ///
  /// NED convention:
  ///   x: X axis of the device frame
  ///   y: Y axis of the device frame
  ///   z: Z axis of the device frame
  ///
  /// ENU convention:
  ///   x: X axis of the device frame
  ///   y: -Y axis of the device frame
  ///   z: -Z axis of the device frame
  geometry_msgs__msg__Vector3 gyro;
  /// Internal Temperature
  float temp;
  /// Sculling output
  ///
  /// NED convention:
  ///   x: X axis of the device frame
  ///   y: Y axis of the device frame
  ///   z: Z axis of the device frame
  ///
  /// ENU convention:
  ///   x: X axis of the device frame
  ///   y: -Y axis of the device frame
  ///   z: -Z axis of the device frame
  geometry_msgs__msg__Vector3 delta_vel;
  /// Coning output
  ///
  /// NED convention:
  ///   x: X axis of the device frame
  ///   y: Y axis of the device frame
  ///   z: Z axis of the device frame
  ///
  /// ENU convention:
  ///   x: X axis of the device frame
  ///   y: -Y axis of the device frame
  ///   z: -Z axis of the device frame
  geometry_msgs__msg__Vector3 delta_angle;
} sbg_driver__msg__SbgImuData;

// Struct for a sequence of sbg_driver__msg__SbgImuData.
typedef struct sbg_driver__msg__SbgImuData__Sequence
{
  sbg_driver__msg__SbgImuData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgImuData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_IMU_DATA__STRUCT_H_
