// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sbg_driver:msg/SbgGpsHdt.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_GPS_HDT__TRAITS_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_GPS_HDT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sbg_driver/msg/detail/sbg_gps_hdt__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sbg_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const SbgGpsHdt & msg,
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

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: tow
  {
    out << "tow: ";
    rosidl_generator_traits::value_to_yaml(msg.tow, out);
    out << ", ";
  }

  // member: true_heading
  {
    out << "true_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.true_heading, out);
    out << ", ";
  }

  // member: true_heading_acc
  {
    out << "true_heading_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.true_heading_acc, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: pitch_acc
  {
    out << "pitch_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_acc, out);
    out << ", ";
  }

  // member: baseline
  {
    out << "baseline: ";
    rosidl_generator_traits::value_to_yaml(msg.baseline, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SbgGpsHdt & msg,
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: tow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tow: ";
    rosidl_generator_traits::value_to_yaml(msg.tow, out);
    out << "\n";
  }

  // member: true_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "true_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.true_heading, out);
    out << "\n";
  }

  // member: true_heading_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "true_heading_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.true_heading_acc, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: pitch_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_acc: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_acc, out);
    out << "\n";
  }

  // member: baseline
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baseline: ";
    rosidl_generator_traits::value_to_yaml(msg.baseline, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SbgGpsHdt & msg, bool use_flow_style = false)
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
  const sbg_driver::msg::SbgGpsHdt & msg,
  std::ostream & out, size_t indentation = 0)
{
  sbg_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sbg_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const sbg_driver::msg::SbgGpsHdt & msg)
{
  return sbg_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sbg_driver::msg::SbgGpsHdt>()
{
  return "sbg_driver::msg::SbgGpsHdt";
}

template<>
inline const char * name<sbg_driver::msg::SbgGpsHdt>()
{
  return "sbg_driver/msg/SbgGpsHdt";
}

template<>
struct has_fixed_size<sbg_driver::msg::SbgGpsHdt>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sbg_driver::msg::SbgGpsHdt>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sbg_driver::msg::SbgGpsHdt>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_GPS_HDT__TRAITS_HPP_
