// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sbg_driver:msg/SbgMagStatus.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_mag_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sbg_driver/msg/detail/sbg_mag_status__struct.hpp"

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
  const sbg_driver::msg::SbgMagStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: mag_x
  cdr << (ros_message.mag_x ? true : false);
  // Member: mag_y
  cdr << (ros_message.mag_y ? true : false);
  // Member: mag_z
  cdr << (ros_message.mag_z ? true : false);
  // Member: accel_x
  cdr << (ros_message.accel_x ? true : false);
  // Member: accel_y
  cdr << (ros_message.accel_y ? true : false);
  // Member: accel_z
  cdr << (ros_message.accel_z ? true : false);
  // Member: mags_in_range
  cdr << (ros_message.mags_in_range ? true : false);
  // Member: accels_in_range
  cdr << (ros_message.accels_in_range ? true : false);
  // Member: calibration
  cdr << (ros_message.calibration ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sbg_driver::msg::SbgMagStatus & ros_message)
{
  // Member: mag_x
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mag_x = tmp ? true : false;
  }

  // Member: mag_y
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mag_y = tmp ? true : false;
  }

  // Member: mag_z
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mag_z = tmp ? true : false;
  }

  // Member: accel_x
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accel_x = tmp ? true : false;
  }

  // Member: accel_y
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accel_y = tmp ? true : false;
  }

  // Member: accel_z
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accel_z = tmp ? true : false;
  }

  // Member: mags_in_range
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mags_in_range = tmp ? true : false;
  }

  // Member: accels_in_range
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accels_in_range = tmp ? true : false;
  }

  // Member: calibration
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.calibration = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
get_serialized_size(
  const sbg_driver::msg::SbgMagStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: mag_x
  {
    size_t item_size = sizeof(ros_message.mag_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_y
  {
    size_t item_size = sizeof(ros_message.mag_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_z
  {
    size_t item_size = sizeof(ros_message.mag_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_x
  {
    size_t item_size = sizeof(ros_message.accel_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_y
  {
    size_t item_size = sizeof(ros_message.accel_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_z
  {
    size_t item_size = sizeof(ros_message.accel_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mags_in_range
  {
    size_t item_size = sizeof(ros_message.mags_in_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accels_in_range
  {
    size_t item_size = sizeof(ros_message.accels_in_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: calibration
  {
    size_t item_size = sizeof(ros_message.calibration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
max_serialized_size_SbgMagStatus(
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


  // Member: mag_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mag_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mag_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: accel_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: accel_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: accel_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mags_in_range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: accels_in_range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: calibration
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
    using DataType = sbg_driver::msg::SbgMagStatus;
    is_plain =
      (
      offsetof(DataType, calibration) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SbgMagStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sbg_driver::msg::SbgMagStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SbgMagStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sbg_driver::msg::SbgMagStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SbgMagStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sbg_driver::msg::SbgMagStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SbgMagStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SbgMagStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SbgMagStatus__callbacks = {
  "sbg_driver::msg",
  "SbgMagStatus",
  _SbgMagStatus__cdr_serialize,
  _SbgMagStatus__cdr_deserialize,
  _SbgMagStatus__get_serialized_size,
  _SbgMagStatus__max_serialized_size
};

static rosidl_message_type_support_t _SbgMagStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SbgMagStatus__callbacks,
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
get_message_type_support_handle<sbg_driver::msg::SbgMagStatus>()
{
  return &sbg_driver::msg::typesupport_fastrtps_cpp::_SbgMagStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sbg_driver, msg, SbgMagStatus)() {
  return &sbg_driver::msg::typesupport_fastrtps_cpp::_SbgMagStatus__handle;
}

#ifdef __cplusplus
}
#endif
