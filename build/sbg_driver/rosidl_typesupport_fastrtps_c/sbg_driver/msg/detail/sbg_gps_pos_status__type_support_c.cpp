// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sbg_driver:msg/SbgGpsPosStatus.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_gps_pos_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sbg_driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sbg_driver/msg/detail/sbg_gps_pos_status__struct.h"
#include "sbg_driver/msg/detail/sbg_gps_pos_status__functions.h"
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


using _SbgGpsPosStatus__ros_msg_type = sbg_driver__msg__SbgGpsPosStatus;

static bool _SbgGpsPosStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SbgGpsPosStatus__ros_msg_type * ros_message = static_cast<const _SbgGpsPosStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: gps_l1_used
  {
    cdr << (ros_message->gps_l1_used ? true : false);
  }

  // Field name: gps_l2_used
  {
    cdr << (ros_message->gps_l2_used ? true : false);
  }

  // Field name: gps_l5_used
  {
    cdr << (ros_message->gps_l5_used ? true : false);
  }

  // Field name: glo_l1_used
  {
    cdr << (ros_message->glo_l1_used ? true : false);
  }

  // Field name: glo_l2_used
  {
    cdr << (ros_message->glo_l2_used ? true : false);
  }

  return true;
}

static bool _SbgGpsPosStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SbgGpsPosStatus__ros_msg_type * ros_message = static_cast<_SbgGpsPosStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: gps_l1_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps_l1_used = tmp ? true : false;
  }

  // Field name: gps_l2_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps_l2_used = tmp ? true : false;
  }

  // Field name: gps_l5_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps_l5_used = tmp ? true : false;
  }

  // Field name: glo_l1_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->glo_l1_used = tmp ? true : false;
  }

  // Field name: glo_l2_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->glo_l2_used = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sbg_driver
size_t get_serialized_size_sbg_driver__msg__SbgGpsPosStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SbgGpsPosStatus__ros_msg_type * ros_message = static_cast<const _SbgGpsPosStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_l1_used
  {
    size_t item_size = sizeof(ros_message->gps_l1_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_l2_used
  {
    size_t item_size = sizeof(ros_message->gps_l2_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_l5_used
  {
    size_t item_size = sizeof(ros_message->gps_l5_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name glo_l1_used
  {
    size_t item_size = sizeof(ros_message->glo_l1_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name glo_l2_used
  {
    size_t item_size = sizeof(ros_message->glo_l2_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SbgGpsPosStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sbg_driver__msg__SbgGpsPosStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sbg_driver
size_t max_serialized_size_sbg_driver__msg__SbgGpsPosStatus(
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

  // member: status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps_l1_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps_l2_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps_l5_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: glo_l1_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: glo_l2_used
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
    using DataType = sbg_driver__msg__SbgGpsPosStatus;
    is_plain =
      (
      offsetof(DataType, glo_l2_used) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SbgGpsPosStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sbg_driver__msg__SbgGpsPosStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SbgGpsPosStatus = {
  "sbg_driver::msg",
  "SbgGpsPosStatus",
  _SbgGpsPosStatus__cdr_serialize,
  _SbgGpsPosStatus__cdr_deserialize,
  _SbgGpsPosStatus__get_serialized_size,
  _SbgGpsPosStatus__max_serialized_size
};

static rosidl_message_type_support_t _SbgGpsPosStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SbgGpsPosStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sbg_driver, msg, SbgGpsPosStatus)() {
  return &_SbgGpsPosStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
