// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_interfaces:msg/Actuator.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_interfaces/msg/detail/actuator__rosidl_typesupport_introspection_c.h"
#include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_interfaces/msg/detail/actuator__functions.h"
#include "custom_interfaces/msg/detail/actuator__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__Actuator_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__msg__Actuator__init(message_memory);
}

void custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__Actuator_fini_function(void * message_memory)
{
  custom_interfaces__msg__Actuator__fini(message_memory);
}

size_t custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__size_function__Actuator__covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__get_const_function__Actuator__covariance(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__get_function__Actuator__covariance(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__fetch_function__Actuator__covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__get_const_function__Actuator__covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__assign_function__Actuator__covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__get_function__Actuator__covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__Actuator_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__msg__Actuator, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rudder",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__msg__Actuator, rudder),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "propeller",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__msg__Actuator, propeller),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__msg__Actuator, covariance),  // bytes offset in struct
    NULL,  // default value
    custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__size_function__Actuator__covariance,  // size() function pointer
    custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__get_const_function__Actuator__covariance,  // get_const(index) function pointer
    custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__get_function__Actuator__covariance,  // get(index) function pointer
    custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__fetch_function__Actuator__covariance,  // fetch(index, &value) function pointer
    custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__assign_function__Actuator__covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__Actuator_message_members = {
  "custom_interfaces__msg",  // message namespace
  "Actuator",  // message name
  4,  // number of fields
  sizeof(custom_interfaces__msg__Actuator),
  custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__Actuator_message_member_array,  // message members
  custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__Actuator_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__Actuator_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__Actuator_message_type_support_handle = {
  0,
  &custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__Actuator_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, msg, Actuator)() {
  custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__Actuator_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__Actuator_message_type_support_handle.typesupport_identifier) {
    custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__Actuator_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_interfaces__msg__Actuator__rosidl_typesupport_introspection_c__Actuator_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
