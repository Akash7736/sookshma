// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sbg_driver:msg/SbgStatusCom.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_status_com__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sbg_driver/msg/detail/sbg_status_com__struct.hpp"

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
  const sbg_driver::msg::SbgStatusCom & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: port_a
  cdr << (ros_message.port_a ? true : false);
  // Member: port_b
  cdr << (ros_message.port_b ? true : false);
  // Member: port_c
  cdr << (ros_message.port_c ? true : false);
  // Member: port_d
  cdr << (ros_message.port_d ? true : false);
  // Member: port_e
  cdr << (ros_message.port_e ? true : false);
  // Member: port_a_rx
  cdr << (ros_message.port_a_rx ? true : false);
  // Member: port_a_tx
  cdr << (ros_message.port_a_tx ? true : false);
  // Member: port_b_rx
  cdr << (ros_message.port_b_rx ? true : false);
  // Member: port_b_tx
  cdr << (ros_message.port_b_tx ? true : false);
  // Member: port_c_rx
  cdr << (ros_message.port_c_rx ? true : false);
  // Member: port_c_tx
  cdr << (ros_message.port_c_tx ? true : false);
  // Member: port_d_rx
  cdr << (ros_message.port_d_rx ? true : false);
  // Member: port_d_tx
  cdr << (ros_message.port_d_tx ? true : false);
  // Member: port_e_rx
  cdr << (ros_message.port_e_rx ? true : false);
  // Member: port_e_tx
  cdr << (ros_message.port_e_tx ? true : false);
  // Member: can_rx
  cdr << (ros_message.can_rx ? true : false);
  // Member: can_tx
  cdr << (ros_message.can_tx ? true : false);
  // Member: can_status
  cdr << ros_message.can_status;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sbg_driver::msg::SbgStatusCom & ros_message)
{
  // Member: port_a
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.port_a = tmp ? true : false;
  }

  // Member: port_b
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.port_b = tmp ? true : false;
  }

  // Member: port_c
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.port_c = tmp ? true : false;
  }

  // Member: port_d
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.port_d = tmp ? true : false;
  }

  // Member: port_e
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.port_e = tmp ? true : false;
  }

  // Member: port_a_rx
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.port_a_rx = tmp ? true : false;
  }

  // Member: port_a_tx
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.port_a_tx = tmp ? true : false;
  }

  // Member: port_b_rx
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.port_b_rx = tmp ? true : false;
  }

  // Member: port_b_tx
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.port_b_tx = tmp ? true : false;
  }

  // Member: port_c_rx
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.port_c_rx = tmp ? true : false;
  }

  // Member: port_c_tx
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.port_c_tx = tmp ? true : false;
  }

  // Member: port_d_rx
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.port_d_rx = tmp ? true : false;
  }

  // Member: port_d_tx
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.port_d_tx = tmp ? true : false;
  }

  // Member: port_e_rx
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.port_e_rx = tmp ? true : false;
  }

  // Member: port_e_tx
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.port_e_tx = tmp ? true : false;
  }

  // Member: can_rx
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_rx = tmp ? true : false;
  }

  // Member: can_tx
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_tx = tmp ? true : false;
  }

  // Member: can_status
  cdr >> ros_message.can_status;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
get_serialized_size(
  const sbg_driver::msg::SbgStatusCom & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: port_a
  {
    size_t item_size = sizeof(ros_message.port_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: port_b
  {
    size_t item_size = sizeof(ros_message.port_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: port_c
  {
    size_t item_size = sizeof(ros_message.port_c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: port_d
  {
    size_t item_size = sizeof(ros_message.port_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: port_e
  {
    size_t item_size = sizeof(ros_message.port_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: port_a_rx
  {
    size_t item_size = sizeof(ros_message.port_a_rx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: port_a_tx
  {
    size_t item_size = sizeof(ros_message.port_a_tx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: port_b_rx
  {
    size_t item_size = sizeof(ros_message.port_b_rx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: port_b_tx
  {
    size_t item_size = sizeof(ros_message.port_b_tx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: port_c_rx
  {
    size_t item_size = sizeof(ros_message.port_c_rx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: port_c_tx
  {
    size_t item_size = sizeof(ros_message.port_c_tx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: port_d_rx
  {
    size_t item_size = sizeof(ros_message.port_d_rx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: port_d_tx
  {
    size_t item_size = sizeof(ros_message.port_d_tx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: port_e_rx
  {
    size_t item_size = sizeof(ros_message.port_e_rx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: port_e_tx
  {
    size_t item_size = sizeof(ros_message.port_e_tx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_rx
  {
    size_t item_size = sizeof(ros_message.can_rx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_tx
  {
    size_t item_size = sizeof(ros_message.can_tx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_status
  {
    size_t item_size = sizeof(ros_message.can_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
max_serialized_size_SbgStatusCom(
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


  // Member: port_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: port_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: port_c
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: port_d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: port_e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: port_a_rx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: port_a_tx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: port_b_rx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: port_b_tx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: port_c_rx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: port_c_tx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: port_d_rx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: port_d_tx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: port_e_rx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: port_e_tx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_rx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_tx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_status
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
    using DataType = sbg_driver::msg::SbgStatusCom;
    is_plain =
      (
      offsetof(DataType, can_status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SbgStatusCom__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sbg_driver::msg::SbgStatusCom *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SbgStatusCom__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sbg_driver::msg::SbgStatusCom *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SbgStatusCom__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sbg_driver::msg::SbgStatusCom *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SbgStatusCom__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SbgStatusCom(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SbgStatusCom__callbacks = {
  "sbg_driver::msg",
  "SbgStatusCom",
  _SbgStatusCom__cdr_serialize,
  _SbgStatusCom__cdr_deserialize,
  _SbgStatusCom__get_serialized_size,
  _SbgStatusCom__max_serialized_size
};

static rosidl_message_type_support_t _SbgStatusCom__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SbgStatusCom__callbacks,
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
get_message_type_support_handle<sbg_driver::msg::SbgStatusCom>()
{
  return &sbg_driver::msg::typesupport_fastrtps_cpp::_SbgStatusCom__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sbg_driver, msg, SbgStatusCom)() {
  return &sbg_driver::msg::typesupport_fastrtps_cpp::_SbgStatusCom__handle;
}

#ifdef __cplusplus
}
#endif
