// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/EstimatedState.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__ESTIMATED_STATE__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__ESTIMATED_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EstimatedState in the package custom_interfaces.
/**
  * EstimatedState.msg
 */
typedef struct custom_interfaces__msg__EstimatedState
{
  double u;
  double v;
  double r;
  double x;
  double y;
  double heading;
} custom_interfaces__msg__EstimatedState;

// Struct for a sequence of custom_interfaces__msg__EstimatedState.
typedef struct custom_interfaces__msg__EstimatedState__Sequence
{
  custom_interfaces__msg__EstimatedState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__EstimatedState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__ESTIMATED_STATE__STRUCT_H_
