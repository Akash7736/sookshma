// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgAirDataStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_AIR_DATA_STATUS__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_AIR_DATA_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SbgAirDataStatus in the package sbg_driver.
/**
  * SBG Ellipse Messages
  * Submessage
 */
typedef struct sbg_driver__msg__SbgAirDataStatus
{
  /// True if the time stamp field represents a delay instead of an absolute time stamp.
  bool is_delay_time;
  /// True if the pressure field is filled and valid.
  bool pressure_valid;
  /// True if the barometric altitude field is filled and valid.
  bool altitude_valid;
  /// True if the differential pressure field is filled and valid.
  bool pressure_diff_valid;
  /// True if the true airspeed field is filled and valid.
  bool air_speed_valid;
  /// True if the output air temperature field is filled and valid.
  bool air_temperature_valid;
} sbg_driver__msg__SbgAirDataStatus;

// Struct for a sequence of sbg_driver__msg__SbgAirDataStatus.
typedef struct sbg_driver__msg__SbgAirDataStatus__Sequence
{
  sbg_driver__msg__SbgAirDataStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgAirDataStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_AIR_DATA_STATUS__STRUCT_H_
