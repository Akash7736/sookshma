// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgEkfQuat.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_EKF_QUAT__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_EKF_QUAT__STRUCT_H_

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
// Member 'quaternion'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'accuracy'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'status'
#include "sbg_driver/msg/detail/sbg_ekf_status__struct.h"

/// Struct defined in msg/SbgEkfQuat in the package sbg_driver.
/**
  * SBG Ellipse Messages
 */
typedef struct sbg_driver__msg__SbgEkfQuat
{
  std_msgs__msg__Header header;
  /// Time since sensor is powered up
  uint32_t time_stamp;
  ///  Quaternion parameter (ROS order X, Y, Z, W)
  /// The rotation definition depends on the driver NED/ENU configuration
  /// Please read the message SbgEkfEuler for more information
  geometry_msgs__msg__Quaternion quaternion;
  /// Angle accuracy (Roll, Pitch, Yaw (heading)) (1 sigma)
  geometry_msgs__msg__Vector3 accuracy;
  /// Global solution status
  sbg_driver__msg__SbgEkfStatus status;
} sbg_driver__msg__SbgEkfQuat;

// Struct for a sequence of sbg_driver__msg__SbgEkfQuat.
typedef struct sbg_driver__msg__SbgEkfQuat__Sequence
{
  sbg_driver__msg__SbgEkfQuat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgEkfQuat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_EKF_QUAT__STRUCT_H_
