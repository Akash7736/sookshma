// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgEvent.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_EVENT__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_EVENT__STRUCT_H_

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

/// Struct defined in msg/SbgEvent in the package sbg_driver.
/**
  * SBG Ellipse Messages
 */
typedef struct sbg_driver__msg__SbgEvent
{
  std_msgs__msg__Header header;
  /// Time since sensor is powered up us
  uint32_t time_stamp;
  /// True if we have received events at a higher rate than 1 kHz.
  bool overflow;
  /// True if at least two events have been received.
  bool offset_0_valid;
  /// True if at least three events have been received.
  bool offset_1_valid;
  /// True if at least four events have been received.
  bool offset_2_valid;
  /// True if five events have been received.
  bool offset_3_valid;
  /// Time offset for the second received event. (us)
  uint16_t time_offset_0;
  /// Time offset for the third received event. (us)
  uint16_t time_offset_1;
  /// Time offset for the fourth received event. (us)
  uint16_t time_offset_2;
  /// Time offset for the fifth received event. (us)
  uint16_t time_offset_3;
} sbg_driver__msg__SbgEvent;

// Struct for a sequence of sbg_driver__msg__SbgEvent.
typedef struct sbg_driver__msg__SbgEvent__Sequence
{
  sbg_driver__msg__SbgEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_EVENT__STRUCT_H_
