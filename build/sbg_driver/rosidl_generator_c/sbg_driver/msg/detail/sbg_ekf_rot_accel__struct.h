// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgEkfRotAccel.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_EKF_ROT_ACCEL__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_EKF_ROT_ACCEL__STRUCT_H_

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
// Member 'rate'
// Member 'acceleration'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/SbgEkfRotAccel in the package sbg_driver.
/**
  * SBG Ellipse Messages
 */
typedef struct sbg_driver__msg__SbgEkfRotAccel
{
  std_msgs__msg__Header header;
  /// Time since sensor is powered up
  uint32_t time_stamp;
  /// INS rotation rate free from earth rotation and sensor bias/scale errors (rad.s^-1)
  /// In NED convention:
  ///   X: North
  ///   Y: East
  ///   Z: Down
  /// In ENU convention:
  ///   X: East
  ///   Y: North
  ///   Z: Up
  geometry_msgs__msg__Vector3 rate;
  /// INS accelerations and free from gravity and sensor bias/scale errors (m.s^-2)
  /// In NED convention:
  ///   X: North
  ///   Y: East
  ///   Z: Down
  /// In ENU convention:
  ///   X: East
  ///   Y: North
  ///   Z: Up
  geometry_msgs__msg__Vector3 acceleration;
} sbg_driver__msg__SbgEkfRotAccel;

// Struct for a sequence of sbg_driver__msg__SbgEkfRotAccel.
typedef struct sbg_driver__msg__SbgEkfRotAccel__Sequence
{
  sbg_driver__msg__SbgEkfRotAccel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgEkfRotAccel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_EKF_ROT_ACCEL__STRUCT_H_
