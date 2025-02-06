// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sbg_driver:msg/SbgAirData.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_AIR_DATA__TRAITS_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_AIR_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sbg_driver/msg/detail/sbg_air_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'status'
#include "sbg_driver/msg/detail/sbg_air_data_status__traits.hpp"

namespace sbg_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const SbgAirData & msg,
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
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: pressure_abs
  {
    out << "pressure_abs: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure_abs, out);
    out << ", ";
  }

  // member: altitude
  {
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << ", ";
  }

  // member: pressure_diff
  {
    out << "pressure_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure_diff, out);
    out << ", ";
  }

  // member: true_air_speed
  {
    out << "true_air_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.true_air_speed, out);
    out << ", ";
  }

  // member: air_temperature
  {
    out << "air_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.air_temperature, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SbgAirData & msg,
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
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: pressure_abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pressure_abs: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure_abs, out);
    out << "\n";
  }

  // member: altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << "\n";
  }

  // member: pressure_diff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pressure_diff: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure_diff, out);
    out << "\n";
  }

  // member: true_air_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "true_air_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.true_air_speed, out);
    out << "\n";
  }

  // member: air_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "air_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.air_temperature, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SbgAirData & msg, bool use_flow_style = false)
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
  const sbg_driver::msg::SbgAirData & msg,
  std::ostream & out, size_t indentation = 0)
{
  sbg_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sbg_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const sbg_driver::msg::SbgAirData & msg)
{
  return sbg_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sbg_driver::msg::SbgAirData>()
{
  return "sbg_driver::msg::SbgAirData";
}

template<>
inline const char * name<sbg_driver::msg::SbgAirData>()
{
  return "sbg_driver/msg/SbgAirData";
}

template<>
struct has_fixed_size<sbg_driver::msg::SbgAirData>
  : std::integral_constant<bool, has_fixed_size<sbg_driver::msg::SbgAirDataStatus>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sbg_driver::msg::SbgAirData>
  : std::integral_constant<bool, has_bounded_size<sbg_driver::msg::SbgAirDataStatus>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sbg_driver::msg::SbgAirData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_AIR_DATA__TRAITS_HPP_
