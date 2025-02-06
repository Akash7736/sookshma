// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sbg_driver:msg/SbgAirDataStatus.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_air_data_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sbg_driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sbg_driver/msg/detail/sbg_air_data_status__struct.h"
#include "sbg_driver/msg/detail/sbg_air_data_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SbgAirDataStatus__ros_msg_type = sbg_driver__msg__SbgAirDataStatus;

static bool _SbgAirDataStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SbgAirDataStatus__ros_msg_type * ros_message = static_cast<const _SbgAirDataStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: is_delay_time
  {
    cdr << (ros_message->is_delay_time ? true : false);
  }

  // Field name: pressure_valid
  {
    cdr << (ros_message->pressure_valid ? true : false);
  }

  // Field name: altitude_valid
  {
    cdr << (ros_message->altitude_valid ? true : false);
  }

  // Field name: pressure_diff_valid
  {
    cdr << (ros_message->pressure_diff_valid ? true : false);
  }

  // Field name: air_speed_valid
  {
    cdr << (ros_message->air_speed_valid ? true : false);
  }

  // Field name: air_temperature_valid
  {
    cdr << (ros_message->air_temperature_valid ? true : false);
  }

  return true;
}

static bool _SbgAirDataStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SbgAirDataStatus__ros_msg_type * ros_message = static_cast<_SbgAirDataStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: is_delay_time
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_delay_time = tmp ? true : false;
  }

  // Field name: pressure_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pressure_valid = tmp ? true : false;
  }

  // Field name: altitude_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->altitude_valid = tmp ? true : false;
  }

  // Field name: pressure_diff_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pressure_diff_valid = tmp ? true : false;
  }

  // Field name: air_speed_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->air_speed_valid = tmp ? true : false;
  }

  // Field name: air_temperature_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->air_temperature_valid = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sbg_driver
size_t get_serialized_size_sbg_driver__msg__SbgAirDataStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SbgAirDataStatus__ros_msg_type * ros_message = static_cast<const _SbgAirDataStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name is_delay_time
  {
    size_t item_size = sizeof(ros_message->is_delay_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pressure_valid
  {
    size_t item_size = sizeof(ros_message->pressure_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name altitude_valid
  {
    size_t item_size = sizeof(ros_message->altitude_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pressure_diff_valid
  {
    size_t item_size = sizeof(ros_message->pressure_diff_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name air_speed_valid
  {
    size_t item_size = sizeof(ros_message->air_speed_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name air_temperature_valid
  {
    size_t item_size = sizeof(ros_message->air_temperature_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SbgAirDataStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sbg_driver__msg__SbgAirDataStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sbg_driver
size_t max_serialized_size_sbg_driver__msg__SbgAirDataStatus(
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

  // member: is_delay_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pressure_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: altitude_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pressure_diff_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: air_speed_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: air_temperature_valid
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
    using DataType = sbg_driver__msg__SbgAirDataStatus;
    is_plain =
      (
      offsetof(DataType, air_temperature_valid) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SbgAirDataStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sbg_driver__msg__SbgAirDataStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SbgAirDataStatus = {
  "sbg_driver::msg",
  "SbgAirDataStatus",
  _SbgAirDataStatus__cdr_serialize,
  _SbgAirDataStatus__cdr_deserialize,
  _SbgAirDataStatus__get_serialized_size,
  _SbgAirDataStatus__max_serialized_size
};

static rosidl_message_type_support_t _SbgAirDataStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SbgAirDataStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sbg_driver, msg, SbgAirDataStatus)() {
  return &_SbgAirDataStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
