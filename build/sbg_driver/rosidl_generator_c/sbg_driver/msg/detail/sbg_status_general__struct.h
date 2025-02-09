// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgStatusGeneral.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_STATUS_GENERAL__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_STATUS_GENERAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SbgStatusGeneral in the package sbg_driver.
/**
  * SBG Ellipse Messages
  * SbgStatus submessage
 */
typedef struct sbg_driver__msg__SbgStatusGeneral
{
  /// General main power
  /// True when main power supply is OK.
  bool main_power;
  /// General imu power
  /// True when IMU power supply is OK.
  bool imu_power;
  /// General gps power
  /// Set to True when GPS power supply is OK.
  bool gps_power;
  /// General Settings
  /// True if settings were correctly loaded
  bool settings;
  /// General Temperature
  /// True when temperature is within specified limits.
  bool temperature;
} sbg_driver__msg__SbgStatusGeneral;

// Struct for a sequence of sbg_driver__msg__SbgStatusGeneral.
typedef struct sbg_driver__msg__SbgStatusGeneral__Sequence
{
  sbg_driver__msg__SbgStatusGeneral * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgStatusGeneral__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_STATUS_GENERAL__STRUCT_H_
