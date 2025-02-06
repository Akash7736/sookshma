// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/Actuator.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__ACTUATOR__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__ACTUATOR__STRUCT_H_

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

/// Struct defined in msg/Actuator in the package custom_interfaces.
typedef struct custom_interfaces__msg__Actuator
{
  std_msgs__msg__Header header;
  double rudder;
  double propeller;
  double covariance[4];
} custom_interfaces__msg__Actuator;

// Struct for a sequence of custom_interfaces__msg__Actuator.
typedef struct custom_interfaces__msg__Actuator__Sequence
{
  custom_interfaces__msg__Actuator * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__Actuator__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__ACTUATOR__STRUCT_H_
