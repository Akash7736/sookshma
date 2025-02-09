// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sbg_driver:msg/SbgStatusGeneral.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_status_general__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sbg_driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sbg_driver/msg/detail/sbg_status_general__struct.h"
#include "sbg_driver/msg/detail/sbg_status_general__functions.h"
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


using _SbgStatusGeneral__ros_msg_type = sbg_driver__msg__SbgStatusGeneral;

static bool _SbgStatusGeneral__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SbgStatusGeneral__ros_msg_type * ros_message = static_cast<const _SbgStatusGeneral__ros_msg_type *>(untyped_ros_message);
  // Field name: main_power
  {
    cdr << (ros_message->main_power ? true : false);
  }

  // Field name: imu_power
  {
    cdr << (ros_message->imu_power ? true : false);
  }

  // Field name: gps_power
  {
    cdr << (ros_message->gps_power ? true : false);
  }

  // Field name: settings
  {
    cdr << (ros_message->settings ? true : false);
  }

  // Field name: temperature
  {
    cdr << (ros_message->temperature ? true : false);
  }

  return true;
}

static bool _SbgStatusGeneral__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SbgStatusGeneral__ros_msg_type * ros_message = static_cast<_SbgStatusGeneral__ros_msg_type *>(untyped_ros_message);
  // Field name: main_power
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->main_power = tmp ? true : false;
  }

  // Field name: imu_power
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->imu_power = tmp ? true : false;
  }

  // Field name: gps_power
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps_power = tmp ? true : false;
  }

  // Field name: settings
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->settings = tmp ? true : false;
  }

  // Field name: temperature
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->temperature = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sbg_driver
size_t get_serialized_size_sbg_driver__msg__SbgStatusGeneral(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SbgStatusGeneral__ros_msg_type * ros_message = static_cast<const _SbgStatusGeneral__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name main_power
  {
    size_t item_size = sizeof(ros_message->main_power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_power
  {
    size_t item_size = sizeof(ros_message->imu_power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_power
  {
    size_t item_size = sizeof(ros_message->gps_power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name settings
  {
    size_t item_size = sizeof(ros_message->settings);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SbgStatusGeneral__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sbg_driver__msg__SbgStatusGeneral(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sbg_driver
size_t max_serialized_size_sbg_driver__msg__SbgStatusGeneral(
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

  // member: main_power
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: imu_power
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps_power
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: settings
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: temperature
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
    using DataType = sbg_driver__msg__SbgStatusGeneral;
    is_plain =
      (
      offsetof(DataType, temperature) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SbgStatusGeneral__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sbg_driver__msg__SbgStatusGeneral(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SbgStatusGeneral = {
  "sbg_driver::msg",
  "SbgStatusGeneral",
  _SbgStatusGeneral__cdr_serialize,
  _SbgStatusGeneral__cdr_deserialize,
  _SbgStatusGeneral__get_serialized_size,
  _SbgStatusGeneral__max_serialized_size
};

static rosidl_message_type_support_t _SbgStatusGeneral__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SbgStatusGeneral,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sbg_driver, msg, SbgStatusGeneral)() {
  return &_SbgStatusGeneral__type_support;
}

#if defined(__cplusplus)
}
#endif
