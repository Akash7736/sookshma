// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sbg_driver:msg/SbgGpsPosStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_GPS_POS_STATUS__TRAITS_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_GPS_POS_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sbg_driver/msg/detail/sbg_gps_pos_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sbg_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const SbgGpsPosStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: gps_l1_used
  {
    out << "gps_l1_used: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_l1_used, out);
    out << ", ";
  }

  // member: gps_l2_used
  {
    out << "gps_l2_used: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_l2_used, out);
    out << ", ";
  }

  // member: gps_l5_used
  {
    out << "gps_l5_used: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_l5_used, out);
    out << ", ";
  }

  // member: glo_l1_used
  {
    out << "glo_l1_used: ";
    rosidl_generator_traits::value_to_yaml(msg.glo_l1_used, out);
    out << ", ";
  }

  // member: glo_l2_used
  {
    out << "glo_l2_used: ";
    rosidl_generator_traits::value_to_yaml(msg.glo_l2_used, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SbgGpsPosStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: gps_l1_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_l1_used: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_l1_used, out);
    out << "\n";
  }

  // member: gps_l2_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_l2_used: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_l2_used, out);
    out << "\n";
  }

  // member: gps_l5_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_l5_used: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_l5_used, out);
    out << "\n";
  }

  // member: glo_l1_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "glo_l1_used: ";
    rosidl_generator_traits::value_to_yaml(msg.glo_l1_used, out);
    out << "\n";
  }

  // member: glo_l2_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "glo_l2_used: ";
    rosidl_generator_traits::value_to_yaml(msg.glo_l2_used, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SbgGpsPosStatus & msg, bool use_flow_style = false)
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
  const sbg_driver::msg::SbgGpsPosStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  sbg_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sbg_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const sbg_driver::msg::SbgGpsPosStatus & msg)
{
  return sbg_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sbg_driver::msg::SbgGpsPosStatus>()
{
  return "sbg_driver::msg::SbgGpsPosStatus";
}

template<>
inline const char * name<sbg_driver::msg::SbgGpsPosStatus>()
{
  return "sbg_driver/msg/SbgGpsPosStatus";
}

template<>
struct has_fixed_size<sbg_driver::msg::SbgGpsPosStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sbg_driver::msg::SbgGpsPosStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sbg_driver::msg::SbgGpsPosStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_GPS_POS_STATUS__TRAITS_HPP_
