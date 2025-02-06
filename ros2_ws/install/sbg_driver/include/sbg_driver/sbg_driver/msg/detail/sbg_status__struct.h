// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_STATUS__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_STATUS__STRUCT_H_

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
// Member 'status_general'
#include "sbg_driver/msg/detail/sbg_status_general__struct.h"
// Member 'status_com'
#include "sbg_driver/msg/detail/sbg_status_com__struct.h"
// Member 'status_aiding'
#include "sbg_driver/msg/detail/sbg_status_aiding__struct.h"

/// Struct defined in msg/SbgStatus in the package sbg_driver.
/**
  * SBG Ellipse Messages
 */
typedef struct sbg_driver__msg__SbgStatus
{
  std_msgs__msg__Header header;
  /// Time since sensor is powered up (in us)
  uint32_t time_stamp;
  /// General status bitmask and enums
  sbg_driver__msg__SbgStatusGeneral status_general;
  /// Communication status bitmask and enums.
  sbg_driver__msg__SbgStatusCom status_com;
  /// Aiding equipments status bitmask and enums.
  sbg_driver__msg__SbgStatusAiding status_aiding;
} sbg_driver__msg__SbgStatus;

// Struct for a sequence of sbg_driver__msg__SbgStatus.
typedef struct sbg_driver__msg__SbgStatus__Sequence
{
  sbg_driver__msg__SbgStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_STATUS__STRUCT_H_
