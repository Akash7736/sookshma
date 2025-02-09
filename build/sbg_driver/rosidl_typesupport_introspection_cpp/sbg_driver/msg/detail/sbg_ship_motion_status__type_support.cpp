// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from sbg_driver:msg/SbgShipMotionStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "sbg_driver/msg/detail/sbg_ship_motion_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sbg_driver
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SbgShipMotionStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sbg_driver::msg::SbgShipMotionStatus(_init);
}

void SbgShipMotionStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sbg_driver::msg::SbgShipMotionStatus *>(message_memory);
  typed_message->~SbgShipMotionStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SbgShipMotionStatus_message_member_array[4] = {
  {
    "heave_valid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sbg_driver::msg::SbgShipMotionStatus, heave_valid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "heave_vel_aided",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sbg_driver::msg::SbgShipMotionStatus, heave_vel_aided),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "period_available",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sbg_driver::msg::SbgShipMotionStatus, period_available),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "period_valid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sbg_driver::msg::SbgShipMotionStatus, period_valid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SbgShipMotionStatus_message_members = {
  "sbg_driver::msg",  // message namespace
  "SbgShipMotionStatus",  // message name
  4,  // number of fields
  sizeof(sbg_driver::msg::SbgShipMotionStatus),
  SbgShipMotionStatus_message_member_array,  // message members
  SbgShipMotionStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  SbgShipMotionStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SbgShipMotionStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SbgShipMotionStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace sbg_driver


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sbg_driver::msg::SbgShipMotionStatus>()
{
  return &::sbg_driver::msg::rosidl_typesupport_introspection_cpp::SbgShipMotionStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sbg_driver, msg, SbgShipMotionStatus)() {
  return &::sbg_driver::msg::rosidl_typesupport_introspection_cpp::SbgShipMotionStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
