// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sbg_driver:msg/SbgEvent.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_EVENT__TRAITS_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_EVENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sbg_driver/msg/detail/sbg_event__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sbg_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const SbgEvent & msg,
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

  // member: overflow
  {
    out << "overflow: ";
    rosidl_generator_traits::value_to_yaml(msg.overflow, out);
    out << ", ";
  }

  // member: offset_0_valid
  {
    out << "offset_0_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_0_valid, out);
    out << ", ";
  }

  // member: offset_1_valid
  {
    out << "offset_1_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_1_valid, out);
    out << ", ";
  }

  // member: offset_2_valid
  {
    out << "offset_2_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_2_valid, out);
    out << ", ";
  }

  // member: offset_3_valid
  {
    out << "offset_3_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_3_valid, out);
    out << ", ";
  }

  // member: time_offset_0
  {
    out << "time_offset_0: ";
    rosidl_generator_traits::value_to_yaml(msg.time_offset_0, out);
    out << ", ";
  }

  // member: time_offset_1
  {
    out << "time_offset_1: ";
    rosidl_generator_traits::value_to_yaml(msg.time_offset_1, out);
    out << ", ";
  }

  // member: time_offset_2
  {
    out << "time_offset_2: ";
    rosidl_generator_traits::value_to_yaml(msg.time_offset_2, out);
    out << ", ";
  }

  // member: time_offset_3
  {
    out << "time_offset_3: ";
    rosidl_generator_traits::value_to_yaml(msg.time_offset_3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SbgEvent & msg,
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

  // member: overflow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overflow: ";
    rosidl_generator_traits::value_to_yaml(msg.overflow, out);
    out << "\n";
  }

  // member: offset_0_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_0_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_0_valid, out);
    out << "\n";
  }

  // member: offset_1_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_1_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_1_valid, out);
    out << "\n";
  }

  // member: offset_2_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_2_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_2_valid, out);
    out << "\n";
  }

  // member: offset_3_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_3_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_3_valid, out);
    out << "\n";
  }

  // member: time_offset_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_offset_0: ";
    rosidl_generator_traits::value_to_yaml(msg.time_offset_0, out);
    out << "\n";
  }

  // member: time_offset_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_offset_1: ";
    rosidl_generator_traits::value_to_yaml(msg.time_offset_1, out);
    out << "\n";
  }

  // member: time_offset_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_offset_2: ";
    rosidl_generator_traits::value_to_yaml(msg.time_offset_2, out);
    out << "\n";
  }

  // member: time_offset_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_offset_3: ";
    rosidl_generator_traits::value_to_yaml(msg.time_offset_3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SbgEvent & msg, bool use_flow_style = false)
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
  const sbg_driver::msg::SbgEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  sbg_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sbg_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const sbg_driver::msg::SbgEvent & msg)
{
  return sbg_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sbg_driver::msg::SbgEvent>()
{
  return "sbg_driver::msg::SbgEvent";
}

template<>
inline const char * name<sbg_driver::msg::SbgEvent>()
{
  return "sbg_driver/msg/SbgEvent";
}

template<>
struct has_fixed_size<sbg_driver::msg::SbgEvent>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sbg_driver::msg::SbgEvent>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sbg_driver::msg::SbgEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_EVENT__TRAITS_HPP_
