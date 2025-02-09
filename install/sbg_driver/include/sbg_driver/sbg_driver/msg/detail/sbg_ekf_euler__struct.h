// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgEkfEuler.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_EKF_EULER__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_EKF_EULER__STRUCT_H_

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
// Member 'angle'
// Member 'accuracy'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'status'
#include "sbg_driver/msg/detail/sbg_ekf_status__struct.h"

/// Struct defined in msg/SbgEkfEuler in the package sbg_driver.
/**
  * SBG Ellipse Messages
 */
typedef struct sbg_driver__msg__SbgEkfEuler
{
  std_msgs__msg__Header header;
  /// Time since sensor is powered up micro
  uint32_t time_stamp;
  /// Angle [Roll, Pitch, Yaw (heading)]
  ///
  /// The right-hand convention applies, where positive rotation is indicated by the direction in which
  /// the fingers on your right hand curl when your thumb is pointing in the direction of the axis of rotation.
  ///
  /// NED convention:
  ///   Roll: Rotation about the X axis
  ///   Pitch: Rotation about the Y axis
  ///   Yaw: Rotation about the down axis. Zero when the X axis is pointing North.
  ///
  /// ENU convention:
  ///   Roll: Rotation around X axis
  ///   Pitch: Rotation around Y axis (opposite sign compared to NED)
  ///   Yaw: Rotation about the up axis. Zero when the X axis is pointing East. (opposite sign compared to NED)
  geometry_msgs__msg__Vector3 angle;
  /// Angle accuracy (Roll, Pitch, Yaw (heading)) (1 sigma)
  geometry_msgs__msg__Vector3 accuracy;
  /// Global solution status
  sbg_driver__msg__SbgEkfStatus status;
} sbg_driver__msg__SbgEkfEuler;

// Struct for a sequence of sbg_driver__msg__SbgEkfEuler.
typedef struct sbg_driver__msg__SbgEkfEuler__Sequence
{
  sbg_driver__msg__SbgEkfEuler * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgEkfEuler__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_EKF_EULER__STRUCT_H_
