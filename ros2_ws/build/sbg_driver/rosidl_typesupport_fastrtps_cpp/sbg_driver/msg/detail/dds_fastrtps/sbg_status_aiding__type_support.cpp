// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sbg_driver:msg/SbgStatusAiding.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_status_aiding__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sbg_driver/msg/detail/sbg_status_aiding__struct.hpp"

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
  const sbg_driver::msg::SbgStatusAiding & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: gps1_pos_recv
  cdr << (ros_message.gps1_pos_recv ? true : false);
  // Member: gps1_vel_recv
  cdr << (ros_message.gps1_vel_recv ? true : false);
  // Member: gps1_hdt_recv
  cdr << (ros_message.gps1_hdt_recv ? true : false);
  // Member: gps1_utc_recv
  cdr << (ros_message.gps1_utc_recv ? true : false);
  // Member: mag_recv
  cdr << (ros_message.mag_recv ? true : false);
  // Member: odo_recv
  cdr << (ros_message.odo_recv ? true : false);
  // Member: dvl_recv
  cdr << (ros_message.dvl_recv ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sbg_driver::msg::SbgStatusAiding & ros_message)
{
  // Member: gps1_pos_recv
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gps1_pos_recv = tmp ? true : false;
  }

  // Member: gps1_vel_recv
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gps1_vel_recv = tmp ? true : false;
  }

  // Member: gps1_hdt_recv
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gps1_hdt_recv = tmp ? true : false;
  }

  // Member: gps1_utc_recv
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gps1_utc_recv = tmp ? true : false;
  }

  // Member: mag_recv
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mag_recv = tmp ? true : false;
  }

  // Member: odo_recv
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.odo_recv = tmp ? true : false;
  }

  // Member: dvl_recv
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dvl_recv = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
get_serialized_size(
  const sbg_driver::msg::SbgStatusAiding & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: gps1_pos_recv
  {
    size_t item_size = sizeof(ros_message.gps1_pos_recv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps1_vel_recv
  {
    size_t item_size = sizeof(ros_message.gps1_vel_recv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps1_hdt_recv
  {
    size_t item_size = sizeof(ros_message.gps1_hdt_recv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps1_utc_recv
  {
    size_t item_size = sizeof(ros_message.gps1_utc_recv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_recv
  {
    size_t item_size = sizeof(ros_message.mag_recv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: odo_recv
  {
    size_t item_size = sizeof(ros_message.odo_recv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dvl_recv
  {
    size_t item_size = sizeof(ros_message.dvl_recv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
max_serialized_size_SbgStatusAiding(
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


  // Member: gps1_pos_recv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gps1_vel_recv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gps1_hdt_recv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gps1_utc_recv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mag_recv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: odo_recv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dvl_recv
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
    using DataType = sbg_driver::msg::SbgStatusAiding;
    is_plain =
      (
      offsetof(DataType, dvl_recv) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SbgStatusAiding__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sbg_driver::msg::SbgStatusAiding *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SbgStatusAiding__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sbg_driver::msg::SbgStatusAiding *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SbgStatusAiding__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sbg_driver::msg::SbgStatusAiding *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SbgStatusAiding__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SbgStatusAiding(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SbgStatusAiding__callbacks = {
  "sbg_driver::msg",
  "SbgStatusAiding",
  _SbgStatusAiding__cdr_serialize,
  _SbgStatusAiding__cdr_deserialize,
  _SbgStatusAiding__get_serialized_size,
  _SbgStatusAiding__max_serialized_size
};

static rosidl_message_type_support_t _SbgStatusAiding__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SbgStatusAiding__callbacks,
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
get_message_type_support_handle<sbg_driver::msg::SbgStatusAiding>()
{
  return &sbg_driver::msg::typesupport_fastrtps_cpp::_SbgStatusAiding__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sbg_driver, msg, SbgStatusAiding)() {
  return &sbg_driver::msg::typesupport_fastrtps_cpp::_SbgStatusAiding__handle;
}

#ifdef __cplusplus
}
#endif
