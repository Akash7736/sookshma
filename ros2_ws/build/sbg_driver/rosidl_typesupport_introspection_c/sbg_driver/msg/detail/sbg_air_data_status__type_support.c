// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sbg_driver:msg/SbgAirDataStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sbg_driver/msg/detail/sbg_air_data_status__rosidl_typesupport_introspection_c.h"
#include "sbg_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sbg_driver/msg/detail/sbg_air_data_status__functions.h"
#include "sbg_driver/msg/detail/sbg_air_data_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void sbg_driver__msg__SbgAirDataStatus__rosidl_typesupport_introspection_c__SbgAirDataStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sbg_driver__msg__SbgAirDataStatus__init(message_memory);
}

void sbg_driver__msg__SbgAirDataStatus__rosidl_typesupport_introspection_c__SbgAirDataStatus_fini_function(void * message_memory)
{
  sbg_driver__msg__SbgAirDataStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sbg_driver__msg__SbgAirDataStatus__rosidl_typesupport_introspection_c__SbgAirDataStatus_message_member_array[6] = {
  {
    "is_delay_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sbg_driver__msg__SbgAirDataStatus, is_delay_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pressure_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sbg_driver__msg__SbgAirDataStatus, pressure_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "altitude_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sbg_driver__msg__SbgAirDataStatus, altitude_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pressure_diff_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sbg_driver__msg__SbgAirDataStatus, pressure_diff_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "air_speed_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sbg_driver__msg__SbgAirDataStatus, air_speed_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "air_temperature_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sbg_driver__msg__SbgAirDataStatus, air_temperature_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sbg_driver__msg__SbgAirDataStatus__rosidl_typesupport_introspection_c__SbgAirDataStatus_message_members = {
  "sbg_driver__msg",  // message namespace
  "SbgAirDataStatus",  // message name
  6,  // number of fields
  sizeof(sbg_driver__msg__SbgAirDataStatus),
  sbg_driver__msg__SbgAirDataStatus__rosidl_typesupport_introspection_c__SbgAirDataStatus_message_member_array,  // message members
  sbg_driver__msg__SbgAirDataStatus__rosidl_typesupport_introspection_c__SbgAirDataStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  sbg_driver__msg__SbgAirDataStatus__rosidl_typesupport_introspection_c__SbgAirDataStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sbg_driver__msg__SbgAirDataStatus__rosidl_typesupport_introspection_c__SbgAirDataStatus_message_type_support_handle = {
  0,
  &sbg_driver__msg__SbgAirDataStatus__rosidl_typesupport_introspection_c__SbgAirDataStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sbg_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sbg_driver, msg, SbgAirDataStatus)() {
  if (!sbg_driver__msg__SbgAirDataStatus__rosidl_typesupport_introspection_c__SbgAirDataStatus_message_type_support_handle.typesupport_identifier) {
    sbg_driver__msg__SbgAirDataStatus__rosidl_typesupport_introspection_c__SbgAirDataStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sbg_driver__msg__SbgAirDataStatus__rosidl_typesupport_introspection_c__SbgAirDataStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
