// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sbg_driver:msg/SbgUtcTimeStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_UTC_TIME_STATUS__TRAITS_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_UTC_TIME_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sbg_driver/msg/detail/sbg_utc_time_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sbg_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const SbgUtcTimeStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: clock_stable
  {
    out << "clock_stable: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_stable, out);
    out << ", ";
  }

  // member: clock_status
  {
    out << "clock_status: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_status, out);
    out << ", ";
  }

  // member: clock_utc_sync
  {
    out << "clock_utc_sync: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_utc_sync, out);
    out << ", ";
  }

  // member: clock_utc_status
  {
    out << "clock_utc_status: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_utc_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SbgUtcTimeStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: clock_stable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clock_stable: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_stable, out);
    out << "\n";
  }

  // member: clock_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clock_status: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_status, out);
    out << "\n";
  }

  // member: clock_utc_sync
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clock_utc_sync: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_utc_sync, out);
    out << "\n";
  }

  // member: clock_utc_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clock_utc_status: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_utc_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SbgUtcTimeStatus & msg, bool use_flow_style = false)
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
  const sbg_driver::msg::SbgUtcTimeStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  sbg_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sbg_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const sbg_driver::msg::SbgUtcTimeStatus & msg)
{
  return sbg_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sbg_driver::msg::SbgUtcTimeStatus>()
{
  return "sbg_driver::msg::SbgUtcTimeStatus";
}

template<>
inline const char * name<sbg_driver::msg::SbgUtcTimeStatus>()
{
  return "sbg_driver/msg/SbgUtcTimeStatus";
}

template<>
struct has_fixed_size<sbg_driver::msg::SbgUtcTimeStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sbg_driver::msg::SbgUtcTimeStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sbg_driver::msg::SbgUtcTimeStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_UTC_TIME_STATUS__TRAITS_HPP_
