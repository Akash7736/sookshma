// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sbg_driver:msg/SbgUtcTimeStatus.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_utc_time_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sbg_driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sbg_driver/msg/detail/sbg_utc_time_status__struct.h"
#include "sbg_driver/msg/detail/sbg_utc_time_status__functions.h"
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


using _SbgUtcTimeStatus__ros_msg_type = sbg_driver__msg__SbgUtcTimeStatus;

static bool _SbgUtcTimeStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SbgUtcTimeStatus__ros_msg_type * ros_message = static_cast<const _SbgUtcTimeStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: clock_stable
  {
    cdr << (ros_message->clock_stable ? true : false);
  }

  // Field name: clock_status
  {
    cdr << ros_message->clock_status;
  }

  // Field name: clock_utc_sync
  {
    cdr << (ros_message->clock_utc_sync ? true : false);
  }

  // Field name: clock_utc_status
  {
    cdr << ros_message->clock_utc_status;
  }

  return true;
}

static bool _SbgUtcTimeStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SbgUtcTimeStatus__ros_msg_type * ros_message = static_cast<_SbgUtcTimeStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: clock_stable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->clock_stable = tmp ? true : false;
  }

  // Field name: clock_status
  {
    cdr >> ros_message->clock_status;
  }

  // Field name: clock_utc_sync
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->clock_utc_sync = tmp ? true : false;
  }

  // Field name: clock_utc_status
  {
    cdr >> ros_message->clock_utc_status;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sbg_driver
size_t get_serialized_size_sbg_driver__msg__SbgUtcTimeStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SbgUtcTimeStatus__ros_msg_type * ros_message = static_cast<const _SbgUtcTimeStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name clock_stable
  {
    size_t item_size = sizeof(ros_message->clock_stable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name clock_status
  {
    size_t item_size = sizeof(ros_message->clock_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name clock_utc_sync
  {
    size_t item_size = sizeof(ros_message->clock_utc_sync);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name clock_utc_status
  {
    size_t item_size = sizeof(ros_message->clock_utc_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SbgUtcTimeStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sbg_driver__msg__SbgUtcTimeStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sbg_driver
size_t max_serialized_size_sbg_driver__msg__SbgUtcTimeStatus(
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

  // member: clock_stable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: clock_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: clock_utc_sync
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: clock_utc_status
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
    using DataType = sbg_driver__msg__SbgUtcTimeStatus;
    is_plain =
      (
      offsetof(DataType, clock_utc_status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SbgUtcTimeStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sbg_driver__msg__SbgUtcTimeStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SbgUtcTimeStatus = {
  "sbg_driver::msg",
  "SbgUtcTimeStatus",
  _SbgUtcTimeStatus__cdr_serialize,
  _SbgUtcTimeStatus__cdr_deserialize,
  _SbgUtcTimeStatus__get_serialized_size,
  _SbgUtcTimeStatus__max_serialized_size
};

static rosidl_message_type_support_t _SbgUtcTimeStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SbgUtcTimeStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sbg_driver, msg, SbgUtcTimeStatus)() {
  return &_SbgUtcTimeStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
