// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgShipMotion.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_SHIP_MOTION__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_SHIP_MOTION__STRUCT_H_

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
// Member 'ship_motion'
// Member 'acceleration'
// Member 'velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'status'
#include "sbg_driver/msg/detail/sbg_ship_motion_status__struct.h"

/// Struct defined in msg/SbgShipMotion in the package sbg_driver.
/**
  * SBG Ellipse Messages
 */
typedef struct sbg_driver__msg__SbgShipMotion
{
  std_msgs__msg__Header header;
  /// Time since sensor is powered up us
  uint32_t time_stamp;
  /// Main heave period in seconds. s float 4 4
  uint16_t heave_period;
  /// [Surge, Sway, Heave (positive down)] at main location (in m)
  /// Note : Surge & Sway are not fulfilled
  geometry_msgs__msg__Vector3 ship_motion;
  /// [Longitudinal, Lateral, Vertical (positive down)] acceleration (in m/s2)
  geometry_msgs__msg__Vector3 acceleration;
  /// [Longitudinal, Lateral, Vertical (positive down)] velocity (in m/s)
  geometry_msgs__msg__Vector3 velocity;
  /// Ship motion output status
  sbg_driver__msg__SbgShipMotionStatus status;
} sbg_driver__msg__SbgShipMotion;

// Struct for a sequence of sbg_driver__msg__SbgShipMotion.
typedef struct sbg_driver__msg__SbgShipMotion__Sequence
{
  sbg_driver__msg__SbgShipMotion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgShipMotion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_SHIP_MOTION__STRUCT_H_
