// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgUtcTimeStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_UTC_TIME_STATUS__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_UTC_TIME_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SbgUtcTimeStatus in the package sbg_driver.
/**
  * SBG Ellipse Messages
 */
typedef struct sbg_driver__msg__SbgUtcTimeStatus
{
  /// True when a clock input can be used to synchronize the internal clock.
  bool clock_stable;
  /// Define the internal clock estimation status
  /// 0 An error has occurred on the clock estimation.
  /// 1 The clock is only based on the internal crystal.
  /// 2 A PPS has been detected and the clock is converging to it.
  /// 3 The clock has converged to the PPS and is within 500ns.
  uint8_t clock_status;
  /// True if UTC time is synchronized with a PPS
  bool clock_utc_sync;
  /// UTC validity status
  /// 0 The UTC time is not known, we are just propagating the UTC time internally.
  /// 1 We have received valid UTC time information but we don't have the leap seconds information.
  /// 2 We have received valid UTC time data with valid leap seconds.
  uint8_t clock_utc_status;
} sbg_driver__msg__SbgUtcTimeStatus;

// Struct for a sequence of sbg_driver__msg__SbgUtcTimeStatus.
typedef struct sbg_driver__msg__SbgUtcTimeStatus__Sequence
{
  sbg_driver__msg__SbgUtcTimeStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgUtcTimeStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_UTC_TIME_STATUS__STRUCT_H_
