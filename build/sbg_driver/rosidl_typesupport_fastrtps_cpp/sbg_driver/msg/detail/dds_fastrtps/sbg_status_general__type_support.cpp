// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sbg_driver:msg/SbgStatusGeneral.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_status_general__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sbg_driver/msg/detail/sbg_status_general__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace sbg_driver
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
cdr_serialize(
  const sbg_driver::msg::SbgStatusGeneral & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: main_power
  cdr << (ros_message.main_power ? true : false);
  // Member: imu_power
  cdr << (ros_message.imu_power ? true : false);
  // Member: gps_power
  cdr << (ros_message.gps_power ? true : false);
  // Member: settings
  cdr << (ros_message.settings ? true : false);
  // Member: temperature
  cdr << (ros_message.temperature ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sbg_driver::msg::SbgStatusGeneral & ros_message)
{
  // Member: main_power
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.main_power = tmp ? true : false;
  }

  // Member: imu_power
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.imu_power = tmp ? true : false;
  }

  // Member: gps_power
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gps_power = tmp ? true : false;
  }

  // Member: settings
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.settings = tmp ? true : false;
  }

  // Member: temperature
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.temperature = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
get_serialized_size(
  const sbg_driver::msg::SbgStatusGeneral & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: main_power
  {
    size_t item_size = sizeof(ros_message.main_power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_power
  {
    size_t item_size = sizeof(ros_message.imu_power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_power
  {
    size_t item_size = sizeof(ros_message.gps_power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: settings
  {
    size_t item_size = sizeof(ros_message.settings);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature
  {
    size_t item_size = sizeof(ros_message.temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
max_serialized_size_SbgStatusGeneral(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: main_power
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: imu_power
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gps_power
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: settings
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sbg_driver::msg::SbgStatusGeneral;
    is_plain =
      (
      offsetof(DataType, temperature) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SbgStatusGeneral__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sbg_driver::msg::SbgStatusGeneral *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SbgStatusGeneral__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sbg_driver::msg::SbgStatusGeneral *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SbgStatusGeneral__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sbg_driver::msg::SbgStatusGeneral *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SbgStatusGeneral__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SbgStatusGeneral(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SbgStatusGeneral__callbacks = {
  "sbg_driver::msg",
  "SbgStatusGeneral",
  _SbgStatusGeneral__cdr_serialize,
  _SbgStatusGeneral__cdr_deserialize,
  _SbgStatusGeneral__get_serialized_size,
  _SbgStatusGeneral__max_serialized_size
};

static rosidl_message_type_support_t _SbgStatusGeneral__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SbgStatusGeneral__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sbg_driver

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sbg_driver
const rosidl_message_type_support_t *
get_message_type_support_handle<sbg_driver::msg::SbgStatusGeneral>()
{
  return &sbg_driver::msg::typesupport_fastrtps_cpp::_SbgStatusGeneral__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sbg_driver, msg, SbgStatusGeneral)() {
  return &sbg_driver::msg::typesupport_fastrtps_cpp::_SbgStatusGeneral__handle;
}

#ifdef __cplusplus
}
#endif
