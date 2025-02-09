// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgShipMotionStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_SHIP_MOTION_STATUS__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_SHIP_MOTION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SbgShipMotionStatus in the package sbg_driver.
/**
  * SBG Ellipse Messages
  * SbgShipMotionStatus
 */
typedef struct sbg_driver__msg__SbgShipMotionStatus
{
  /// True after heave convergence time.
  /// False in following conditions:
  /// - Turn occurred and no velocity aiding is available
  /// - Heave reached higher/lower limits
  /// - If a step is detected and filter has to re-converge
  /// - If internal failure
  bool heave_valid;
  /// True if heave output is compensated for transient accelerations
  bool heave_vel_aided;
  /// True if the swell period is provided in this output
  bool period_available;
  /// True if the period returned is assumed to be valid or not.
  bool period_valid;
} sbg_driver__msg__SbgShipMotionStatus;

// Struct for a sequence of sbg_driver__msg__SbgShipMotionStatus.
typedef struct sbg_driver__msg__SbgShipMotionStatus__Sequence
{
  sbg_driver__msg__SbgShipMotionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgShipMotionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_SHIP_MOTION_STATUS__STRUCT_H_
