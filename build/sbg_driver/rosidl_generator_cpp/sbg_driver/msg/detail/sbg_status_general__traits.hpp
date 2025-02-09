// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sbg_driver:msg/SbgStatusGeneral.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_STATUS_GENERAL__TRAITS_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_STATUS_GENERAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sbg_driver/msg/detail/sbg_status_general__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sbg_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const SbgStatusGeneral & msg,
  std::ostream & out)
{
  out << "{";
  // member: main_power
  {
    out << "main_power: ";
    rosidl_generator_traits::value_to_yaml(msg.main_power, out);
    out << ", ";
  }

  // member: imu_power
  {
    out << "imu_power: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_power, out);
    out << ", ";
  }

  // member: gps_power
  {
    out << "gps_power: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_power, out);
    out << ", ";
  }

  // member: settings
  {
    out << "settings: ";
    rosidl_generator_traits::value_to_yaml(msg.settings, out);
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
  const SbgStatusGeneral & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: main_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "main_power: ";
    rosidl_generator_traits::value_to_yaml(msg.main_power, out);
    out << "\n";
  }

  // member: imu_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_power: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_power, out);
    out << "\n";
  }

  // member: gps_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_power: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_power, out);
    out << "\n";
  }

  // member: settings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "settings: ";
    rosidl_generator_traits::value_to_yaml(msg.settings, out);
    out << "\n";
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

inline std::string to_yaml(const SbgStatusGeneral & msg, bool use_flow_style = false)
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
  const sbg_driver::msg::SbgStatusGeneral & msg,
  std::ostream & out, size_t indentation = 0)
{
  sbg_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sbg_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const sbg_driver::msg::SbgStatusGeneral & msg)
{
  return sbg_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sbg_driver::msg::SbgStatusGeneral>()
{
  return "sbg_driver::msg::SbgStatusGeneral";
}

template<>
inline const char * name<sbg_driver::msg::SbgStatusGeneral>()
{
  return "sbg_driver/msg/SbgStatusGeneral";
}

template<>
struct has_fixed_size<sbg_driver::msg::SbgStatusGeneral>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sbg_driver::msg::SbgStatusGeneral>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sbg_driver::msg::SbgStatusGeneral>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_STATUS_GENERAL__TRAITS_HPP_
