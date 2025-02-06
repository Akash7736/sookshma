// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sbg_driver:msg/SbgEkfEuler.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_EKF_EULER__TRAITS_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_EKF_EULER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sbg_driver/msg/detail/sbg_ekf_euler__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'angle'
// Member 'accuracy'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'status'
#include "sbg_driver/msg/detail/sbg_ekf_status__traits.hpp"

namespace sbg_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const SbgEkfEuler & msg,
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

  // member: angle
  {
    out << "angle: ";
    to_flow_style_yaml(msg.angle, out);
    out << ", ";
  }

  // member: accuracy
  {
    out << "accuracy: ";
    to_flow_style_yaml(msg.accuracy, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SbgEkfEuler & msg,
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

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle:\n";
    to_block_style_yaml(msg.angle, out, indentation + 2);
  }

  // member: accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accuracy:\n";
    to_block_style_yaml(msg.accuracy, out, indentation + 2);
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SbgEkfEuler & msg, bool use_flow_style = false)
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
  const sbg_driver::msg::SbgEkfEuler & msg,
  std::ostream & out, size_t indentation = 0)
{
  sbg_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sbg_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const sbg_driver::msg::SbgEkfEuler & msg)
{
  return sbg_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sbg_driver::msg::SbgEkfEuler>()
{
  return "sbg_driver::msg::SbgEkfEuler";
}

template<>
inline const char * name<sbg_driver::msg::SbgEkfEuler>()
{
  return "sbg_driver/msg/SbgEkfEuler";
}

template<>
struct has_fixed_size<sbg_driver::msg::SbgEkfEuler>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<sbg_driver::msg::SbgEkfStatus>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sbg_driver::msg::SbgEkfEuler>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<sbg_driver::msg::SbgEkfStatus>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sbg_driver::msg::SbgEkfEuler>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_EKF_EULER__TRAITS_HPP_
