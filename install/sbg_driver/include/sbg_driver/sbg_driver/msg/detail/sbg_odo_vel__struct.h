// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgOdoVel.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_ODO_VEL__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_ODO_VEL__STRUCT_H_

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

/// Struct defined in msg/SbgOdoVel in the package sbg_driver.
/**
  * SBG Ellipse Messages
 */
typedef struct sbg_driver__msg__SbgOdoVel
{
  std_msgs__msg__Header header;
  /// Time since sensor is powered up us
  uint32_t time_stamp;
  /// Real Measurement
  /// True if this log comes from a real pulse measurement
  /// False if it comes from a timeout
  bool status;
  /// Velocity in odometer direction (m/s)
  float vel;
} sbg_driver__msg__SbgOdoVel;

// Struct for a sequence of sbg_driver__msg__SbgOdoVel.
typedef struct sbg_driver__msg__SbgOdoVel__Sequence
{
  sbg_driver__msg__SbgOdoVel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgOdoVel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_ODO_VEL__STRUCT_H_
