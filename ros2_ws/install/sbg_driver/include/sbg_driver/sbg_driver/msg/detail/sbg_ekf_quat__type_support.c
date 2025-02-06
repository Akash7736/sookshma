// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sbg_driver:msg/SbgEkfQuat.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sbg_driver/msg/detail/sbg_ekf_quat__rosidl_typesupport_introspection_c.h"
#include "sbg_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sbg_driver/msg/detail/sbg_ekf_quat__functions.h"
#include "sbg_driver/msg/detail/sbg_ekf_quat__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `quaternion`
#include "geometry_msgs/msg/quaternion.h"
// Member `quaternion`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"
// Member `accuracy`
#include "geometry_msgs/msg/vector3.h"
// Member `accuracy`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "sbg_driver/msg/sbg_ekf_status.h"
// Member `status`
#include "sbg_driver/msg/detail/sbg_ekf_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sbg_driver__msg__SbgEkfQuat__rosidl_typesupport_introspection_c__SbgEkfQuat_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sbg_driver__msg__SbgEkfQuat__init(message_memory);
}

void sbg_driver__msg__SbgEkfQuat__rosidl_typesupport_introspection_c__SbgEkfQuat_fini_function(void * message_memory)
{
  sbg_driver__msg__SbgEkfQuat__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sbg_driver__msg__SbgEkfQuat__rosidl_typesupport_introspection_c__SbgEkfQuat_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sbg_driver__msg__SbgEkfQuat, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sbg_driver__msg__SbgEkfQuat, time_stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quaternion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sbg_driver__msg__SbgEkfQuat, quaternion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accuracy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sbg_driver__msg__SbgEkfQuat, accuracy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sbg_driver__msg__SbgEkfQuat, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sbg_driver__msg__SbgEkfQuat__rosidl_typesupport_introspection_c__SbgEkfQuat_message_members = {
  "sbg_driver__msg",  // message namespace
  "SbgEkfQuat",  // message name
  5,  // number of fields
  sizeof(sbg_driver__msg__SbgEkfQuat),
  sbg_driver__msg__SbgEkfQuat__rosidl_typesupport_introspection_c__SbgEkfQuat_message_member_array,  // message members
  sbg_driver__msg__SbgEkfQuat__rosidl_typesupport_introspection_c__SbgEkfQuat_init_function,  // function to initialize message memory (memory has to be allocated)
  sbg_driver__msg__SbgEkfQuat__rosidl_typesupport_introspection_c__SbgEkfQuat_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sbg_driver__msg__SbgEkfQuat__rosidl_typesupport_introspection_c__SbgEkfQuat_message_type_support_handle = {
  0,
  &sbg_driver__msg__SbgEkfQuat__rosidl_typesupport_introspection_c__SbgEkfQuat_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sbg_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sbg_driver, msg, SbgEkfQuat)() {
  sbg_driver__msg__SbgEkfQuat__rosidl_typesupport_introspection_c__SbgEkfQuat_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  sbg_driver__msg__SbgEkfQuat__rosidl_typesupport_introspection_c__SbgEkfQuat_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  sbg_driver__msg__SbgEkfQuat__rosidl_typesupport_introspection_c__SbgEkfQuat_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  sbg_driver__msg__SbgEkfQuat__rosidl_typesupport_introspection_c__SbgEkfQuat_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sbg_driver, msg, SbgEkfStatus)();
  if (!sbg_driver__msg__SbgEkfQuat__rosidl_typesupport_introspection_c__SbgEkfQuat_message_type_support_handle.typesupport_identifier) {
    sbg_driver__msg__SbgEkfQuat__rosidl_typesupport_introspection_c__SbgEkfQuat_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sbg_driver__msg__SbgEkfQuat__rosidl_typesupport_introspection_c__SbgEkfQuat_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
