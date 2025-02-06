// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sbg_driver:msg/SbgEkfStatus.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_ekf_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sbg_driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sbg_driver/msg/detail/sbg_ekf_status__struct.h"
#include "sbg_driver/msg/detail/sbg_ekf_status__functions.h"
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


using _SbgEkfStatus__ros_msg_type = sbg_driver__msg__SbgEkfStatus;

static bool _SbgEkfStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SbgEkfStatus__ros_msg_type * ros_message = static_cast<const _SbgEkfStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: solution_mode
  {
    cdr << ros_message->solution_mode;
  }

  // Field name: attitude_valid
  {
    cdr << (ros_message->attitude_valid ? true : false);
  }

  // Field name: heading_valid
  {
    cdr << (ros_message->heading_valid ? true : false);
  }

  // Field name: velocity_valid
  {
    cdr << (ros_message->velocity_valid ? true : false);
  }

  // Field name: position_valid
  {
    cdr << (ros_message->position_valid ? true : false);
  }

  // Field name: vert_ref_used
  {
    cdr << (ros_message->vert_ref_used ? true : false);
  }

  // Field name: mag_ref_used
  {
    cdr << (ros_message->mag_ref_used ? true : false);
  }

  // Field name: gps1_vel_used
  {
    cdr << (ros_message->gps1_vel_used ? true : false);
  }

  // Field name: gps1_pos_used
  {
    cdr << (ros_message->gps1_pos_used ? true : false);
  }

  // Field name: gps1_course_used
  {
    cdr << (ros_message->gps1_course_used ? true : false);
  }

  // Field name: gps1_hdt_used
  {
    cdr << (ros_message->gps1_hdt_used ? true : false);
  }

  // Field name: gps2_vel_used
  {
    cdr << (ros_message->gps2_vel_used ? true : false);
  }

  // Field name: gps2_pos_used
  {
    cdr << (ros_message->gps2_pos_used ? true : false);
  }

  // Field name: gps2_course_used
  {
    cdr << (ros_message->gps2_course_used ? true : false);
  }

  // Field name: gps2_hdt_used
  {
    cdr << (ros_message->gps2_hdt_used ? true : false);
  }

  // Field name: odo_used
  {
    cdr << (ros_message->odo_used ? true : false);
  }

  return true;
}

static bool _SbgEkfStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SbgEkfStatus__ros_msg_type * ros_message = static_cast<_SbgEkfStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: solution_mode
  {
    cdr >> ros_message->solution_mode;
  }

  // Field name: attitude_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->attitude_valid = tmp ? true : false;
  }

  // Field name: heading_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->heading_valid = tmp ? true : false;
  }

  // Field name: velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->velocity_valid = tmp ? true : false;
  }

  // Field name: position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->position_valid = tmp ? true : false;
  }

  // Field name: vert_ref_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->vert_ref_used = tmp ? true : false;
  }

  // Field name: mag_ref_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mag_ref_used = tmp ? true : false;
  }

  // Field name: gps1_vel_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps1_vel_used = tmp ? true : false;
  }

  // Field name: gps1_pos_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps1_pos_used = tmp ? true : false;
  }

  // Field name: gps1_course_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps1_course_used = tmp ? true : false;
  }

  // Field name: gps1_hdt_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps1_hdt_used = tmp ? true : false;
  }

  // Field name: gps2_vel_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps2_vel_used = tmp ? true : false;
  }

  // Field name: gps2_pos_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps2_pos_used = tmp ? true : false;
  }

  // Field name: gps2_course_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps2_course_used = tmp ? true : false;
  }

  // Field name: gps2_hdt_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps2_hdt_used = tmp ? true : false;
  }

  // Field name: odo_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->odo_used = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sbg_driver
size_t get_serialized_size_sbg_driver__msg__SbgEkfStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SbgEkfStatus__ros_msg_type * ros_message = static_cast<const _SbgEkfStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name solution_mode
  {
    size_t item_size = sizeof(ros_message->solution_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name attitude_valid
  {
    size_t item_size = sizeof(ros_message->attitude_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_valid
  {
    size_t item_size = sizeof(ros_message->heading_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_valid
  {
    size_t item_size = sizeof(ros_message->velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_valid
  {
    size_t item_size = sizeof(ros_message->position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vert_ref_used
  {
    size_t item_size = sizeof(ros_message->vert_ref_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_ref_used
  {
    size_t item_size = sizeof(ros_message->mag_ref_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps1_vel_used
  {
    size_t item_size = sizeof(ros_message->gps1_vel_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps1_pos_used
  {
    size_t item_size = sizeof(ros_message->gps1_pos_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps1_course_used
  {
    size_t item_size = sizeof(ros_message->gps1_course_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps1_hdt_used
  {
    size_t item_size = sizeof(ros_message->gps1_hdt_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps2_vel_used
  {
    size_t item_size = sizeof(ros_message->gps2_vel_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps2_pos_used
  {
    size_t item_size = sizeof(ros_message->gps2_pos_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps2_course_used
  {
    size_t item_size = sizeof(ros_message->gps2_course_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps2_hdt_used
  {
    size_t item_size = sizeof(ros_message->gps2_hdt_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name odo_used
  {
    size_t item_size = sizeof(ros_message->odo_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SbgEkfStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sbg_driver__msg__SbgEkfStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sbg_driver
size_t max_serialized_size_sbg_driver__msg__SbgEkfStatus(
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

  // member: solution_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: attitude_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heading_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: velocity_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: position_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vert_ref_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mag_ref_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps1_vel_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps1_pos_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps1_course_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps1_hdt_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps2_vel_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps2_pos_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps2_course_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps2_hdt_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: odo_used
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
    using DataType = sbg_driver__msg__SbgEkfStatus;
    is_plain =
      (
      offsetof(DataType, odo_used) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SbgEkfStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sbg_driver__msg__SbgEkfStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SbgEkfStatus = {
  "sbg_driver::msg",
  "SbgEkfStatus",
  _SbgEkfStatus__cdr_serialize,
  _SbgEkfStatus__cdr_deserialize,
  _SbgEkfStatus__get_serialized_size,
  _SbgEkfStatus__max_serialized_size
};

static rosidl_message_type_support_t _SbgEkfStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SbgEkfStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sbg_driver, msg, SbgEkfStatus)() {
  return &_SbgEkfStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
