// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgGpsRaw.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_GPS_RAW__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_GPS_RAW__STRUCT_H_

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
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SbgGpsRaw in the package sbg_driver.
/**
  * SBG Ellipse Messages
 */
typedef struct sbg_driver__msg__SbgGpsRaw
{
  std_msgs__msg__Header header;
  /// Raw Data
  rosidl_runtime_c__uint8__Sequence data;
} sbg_driver__msg__SbgGpsRaw;

// Struct for a sequence of sbg_driver__msg__SbgGpsRaw.
typedef struct sbg_driver__msg__SbgGpsRaw__Sequence
{
  sbg_driver__msg__SbgGpsRaw * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgGpsRaw__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_GPS_RAW__STRUCT_H_
