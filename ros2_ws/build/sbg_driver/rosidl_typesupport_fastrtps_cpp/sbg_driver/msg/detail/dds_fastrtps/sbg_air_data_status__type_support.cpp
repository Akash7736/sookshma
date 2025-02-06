// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sbg_driver:msg/SbgAirDataStatus.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_air_data_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sbg_driver/msg/detail/sbg_air_data_status__struct.hpp"

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
  const sbg_driver::msg::SbgAirDataStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: is_delay_time
  cdr << (ros_message.is_delay_time ? true : false);
  // Member: pressure_valid
  cdr << (ros_message.pressure_valid ? true : false);
  // Member: altitude_valid
  cdr << (ros_message.altitude_valid ? true : false);
  // Member: pressure_diff_valid
  cdr << (ros_message.pressure_diff_valid ? true : false);
  // Member: air_speed_valid
  cdr << (ros_message.air_speed_valid ? true : false);
  // Member: air_temperature_valid
  cdr << (ros_message.air_temperature_valid ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sbg_driver::msg::SbgAirDataStatus & ros_message)
{
  // Member: is_delay_time
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_delay_time = tmp ? true : false;
  }

  // Member: pressure_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.pressure_valid = tmp ? true : false;
  }

  // Member: altitude_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.altitude_valid = tmp ? true : false;
  }

  // Member: pressure_diff_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.pressure_diff_valid = tmp ? true : false;
  }

  // Member: air_speed_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.air_speed_valid = tmp ? true : false;
  }

  // Member: air_temperature_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.air_temperature_valid = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
get_serialized_size(
  const sbg_driver::msg::SbgAirDataStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: is_delay_time
  {
    size_t item_size = sizeof(ros_message.is_delay_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pressure_valid
  {
    size_t item_size = sizeof(ros_message.pressure_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: altitude_valid
  {
    size_t item_size = sizeof(ros_message.altitude_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pressure_diff_valid
  {
    size_t item_size = sizeof(ros_message.pressure_diff_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: air_speed_valid
  {
    size_t item_size = sizeof(ros_message.air_speed_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: air_temperature_valid
  {
    size_t item_size = sizeof(ros_message.air_temperature_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
max_serialized_size_SbgAirDataStatus(
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


  // Member: is_delay_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pressure_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: altitude_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pressure_diff_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: air_speed_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: air_temperature_valid
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
    using DataType = sbg_driver::msg::SbgAirDataStatus;
    is_plain =
      (
      offsetof(DataType, air_temperature_valid) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SbgAirDataStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sbg_driver::msg::SbgAirDataStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SbgAirDataStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sbg_driver::msg::SbgAirDataStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SbgAirDataStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sbg_driver::msg::SbgAirDataStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SbgAirDataStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SbgAirDataStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SbgAirDataStatus__callbacks = {
  "sbg_driver::msg",
  "SbgAirDataStatus",
  _SbgAirDataStatus__cdr_serialize,
  _SbgAirDataStatus__cdr_deserialize,
  _SbgAirDataStatus__get_serialized_size,
  _SbgAirDataStatus__max_serialized_size
};

static rosidl_message_type_support_t _SbgAirDataStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SbgAirDataStatus__callbacks,
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
get_message_type_support_handle<sbg_driver::msg::SbgAirDataStatus>()
{
  return &sbg_driver::msg::typesupport_fastrtps_cpp::_SbgAirDataStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sbg_driver, msg, SbgAirDataStatus)() {
  return &sbg_driver::msg::typesupport_fastrtps_cpp::_SbgAirDataStatus__handle;
}

#ifdef __cplusplus
}
#endif
