// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgEkfVelBody.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_EKF_VEL_BODY__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_EKF_VEL_BODY__STRUCT_H_

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
// Member 'velocity'
// Member 'velocity_accuracy'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'status'
#include "sbg_driver/msg/detail/sbg_ekf_status__struct.h"

/// Struct defined in msg/SbgEkfVelBody in the package sbg_driver.
/**
  * SBG Ellipse Messages
 */
typedef struct sbg_driver__msg__SbgEkfVelBody
{
  std_msgs__msg__Header header;
  /// Time since sensor is powered up
  uint32_t time_stamp;
  /// Velocity
  /// In NED convention:
  ///   x: North
  ///   y: East
  ///   z: Down
  /// In ENU convention:
  ///   x: East
  ///   y: North
  ///   z: Up
  geometry_msgs__msg__Vector3 velocity;
  /// Velocity accuracy (1 sigma).
  /// In NED convention:
  ///   x: North
  ///   y: East
  ///   z: Vertical
  /// In ENU convention:
  ///   x: East
  ///   y: North
  ///   z: Vertical
  geometry_msgs__msg__Vector3 velocity_accuracy;
  /// Global solution status
  sbg_driver__msg__SbgEkfStatus status;
} sbg_driver__msg__SbgEkfVelBody;

// Struct for a sequence of sbg_driver__msg__SbgEkfVelBody.
typedef struct sbg_driver__msg__SbgEkfVelBody__Sequence
{
  sbg_driver__msg__SbgEkfVelBody * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgEkfVelBody__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_EKF_VEL_BODY__STRUCT_H_
