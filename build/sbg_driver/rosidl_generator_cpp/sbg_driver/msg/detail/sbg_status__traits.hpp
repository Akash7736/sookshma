// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sbg_driver:msg/SbgStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_STATUS__TRAITS_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sbg_driver/msg/detail/sbg_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'status_general'
#include "sbg_driver/msg/detail/sbg_status_general__traits.hpp"
// Member 'status_com'
#include "sbg_driver/msg/detail/sbg_status_com__traits.hpp"
// Member 'status_aiding'
#include "sbg_driver/msg/detail/sbg_status_aiding__traits.hpp"

namespace sbg_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const SbgStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: time_stamp
  {
    out << "time_stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.time_stamp, out);
    out << ", ";
  }

  // member: status_general
  {
    out << "status_general: ";
    to_flow_style_yaml(msg.status_general, out);
    out << ", ";
  }

  // member: status_com
  {
    out << "status_com: ";
    to_flow_style_yaml(msg.status_com, out);
    out << ", ";
  }

  // member: status_aiding
  {
    out << "status_aiding: ";
    to_flow_style_yaml(msg.status_aiding, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SbgStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: time_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.time_stamp, out);
    out << "\n";
  }

  // member: status_general
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_general:\n";
    to_block_style_yaml(msg.status_general, out, indentation + 2);
  }

  // member: status_com
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_com:\n";
    to_block_style_yaml(msg.status_com, out, indentation + 2);
  }

  // member: status_aiding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_aiding:\n";
    to_block_style_yaml(msg.status_aiding, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SbgStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sbg_driver

namespace rosidl_generator_traits
{

[[deprecated("use sbg_driver::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sbg_driver::msg::SbgStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  sbg_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sbg_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const sbg_driver::msg::SbgStatus & msg)
{
  return sbg_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sbg_driver::msg::SbgStatus>()
{
  return "sbg_driver::msg::SbgStatus";
}

template<>
inline const char * name<sbg_driver::msg::SbgStatus>()
{
  return "sbg_driver/msg/SbgStatus";
}

template<>
struct has_fixed_size<sbg_driver::msg::SbgStatus>
  : std::integral_constant<bool, has_fixed_size<sbg_driver::msg::SbgStatusAiding>::value && has_fixed_size<sbg_driver::msg::SbgStatusCom>::value && has_fixed_size<sbg_driver::msg::SbgStatusGeneral>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sbg_driver::msg::SbgStatus>
  : std::integral_constant<bool, has_bounded_size<sbg_driver::msg::SbgStatusAiding>::value && has_bounded_size<sbg_driver::msg::SbgStatusCom>::value && has_bounded_size<sbg_driver::msg::SbgStatusGeneral>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sbg_driver::msg::SbgStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_STATUS__TRAITS_HPP_
