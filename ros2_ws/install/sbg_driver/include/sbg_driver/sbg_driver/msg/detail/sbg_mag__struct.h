// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgMag.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_MAG__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_MAG__STRUCT_H_

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
// Member 'mag'
// Member 'accel'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'status'
#include "sbg_driver/msg/detail/sbg_mag_status__struct.h"

/// Struct defined in msg/SbgMag in the package sbg_driver.
/**
  * SBG Ellipse Messages
 */
typedef struct sbg_driver__msg__SbgMag
{
  std_msgs__msg__Header header;
  /// Time since sensor is powered up (us)
  uint32_t time_stamp;
  /// Magnetometer output
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
  geometry_msgs__msg__Vector3 mag;
  /// Accelerometer output
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
  /// Status
  sbg_driver__msg__SbgMagStatus status;
} sbg_driver__msg__SbgMag;

// Struct for a sequence of sbg_driver__msg__SbgMag.
typedef struct sbg_driver__msg__SbgMag__Sequence
{
  sbg_driver__msg__SbgMag * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgMag__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_MAG__STRUCT_H_
