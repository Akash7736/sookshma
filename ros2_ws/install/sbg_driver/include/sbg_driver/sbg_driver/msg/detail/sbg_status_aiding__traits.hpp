// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sbg_driver:msg/SbgStatusAiding.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_STATUS_AIDING__TRAITS_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_STATUS_AIDING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sbg_driver/msg/detail/sbg_status_aiding__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sbg_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const SbgStatusAiding & msg,
  std::ostream & out)
{
  out << "{";
  // member: gps1_pos_recv
  {
    out << "gps1_pos_recv: ";
    rosidl_generator_traits::value_to_yaml(msg.gps1_pos_recv, out);
    out << ", ";
  }

  // member: gps1_vel_recv
  {
    out << "gps1_vel_recv: ";
    rosidl_generator_traits::value_to_yaml(msg.gps1_vel_recv, out);
    out << ", ";
  }

  // member: gps1_hdt_recv
  {
    out << "gps1_hdt_recv: ";
    rosidl_generator_traits::value_to_yaml(msg.gps1_hdt_recv, out);
    out << ", ";
  }

  // member: gps1_utc_recv
  {
    out << "gps1_utc_recv: ";
    rosidl_generator_traits::value_to_yaml(msg.gps1_utc_recv, out);
    out << ", ";
  }

  // member: mag_recv
  {
    out << "mag_recv: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_recv, out);
    out << ", ";
  }

  // member: odo_recv
  {
    out << "odo_recv: ";
    rosidl_generator_traits::value_to_yaml(msg.odo_recv, out);
    out << ", ";
  }

  // member: dvl_recv
  {
    out << "dvl_recv: ";
    rosidl_generator_traits::value_to_yaml(msg.dvl_recv, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SbgStatusAiding & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gps1_pos_recv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps1_pos_recv: ";
    rosidl_generator_traits::value_to_yaml(msg.gps1_pos_recv, out);
    out << "\n";
  }

  // member: gps1_vel_recv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps1_vel_recv: ";
    rosidl_generator_traits::value_to_yaml(msg.gps1_vel_recv, out);
    out << "\n";
  }

  // member: gps1_hdt_recv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps1_hdt_recv: ";
    rosidl_generator_traits::value_to_yaml(msg.gps1_hdt_recv, out);
    out << "\n";
  }

  // member: gps1_utc_recv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps1_utc_recv: ";
    rosidl_generator_traits::value_to_yaml(msg.gps1_utc_recv, out);
    out << "\n";
  }

  // member: mag_recv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_recv: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_recv, out);
    out << "\n";
  }

  // member: odo_recv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odo_recv: ";
    rosidl_generator_traits::value_to_yaml(msg.odo_recv, out);
    out << "\n";
  }

  // member: dvl_recv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dvl_recv: ";
    rosidl_generator_traits::value_to_yaml(msg.dvl_recv, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SbgStatusAiding & msg, bool use_flow_style = false)
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
  const sbg_driver::msg::SbgStatusAiding & msg,
  std::ostream & out, size_t indentation = 0)
{
  sbg_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sbg_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const sbg_driver::msg::SbgStatusAiding & msg)
{
  return sbg_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sbg_driver::msg::SbgStatusAiding>()
{
  return "sbg_driver::msg::SbgStatusAiding";
}

template<>
inline const char * name<sbg_driver::msg::SbgStatusAiding>()
{
  return "sbg_driver/msg/SbgStatusAiding";
}

template<>
struct has_fixed_size<sbg_driver::msg::SbgStatusAiding>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sbg_driver::msg::SbgStatusAiding>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sbg_driver::msg::SbgStatusAiding>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_STATUS_AIDING__TRAITS_HPP_
