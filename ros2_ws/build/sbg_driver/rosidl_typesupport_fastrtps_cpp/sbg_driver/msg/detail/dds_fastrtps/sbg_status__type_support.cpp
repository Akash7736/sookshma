// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sbg_driver:msg/SbgStatus.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sbg_driver/msg/detail/sbg_status__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace sbg_driver
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sbg_driver::msg::SbgStatusGeneral &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sbg_driver::msg::SbgStatusGeneral &);
size_t get_serialized_size(
  const sbg_driver::msg::SbgStatusGeneral &,
  size_t current_alignment);
size_t
max_serialized_size_SbgStatusGeneral(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sbg_driver

namespace sbg_driver
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sbg_driver::msg::SbgStatusCom &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sbg_driver::msg::SbgStatusCom &);
size_t get_serialized_size(
  const sbg_driver::msg::SbgStatusCom &,
  size_t current_alignment);
size_t
max_serialized_size_SbgStatusCom(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sbg_driver

namespace sbg_driver
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sbg_driver::msg::SbgStatusAiding &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sbg_driver::msg::SbgStatusAiding &);
size_t get_serialized_size(
  const sbg_driver::msg::SbgStatusAiding &,
  size_t current_alignment);
size_t
max_serialized_size_SbgStatusAiding(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sbg_driver


namespace sbg_driver
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
cdr_serialize(
  const sbg_driver::msg::SbgStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: time_stamp
  cdr << ros_message.time_stamp;
  // Member: status_general
  sbg_driver::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.status_general,
    cdr);
  // Member: status_com
  sbg_driver::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.status_com,
    cdr);
  // Member: status_aiding
  sbg_driver::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.status_aiding,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sbg_driver::msg::SbgStatus & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: time_stamp
  cdr >> ros_message.time_stamp;

  // Member: status_general
  sbg_driver::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.status_general);

  // Member: status_com
  sbg_driver::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.status_com);

  // Member: status_aiding
  sbg_driver::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.status_aiding);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
get_serialized_size(
  const sbg_driver::msg::SbgStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: time_stamp
  {
    size_t item_size = sizeof(ros_message.time_stamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status_general

  current_alignment +=
    sbg_driver::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.status_general, current_alignment);
  // Member: status_com

  current_alignment +=
    sbg_driver::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.status_com, current_alignment);
  // Member: status_aiding

  current_alignment +=
    sbg_driver::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.status_aiding, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sbg_driver
max_serialized_size_SbgStatus(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: time_stamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status_general
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sbg_driver::msg::typesupport_fastrtps_cpp::max_serialized_size_SbgStatusGeneral(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: status_com
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sbg_driver::msg::typesupport_fastrtps_cpp::max_serialized_size_SbgStatusCom(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: status_aiding
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sbg_driver::msg::typesupport_fastrtps_cpp::max_serialized_size_SbgStatusAiding(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sbg_driver::msg::SbgStatus;
    is_plain =
      (
      offsetof(DataType, status_aiding) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SbgStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sbg_driver::msg::SbgStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SbgStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sbg_driver::msg::SbgStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SbgStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sbg_driver::msg::SbgStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SbgStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SbgStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SbgStatus__callbacks = {
  "sbg_driver::msg",
  "SbgStatus",
  _SbgStatus__cdr_serialize,
  _SbgStatus__cdr_deserialize,
  _SbgStatus__get_serialized_size,
  _SbgStatus__max_serialized_size
};

static rosidl_message_type_support_t _SbgStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SbgStatus__callbacks,
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
get_message_type_support_handle<sbg_driver::msg::SbgStatus>()
{
  return &sbg_driver::msg::typesupport_fastrtps_cpp::_SbgStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sbg_driver, msg, SbgStatus)() {
  return &sbg_driver::msg::typesupport_fastrtps_cpp::_SbgStatus__handle;
}

#ifdef __cplusplus
}
#endif
