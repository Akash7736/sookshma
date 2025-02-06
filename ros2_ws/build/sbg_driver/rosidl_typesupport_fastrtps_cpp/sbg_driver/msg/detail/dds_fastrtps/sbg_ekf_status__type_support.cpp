// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sbg_driver:msg/SbgEkfStatus.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_ekf_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sbg_driver/msg/detail/sbg_ekf_status__struct.hpp"

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
  const sbg_driver::msg::SbgEkfStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: solution_mode
  cdr << ros_message.solution_mode;
  // Member: attitude_valid
  cdr << (ros_message.attitude_valid ? true : false);
  // Member: heading_valid
  cdr << (ros_message.heading_valid ? true : false);
  // Member: velocity_valid
  cdr << (ros_message.velocity_valid ? true : false);
  // Member: position_valid
  cdr << (ros_message.position_valid ? true : false);
  // Member: vert_ref_used
  cdr << (ros_message.vert_ref_used ? true : false);
  // Member: mag_ref_used
  cdr << (ros_message.mag_ref_used ? true : false);
  // Member: gps1_vel_used
  cdr << (ros_message.gps1_vel_used ? true : false);
  // Member: gps1_pos_used
  cdr << (ros_message.gps1_pos_used ? true : false);
  // Member: gps1_hdt_used
  cdr << (ros_message.gps1_hdt_used ? true : false);
  // Member: gps2_vel_used
  cdr << (ros_message.gps2_vel_used ? true : false);
  // Member: gps2_pos_used
  cdr << (ros_message.gps2_pos_used ? true : false);
  // Member: gps2_hdt_used
  cdr << (ros_message.gps2_hdt_used ? true : false);
  // Member: odo_used
  cdr << (ros_message.odo_used ? true : false);
  // Member: dvl_bt_used
  cdr << (ros_message.dvl_bt_used ? true : false);
  // Member: dvl_wt_used
  cdr << (ros_message.dvl_wt_used ? true : false);
  // Member: user_pos_used
  cdr << (ros_message.user_pos_used ? true : false);
  // Member: user_vel_used
  cdr << (ros_message.user_vel_used ? true : false);
  // Member: user_heading_used
  cdr << (ros_message.user_heading_used ? true : false);
  // Member: usbl_used
  cdr << (ros_message.usbl_used ? true : false);
  // Member: air_data_used
  cdr << (ros_message.air_data_used ? true : false);
  // Member: zupt_used
  cdr << (ros_message.zupt_used ? true : false);
  // Member: align_valid
  cdr << (ros_message.align_valid ? true : false);
  // Member: depth_used
  cdr << (ros_message.depth_used ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sbg_driver::msg::SbgEkfStatus & ros_message)
{
  // Member: solution_mode
  cdr >> ros_message.solution_mode;

  // Member: attitude_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.attitude_valid = tmp ? true : false;
  }

  // Member: heading_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.heading_valid = tmp ? true : false;
  }

  // Member: velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.velocity_valid = tmp ? true : false;
  }

  // Member: position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.position_valid = tmp ? true : false;
  }

  // Member: vert_ref_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.vert_ref_used = tmp ? true : false;
  }

  // Member: mag_ref_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mag_ref_used = tmp ? true : false;
  }

  // Member: gps1_vel_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gps1_vel_used = tmp ? true : false;
  }

  // Member: gps1_pos_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gps1_pos_used = tmp ? true : false;
  }

  // Member: gps1_hdt_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gps1_hdt_used = tmp ? true : false;
  }

  // Member: gps2_vel_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gps2_vel_used = tmp ? true : false;
  }

  // Member: gps2_pos_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gps2_pos_used = tmp ? true : false;
  }

  // Member: gps2_hdt_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gps2_hdt_used = tmp ? true : false;
  }

  // Member: odo_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.odo_used = tmp ? true : false;
  }

  // Member: dvl_bt_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dvl_bt_used = tmp ? true : false;
  }

  // Member: dvl_wt_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dvl_wt_used = tmp ? true : false;
  }

  // Member: user_pos_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.user_pos_used = tmp ? true : false;
  }

  // Member: user_vel_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.user_vel_used = tmp ? true : false;
  }

  // Member: user_heading_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.user_heading_used = tmp ? true : false;
  }

  // Member: usbl_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.usbl_used = tmp ? true : false;
  }

  // Member: air_data_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.air_data_used = tmp ? true : false;
  }

  // Member: zupt_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.zupt_used = tmp ? true : false;
  }

  // Member: align_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.align_valid = tmp ? true : false;
  }

  // Member: depth_used
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.depth_used = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
get_serialized_size(
  const sbg_driver::msg::SbgEkfStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: solution_mode
  {
    size_t item_size = sizeof(ros_message.solution_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: attitude_valid
  {
    size_t item_size = sizeof(ros_message.attitude_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading_valid
  {
    size_t item_size = sizeof(ros_message.heading_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity_valid
  {
    size_t item_size = sizeof(ros_message.velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_valid
  {
    size_t item_size = sizeof(ros_message.position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vert_ref_used
  {
    size_t item_size = sizeof(ros_message.vert_ref_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_ref_used
  {
    size_t item_size = sizeof(ros_message.mag_ref_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps1_vel_used
  {
    size_t item_size = sizeof(ros_message.gps1_vel_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps1_pos_used
  {
    size_t item_size = sizeof(ros_message.gps1_pos_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps1_hdt_used
  {
    size_t item_size = sizeof(ros_message.gps1_hdt_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps2_vel_used
  {
    size_t item_size = sizeof(ros_message.gps2_vel_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps2_pos_used
  {
    size_t item_size = sizeof(ros_message.gps2_pos_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps2_hdt_used
  {
    size_t item_size = sizeof(ros_message.gps2_hdt_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: odo_used
  {
    size_t item_size = sizeof(ros_message.odo_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dvl_bt_used
  {
    size_t item_size = sizeof(ros_message.dvl_bt_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dvl_wt_used
  {
    size_t item_size = sizeof(ros_message.dvl_wt_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: user_pos_used
  {
    size_t item_size = sizeof(ros_message.user_pos_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: user_vel_used
  {
    size_t item_size = sizeof(ros_message.user_vel_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: user_heading_used
  {
    size_t item_size = sizeof(ros_message.user_heading_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: usbl_used
  {
    size_t item_size = sizeof(ros_message.usbl_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: air_data_used
  {
    size_t item_size = sizeof(ros_message.air_data_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: zupt_used
  {
    size_t item_size = sizeof(ros_message.zupt_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: align_valid
  {
    size_t item_size = sizeof(ros_message.align_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: depth_used
  {
    size_t item_size = sizeof(ros_message.depth_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
max_serialized_size_SbgEkfStatus(
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


  // Member: solution_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: attitude_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: heading_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: velocity_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: position_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vert_ref_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mag_ref_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gps1_vel_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gps1_pos_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gps1_hdt_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gps2_vel_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gps2_pos_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gps2_hdt_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: odo_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dvl_bt_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dvl_wt_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: user_pos_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: user_vel_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: user_heading_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: usbl_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: air_data_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: zupt_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: align_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: depth_used
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
    using DataType = sbg_driver::msg::SbgEkfStatus;
    is_plain =
      (
      offsetof(DataType, depth_used) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SbgEkfStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sbg_driver::msg::SbgEkfStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SbgEkfStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sbg_driver::msg::SbgEkfStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SbgEkfStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sbg_driver::msg::SbgEkfStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SbgEkfStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SbgEkfStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SbgEkfStatus__callbacks = {
  "sbg_driver::msg",
  "SbgEkfStatus",
  _SbgEkfStatus__cdr_serialize,
  _SbgEkfStatus__cdr_deserialize,
  _SbgEkfStatus__get_serialized_size,
  _SbgEkfStatus__max_serialized_size
};

static rosidl_message_type_support_t _SbgEkfStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SbgEkfStatus__callbacks,
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
get_message_type_support_handle<sbg_driver::msg::SbgEkfStatus>()
{
  return &sbg_driver::msg::typesupport_fastrtps_cpp::_SbgEkfStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sbg_driver, msg, SbgEkfStatus)() {
  return &sbg_driver::msg::typesupport_fastrtps_cpp::_SbgEkfStatus__handle;
}

#ifdef __cplusplus
}
#endif
