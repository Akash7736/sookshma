// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgUtcTime.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_UTC_TIME__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_UTC_TIME__STRUCT_H_

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
// Member 'clock_status'
#include "sbg_driver/msg/detail/sbg_utc_time_status__struct.h"

/// Struct defined in msg/SbgUtcTime in the package sbg_driver.
/**
  * SBG Ellipse Messages
 */
typedef struct sbg_driver__msg__SbgUtcTime
{
  std_msgs__msg__Header header;
  /// Time since sensor is powered up (us)
  uint32_t time_stamp;
  /// General UTC time and clock sync status
  sbg_driver__msg__SbgUtcTimeStatus clock_status;
  /// Year
  uint16_t year;
  /// Month in Year
  uint8_t month;
  /// Day in Month
  uint8_t day;
  /// Hour in day
  uint8_t hour;
  /// Minute in hour
  uint8_t min;
  /// Second in minute, Note 60 is when a leap second is added.
  uint8_t sec;
  /// Nanosecond of second.
  uint32_t nanosec;
  /// GPS Time of week (ms)
  uint32_t gps_tow;
} sbg_driver__msg__SbgUtcTime;

// Struct for a sequence of sbg_driver__msg__SbgUtcTime.
typedef struct sbg_driver__msg__SbgUtcTime__Sequence
{
  sbg_driver__msg__SbgUtcTime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgUtcTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_UTC_TIME__STRUCT_H_
