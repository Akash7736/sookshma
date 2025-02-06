// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sbg_driver:msg/SbgMagStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_MAG_STATUS__TRAITS_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_MAG_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sbg_driver/msg/detail/sbg_mag_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sbg_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const SbgMagStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: mag_x
  {
    out << "mag_x: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_x, out);
    out << ", ";
  }

  // member: mag_y
  {
    out << "mag_y: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_y, out);
    out << ", ";
  }

  // member: mag_z
  {
    out << "mag_z: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_z, out);
    out << ", ";
  }

  // member: accel_x
  {
    out << "accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_x, out);
    out << ", ";
  }

  // member: accel_y
  {
    out << "accel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_y, out);
    out << ", ";
  }

  // member: accel_z
  {
    out << "accel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_z, out);
    out << ", ";
  }

  // member: mags_in_range
  {
    out << "mags_in_range: ";
    rosidl_generator_traits::value_to_yaml(msg.mags_in_range, out);
    out << ", ";
  }

  // member: accels_in_range
  {
    out << "accels_in_range: ";
    rosidl_generator_traits::value_to_yaml(msg.accels_in_range, out);
    out << ", ";
  }

  // member: calibration
  {
    out << "calibration: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SbgMagStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mag_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_x: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_x, out);
    out << "\n";
  }

  // member: mag_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_y: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_y, out);
    out << "\n";
  }

  // member: mag_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_z: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_z, out);
    out << "\n";
  }

  // member: accel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_x, out);
    out << "\n";
  }

  // member: accel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_y, out);
    out << "\n";
  }

  // member: accel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_z, out);
    out << "\n";
  }

  // member: mags_in_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mags_in_range: ";
    rosidl_generator_traits::value_to_yaml(msg.mags_in_range, out);
    out << "\n";
  }

  // member: accels_in_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accels_in_range: ";
    rosidl_generator_traits::value_to_yaml(msg.accels_in_range, out);
    out << "\n";
  }

  // member: calibration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SbgMagStatus & msg, bool use_flow_style = false)
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
  const sbg_driver::msg::SbgMagStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  sbg_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sbg_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const sbg_driver::msg::SbgMagStatus & msg)
{
  return sbg_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sbg_driver::msg::SbgMagStatus>()
{
  return "sbg_driver::msg::SbgMagStatus";
}

template<>
inline const char * name<sbg_driver::msg::SbgMagStatus>()
{
  return "sbg_driver/msg/SbgMagStatus";
}

template<>
struct has_fixed_size<sbg_driver::msg::SbgMagStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sbg_driver::msg::SbgMagStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sbg_driver::msg::SbgMagStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_MAG_STATUS__TRAITS_HPP_
