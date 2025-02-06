// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sbg_driver:msg/SbgImuShort.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_IMU_SHORT__TRAITS_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_IMU_SHORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sbg_driver/msg/detail/sbg_imu_short__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'imu_status'
#include "sbg_driver/msg/detail/sbg_imu_status__traits.hpp"
// Member 'delta_velocity'
// Member 'delta_angle'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace sbg_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const SbgImuShort & msg,
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

  // member: imu_status
  {
    out << "imu_status: ";
    to_flow_style_yaml(msg.imu_status, out);
    out << ", ";
  }

  // member: delta_velocity
  {
    out << "delta_velocity: ";
    to_flow_style_yaml(msg.delta_velocity, out);
    out << ", ";
  }

  // member: delta_angle
  {
    out << "delta_angle: ";
    to_flow_style_yaml(msg.delta_angle, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SbgImuShort & msg,
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

  // member: imu_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_status:\n";
    to_block_style_yaml(msg.imu_status, out, indentation + 2);
  }

  // member: delta_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_velocity:\n";
    to_block_style_yaml(msg.delta_velocity, out, indentation + 2);
  }

  // member: delta_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_angle:\n";
    to_block_style_yaml(msg.delta_angle, out, indentation + 2);
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SbgImuShort & msg, bool use_flow_style = false)
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
  const sbg_driver::msg::SbgImuShort & msg,
  std::ostream & out, size_t indentation = 0)
{
  sbg_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sbg_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const sbg_driver::msg::SbgImuShort & msg)
{
  return sbg_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sbg_driver::msg::SbgImuShort>()
{
  return "sbg_driver::msg::SbgImuShort";
}

template<>
inline const char * name<sbg_driver::msg::SbgImuShort>()
{
  return "sbg_driver/msg/SbgImuShort";
}

template<>
struct has_fixed_size<sbg_driver::msg::SbgImuShort>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<sbg_driver::msg::SbgImuStatus>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sbg_driver::msg::SbgImuShort>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<sbg_driver::msg::SbgImuStatus>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sbg_driver::msg::SbgImuShort>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_IMU_SHORT__TRAITS_HPP_
