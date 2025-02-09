// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgGpsHdt.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_GPS_HDT__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_GPS_HDT__STRUCT_H_

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

/// Struct defined in msg/SbgGpsHdt in the package sbg_driver.
/**
  * SBG Ellipse Messages
 */
typedef struct sbg_driver__msg__SbgGpsHdt
{
  std_msgs__msg__Header header;
  /// Time since sensor is powered up
  uint32_t time_stamp;
  /// GPS True Heading status.
  /// Bit 0-5: enum:
  /// 0 SOL_COMPUTED  A valid solution has been computed.
  /// 1 INSUFFICIENT_OBS Not enough valid SV to compute a solution.
  /// 2 INTERNAL_ERROR  An internal error has occurred.
  /// 3 HEIGHT_LIMIT  The height limit has been exceeded.
  /// Bit 6: mask:
  /// 1 BASELINE_VALID      The baseline length field is filled and valid.
  uint16_t status;
  /// GPS Time of Week
  uint32_t tow;
  /// True heading angle (0 to 360 deg)
  /// NED convention: Rotation about the down axis. Zero when the X axis is pointing North.
  /// ENU convention: Rotation about the up axis. Zero when the X axis is pointing East. (opposite sign compared to NED)
  float true_heading;
  /// 1 sigma True heading estimated accuracy
  float true_heading_acc;
  /// Pitch
  /// NED convention:
  ///   angle from the master to the rover
  /// ENU convention:
  ///   angle from the rover to the master
  float pitch;
  /// 1 sigma pitch estimated accuracy
  float pitch_acc;
  /// The distance between the main and aux antenna in meters.
  float baseline;
} sbg_driver__msg__SbgGpsHdt;

// Struct for a sequence of sbg_driver__msg__SbgGpsHdt.
typedef struct sbg_driver__msg__SbgGpsHdt__Sequence
{
  sbg_driver__msg__SbgGpsHdt * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgGpsHdt__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_GPS_HDT__STRUCT_H_
