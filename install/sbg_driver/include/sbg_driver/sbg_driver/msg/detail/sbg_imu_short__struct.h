// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgImuShort.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_IMU_SHORT__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_IMU_SHORT__STRUCT_H_

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
// Member 'delta_velocity'
// Member 'delta_angle'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/SbgImuShort in the package sbg_driver.
/**
  * SBG Ellipse Messages
 */
typedef struct sbg_driver__msg__SbgImuShort
{
  std_msgs__msg__Header header;
  /// Time since sensor is powered up us
  uint32_t time_stamp;
  /// IMU Status
  sbg_driver__msg__SbgImuStatus imu_status;
  /// X, Y, Z delta velocity. Unit is 1048576 LSB for 1 m.s^-2.
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
  geometry_msgs__msg__Vector3 delta_velocity;
  /// X, Y, Z delta angle. Unit is 67108864 LSB for 1 rad.s^-1.
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
  /// IMU average temperature. Unit is 256 LSB for 1°C.
  int16_t temperature;
} sbg_driver__msg__SbgImuShort;

// Struct for a sequence of sbg_driver__msg__SbgImuShort.
typedef struct sbg_driver__msg__SbgImuShort__Sequence
{
  sbg_driver__msg__SbgImuShort * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgImuShort__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_IMU_SHORT__STRUCT_H_
