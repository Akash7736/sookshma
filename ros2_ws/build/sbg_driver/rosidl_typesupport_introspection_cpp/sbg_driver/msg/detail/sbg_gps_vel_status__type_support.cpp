// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from sbg_driver:msg/SbgGpsVelStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "sbg_driver/msg/detail/sbg_gps_vel_status__struct.hpp"
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

void SbgGpsVelStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sbg_driver::msg::SbgGpsVelStatus(_init);
}

void SbgGpsVelStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sbg_driver::msg::SbgGpsVelStatus *>(message_memory);
  typed_message->~SbgGpsVelStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SbgGpsVelStatus_message_member_array[2] = {
  {
    "vel_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sbg_driver::msg::SbgGpsVelStatus, vel_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vel_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sbg_driver::msg::SbgGpsVelStatus, vel_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SbgGpsVelStatus_message_members = {
  "sbg_driver::msg",  // message namespace
  "SbgGpsVelStatus",  // message name
  2,  // number of fields
  sizeof(sbg_driver::msg::SbgGpsVelStatus),
  SbgGpsVelStatus_message_member_array,  // message members
  SbgGpsVelStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  SbgGpsVelStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SbgGpsVelStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SbgGpsVelStatus_message_members,
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
get_message_type_support_handle<sbg_driver::msg::SbgGpsVelStatus>()
{
  return &::sbg_driver::msg::rosidl_typesupport_introspection_cpp::SbgGpsVelStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sbg_driver, msg, SbgGpsVelStatus)() {
  return &::sbg_driver::msg::rosidl_typesupport_introspection_cpp::SbgGpsVelStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
