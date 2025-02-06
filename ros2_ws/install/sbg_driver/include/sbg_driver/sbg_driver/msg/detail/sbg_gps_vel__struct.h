// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgGpsVel.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_GPS_VEL__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_GPS_VEL__STRUCT_H_

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
// Member 'status'
#include "sbg_driver/msg/detail/sbg_gps_vel_status__struct.h"
// Member 'velocity'
// Member 'velocity_accuracy'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/SbgGpsVel in the package sbg_driver.
/**
  * SBG Ellipse Messages
 */
typedef struct sbg_driver__msg__SbgGpsVel
{
  std_msgs__msg__Header header;
  /// Time since sensor is powered up
  uint32_t time_stamp;
  /// GPS velocity fix and status bitmask
  sbg_driver__msg__SbgGpsVelStatus status;
  /// GPS Time of Week
  uint32_t gps_tow;
  /// Velocity
  /// In NED convention:
  ///   X: North
  ///   Y: East
  ///   Z: Down
  /// In ENU convention:
  ///   X: East
  ///   Y: North
  ///   Z: Up
  geometry_msgs__msg__Vector3 velocity;
  /// Velocity accuracy (1 sigma)
  /// In NED convention:
  ///   X: North
  ///   Y: East
  ///   Z: Vertical
  /// In ENU convention:
  ///   X: East
  ///   Y: North
  ///   Z: Vertical
  geometry_msgs__msg__Vector3 velocity_accuracy;
  /// True direction of motion over ground (0 to 360 deg)
  /// NED convention: Zero when the X axis is pointing North.
  /// ENU convention: Zero when the X axis is pointing East. (opposite sign compared to NED)
  float course;
  /// 1 sgima course accuracy
  float course_acc;
} sbg_driver__msg__SbgGpsVel;

// Struct for a sequence of sbg_driver__msg__SbgGpsVel.
typedef struct sbg_driver__msg__SbgGpsVel__Sequence
{
  sbg_driver__msg__SbgGpsVel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgGpsVel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_GPS_VEL__STRUCT_H_
