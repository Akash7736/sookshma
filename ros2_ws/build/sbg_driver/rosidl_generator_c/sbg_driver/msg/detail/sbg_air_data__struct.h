// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgAirData.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_AIR_DATA__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_AIR_DATA__STRUCT_H_

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
#include "sbg_driver/msg/detail/sbg_air_data_status__struct.h"

/// Struct defined in msg/SbgAirData in the package sbg_driver.
/**
  * SBG Ellipse Messages
 */
typedef struct sbg_driver__msg__SbgAirData
{
  std_msgs__msg__Header header;
  /// Time since sensor is powered up micro s
  uint32_t time_stamp;
  /// Airdata sensor status
  sbg_driver__msg__SbgAirDataStatus status;
  /// Raw absolute pressure measured by the barometer sensor in Pascals.
  double pressure_abs;
  /// Altitude computed from barometric altimeter in meters and positive upward.
  double altitude;
  /// Raw differential pressure measured by the pitot tube in Pascal.
  double pressure_diff;
  /// True airspeed measured by a pitot tube in m.s^-1 and positive forward.
  double true_air_speed;
  /// Outside air temperature in °C that could be used to compute true airspeed from differential pressure.
  double air_temperature;
} sbg_driver__msg__SbgAirData;

// Struct for a sequence of sbg_driver__msg__SbgAirData.
typedef struct sbg_driver__msg__SbgAirData__Sequence
{
  sbg_driver__msg__SbgAirData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgAirData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_AIR_DATA__STRUCT_H_
