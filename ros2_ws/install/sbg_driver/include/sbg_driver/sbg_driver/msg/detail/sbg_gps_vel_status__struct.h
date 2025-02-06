// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgGpsVelStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_GPS_VEL_STATUS__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_GPS_VEL_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SbgGpsVelStatus in the package sbg_driver.
/**
  * SBG Ellipse Messages
  * Submessage
 */
typedef struct sbg_driver__msg__SbgGpsVelStatus
{
  /// The raw GPS velocity status
  /// 0 SOL_COMPUTED  A valid solution has been computed.
  /// 1 INSUFFICIENT_OBS Not enough valid SV to compute a solution.
  /// 2 INTERNAL_ERROR  An internal error has occurred.
  /// 3 LIMIT    Velocity limit exceeded.
  uint8_t vel_status;
  /// The raw GPS velocity type
  /// 0 VEL_NO_SOLUTION  No valid velocity solution available.
  /// 1 VEL_UNKNOWN_TYPE An unknown solution type has been computed.
  /// 2 VEL_DOPPLER   A Doppler velocity has been computed.
  /// 3 VEL_DIFFERENTIAL A velocity has been computed between two positions.
  uint8_t vel_type;
} sbg_driver__msg__SbgGpsVelStatus;

// Struct for a sequence of sbg_driver__msg__SbgGpsVelStatus.
typedef struct sbg_driver__msg__SbgGpsVelStatus__Sequence
{
  sbg_driver__msg__SbgGpsVelStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgGpsVelStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_GPS_VEL_STATUS__STRUCT_H_
