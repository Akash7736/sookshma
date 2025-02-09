// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sbg_driver:msg/SbgStatusCom.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_status_com__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sbg_driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sbg_driver/msg/detail/sbg_status_com__struct.h"
#include "sbg_driver/msg/detail/sbg_status_com__functions.h"
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


using _SbgStatusCom__ros_msg_type = sbg_driver__msg__SbgStatusCom;

static bool _SbgStatusCom__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SbgStatusCom__ros_msg_type * ros_message = static_cast<const _SbgStatusCom__ros_msg_type *>(untyped_ros_message);
  // Field name: port_a
  {
    cdr << (ros_message->port_a ? true : false);
  }

  // Field name: port_b
  {
    cdr << (ros_message->port_b ? true : false);
  }

  // Field name: port_c
  {
    cdr << (ros_message->port_c ? true : false);
  }

  // Field name: port_d
  {
    cdr << (ros_message->port_d ? true : false);
  }

  // Field name: port_e
  {
    cdr << (ros_message->port_e ? true : false);
  }

  // Field name: port_a_rx
  {
    cdr << (ros_message->port_a_rx ? true : false);
  }

  // Field name: port_a_tx
  {
    cdr << (ros_message->port_a_tx ? true : false);
  }

  // Field name: port_b_rx
  {
    cdr << (ros_message->port_b_rx ? true : false);
  }

  // Field name: port_b_tx
  {
    cdr << (ros_message->port_b_tx ? true : false);
  }

  // Field name: port_c_rx
  {
    cdr << (ros_message->port_c_rx ? true : false);
  }

  // Field name: port_c_tx
  {
    cdr << (ros_message->port_c_tx ? true : false);
  }

  // Field name: port_d_rx
  {
    cdr << (ros_message->port_d_rx ? true : false);
  }

  // Field name: port_d_tx
  {
    cdr << (ros_message->port_d_tx ? true : false);
  }

  // Field name: port_e_rx
  {
    cdr << (ros_message->port_e_rx ? true : false);
  }

  // Field name: port_e_tx
  {
    cdr << (ros_message->port_e_tx ? true : false);
  }

  // Field name: can_rx
  {
    cdr << (ros_message->can_rx ? true : false);
  }

  // Field name: can_tx
  {
    cdr << (ros_message->can_tx ? true : false);
  }

  // Field name: can_status
  {
    cdr << ros_message->can_status;
  }

  return true;
}

static bool _SbgStatusCom__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SbgStatusCom__ros_msg_type * ros_message = static_cast<_SbgStatusCom__ros_msg_type *>(untyped_ros_message);
  // Field name: port_a
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->port_a = tmp ? true : false;
  }

  // Field name: port_b
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->port_b = tmp ? true : false;
  }

  // Field name: port_c
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->port_c = tmp ? true : false;
  }

  // Field name: port_d
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->port_d = tmp ? true : false;
  }

  // Field name: port_e
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->port_e = tmp ? true : false;
  }

  // Field name: port_a_rx
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->port_a_rx = tmp ? true : false;
  }

  // Field name: port_a_tx
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->port_a_tx = tmp ? true : false;
  }

  // Field name: port_b_rx
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->port_b_rx = tmp ? true : false;
  }

  // Field name: port_b_tx
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->port_b_tx = tmp ? true : false;
  }

  // Field name: port_c_rx
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->port_c_rx = tmp ? true : false;
  }

  // Field name: port_c_tx
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->port_c_tx = tmp ? true : false;
  }

  // Field name: port_d_rx
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->port_d_rx = tmp ? true : false;
  }

  // Field name: port_d_tx
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->port_d_tx = tmp ? true : false;
  }

  // Field name: port_e_rx
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->port_e_rx = tmp ? true : false;
  }

  // Field name: port_e_tx
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->port_e_tx = tmp ? true : false;
  }

  // Field name: can_rx
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_rx = tmp ? true : false;
  }

  // Field name: can_tx
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_tx = tmp ? true : false;
  }

  // Field name: can_status
  {
    cdr >> ros_message->can_status;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sbg_driver
size_t get_serialized_size_sbg_driver__msg__SbgStatusCom(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SbgStatusCom__ros_msg_type * ros_message = static_cast<const _SbgStatusCom__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name port_a
  {
    size_t item_size = sizeof(ros_message->port_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name port_b
  {
    size_t item_size = sizeof(ros_message->port_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name port_c
  {
    size_t item_size = sizeof(ros_message->port_c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name port_d
  {
    size_t item_size = sizeof(ros_message->port_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name port_e
  {
    size_t item_size = sizeof(ros_message->port_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name port_a_rx
  {
    size_t item_size = sizeof(ros_message->port_a_rx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name port_a_tx
  {
    size_t item_size = sizeof(ros_message->port_a_tx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name port_b_rx
  {
    size_t item_size = sizeof(ros_message->port_b_rx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name port_b_tx
  {
    size_t item_size = sizeof(ros_message->port_b_tx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name port_c_rx
  {
    size_t item_size = sizeof(ros_message->port_c_rx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name port_c_tx
  {
    size_t item_size = sizeof(ros_message->port_c_tx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name port_d_rx
  {
    size_t item_size = sizeof(ros_message->port_d_rx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name port_d_tx
  {
    size_t item_size = sizeof(ros_message->port_d_tx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name port_e_rx
  {
    size_t item_size = sizeof(ros_message->port_e_rx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name port_e_tx
  {
    size_t item_size = sizeof(ros_message->port_e_tx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_rx
  {
    size_t item_size = sizeof(ros_message->can_rx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_tx
  {
    size_t item_size = sizeof(ros_message->can_tx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_status
  {
    size_t item_size = sizeof(ros_message->can_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SbgStatusCom__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sbg_driver__msg__SbgStatusCom(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sbg_driver
size_t max_serialized_size_sbg_driver__msg__SbgStatusCom(
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

  // member: port_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: port_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: port_c
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: port_d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: port_e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: port_a_rx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: port_a_tx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: port_b_rx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: port_b_tx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: port_c_rx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: port_c_tx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: port_d_rx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: port_d_tx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: port_e_rx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: port_e_tx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_rx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_tx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_status
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
    using DataType = sbg_driver__msg__SbgStatusCom;
    is_plain =
      (
      offsetof(DataType, can_status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SbgStatusCom__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sbg_driver__msg__SbgStatusCom(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SbgStatusCom = {
  "sbg_driver::msg",
  "SbgStatusCom",
  _SbgStatusCom__cdr_serialize,
  _SbgStatusCom__cdr_deserialize,
  _SbgStatusCom__get_serialized_size,
  _SbgStatusCom__max_serialized_size
};

static rosidl_message_type_support_t _SbgStatusCom__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SbgStatusCom,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sbg_driver, msg, SbgStatusCom)() {
  return &_SbgStatusCom__type_support;
}

#if defined(__cplusplus)
}
#endif
