// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sbg_driver:msg/SbgAirDataStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_AIR_DATA_STATUS__TRAITS_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_AIR_DATA_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sbg_driver/msg/detail/sbg_air_data_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sbg_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const SbgAirDataStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_delay_time
  {
    out << "is_delay_time: ";
    rosidl_generator_traits::value_to_yaml(msg.is_delay_time, out);
    out << ", ";
  }

  // member: pressure_valid
  {
    out << "pressure_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure_valid, out);
    out << ", ";
  }

  // member: altitude_valid
  {
    out << "altitude_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_valid, out);
    out << ", ";
  }

  // member: pressure_diff_valid
  {
    out << "pressure_diff_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure_diff_valid, out);
    out << ", ";
  }

  // member: air_speed_valid
  {
    out << "air_speed_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.air_speed_valid, out);
    out << ", ";
  }

  // member: air_temperature_valid
  {
    out << "air_temperature_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.air_temperature_valid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SbgAirDataStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_delay_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_delay_time: ";
    rosidl_generator_traits::value_to_yaml(msg.is_delay_time, out);
    out << "\n";
  }

  // member: pressure_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pressure_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure_valid, out);
    out << "\n";
  }

  // member: altitude_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_valid, out);
    out << "\n";
  }

  // member: pressure_diff_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pressure_diff_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure_diff_valid, out);
    out << "\n";
  }

  // member: air_speed_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "air_speed_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.air_speed_valid, out);
    out << "\n";
  }

  // member: air_temperature_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "air_temperature_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.air_temperature_valid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SbgAirDataStatus & msg, bool use_flow_style = false)
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
  const sbg_driver::msg::SbgAirDataStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  sbg_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sbg_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const sbg_driver::msg::SbgAirDataStatus & msg)
{
  return sbg_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sbg_driver::msg::SbgAirDataStatus>()
{
  return "sbg_driver::msg::SbgAirDataStatus";
}

template<>
inline const char * name<sbg_driver::msg::SbgAirDataStatus>()
{
  return "sbg_driver/msg/SbgAirDataStatus";
}

template<>
struct has_fixed_size<sbg_driver::msg::SbgAirDataStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sbg_driver::msg::SbgAirDataStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sbg_driver::msg::SbgAirDataStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_AIR_DATA_STATUS__TRAITS_HPP_
