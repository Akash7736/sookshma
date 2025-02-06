// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgMagStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_MAG_STATUS__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_MAG_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SbgMagStatus in the package sbg_driver.
/**
  * SBG Ellipse Messages
  * Submessage
 */
typedef struct sbg_driver__msg__SbgMagStatus
{
  /// True if the magnetometer X has passed the self test.
  bool mag_x;
  /// True if the magnetometer Y has passed the self test.
  bool mag_y;
  /// True if the magnetometer Z has passed the self test.
  bool mag_z;
  /// True if the accelerometer X has passed the self test.
  bool accel_x;
  /// True if the accelerometer Y has passed the self test.
  bool accel_y;
  /// True if the accelerometer Z has passed the self test.
  bool accel_z;
  /// True if magnetometer is not saturated
  bool mags_in_range;
  /// True if accelerometer is not saturated
  bool accels_in_range;
  /// True if magnetometer seems to be calibrated
  bool calibration;
} sbg_driver__msg__SbgMagStatus;

// Struct for a sequence of sbg_driver__msg__SbgMagStatus.
typedef struct sbg_driver__msg__SbgMagStatus__Sequence
{
  sbg_driver__msg__SbgMagStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgMagStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_MAG_STATUS__STRUCT_H_
