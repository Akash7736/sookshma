// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sbg_driver:msg/SbgGpsVelStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_GPS_VEL_STATUS__TRAITS_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_GPS_VEL_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sbg_driver/msg/detail/sbg_gps_vel_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sbg_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const SbgGpsVelStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: vel_status
  {
    out << "vel_status: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_status, out);
    out << ", ";
  }

  // member: vel_type
  {
    out << "vel_type: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SbgGpsVelStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vel_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_status: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_status, out);
    out << "\n";
  }

  // member: vel_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_type: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SbgGpsVelStatus & msg, bool use_flow_style = false)
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
  const sbg_driver::msg::SbgGpsVelStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  sbg_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sbg_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const sbg_driver::msg::SbgGpsVelStatus & msg)
{
  return sbg_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sbg_driver::msg::SbgGpsVelStatus>()
{
  return "sbg_driver::msg::SbgGpsVelStatus";
}

template<>
inline const char * name<sbg_driver::msg::SbgGpsVelStatus>()
{
  return "sbg_driver/msg/SbgGpsVelStatus";
}

template<>
struct has_fixed_size<sbg_driver::msg::SbgGpsVelStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sbg_driver::msg::SbgGpsVelStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sbg_driver::msg::SbgGpsVelStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_GPS_VEL_STATUS__TRAITS_HPP_
