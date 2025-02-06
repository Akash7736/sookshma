// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sbg_driver:msg/SbgImuStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_IMU_STATUS__TRAITS_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_IMU_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sbg_driver/msg/detail/sbg_imu_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sbg_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const SbgImuStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: imu_com
  {
    out << "imu_com: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_com, out);
    out << ", ";
  }

  // member: imu_status
  {
    out << "imu_status: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_status, out);
    out << ", ";
  }

  // member: imu_accel_x
  {
    out << "imu_accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_accel_x, out);
    out << ", ";
  }

  // member: imu_accel_y
  {
    out << "imu_accel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_accel_y, out);
    out << ", ";
  }

  // member: imu_accel_z
  {
    out << "imu_accel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_accel_z, out);
    out << ", ";
  }

  // member: imu_gyro_x
  {
    out << "imu_gyro_x: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_gyro_x, out);
    out << ", ";
  }

  // member: imu_gyro_y
  {
    out << "imu_gyro_y: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_gyro_y, out);
    out << ", ";
  }

  // member: imu_gyro_z
  {
    out << "imu_gyro_z: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_gyro_z, out);
    out << ", ";
  }

  // member: imu_accels_in_range
  {
    out << "imu_accels_in_range: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_accels_in_range, out);
    out << ", ";
  }

  // member: imu_gyros_in_range
  {
    out << "imu_gyros_in_range: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_gyros_in_range, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SbgImuStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: imu_com
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_com: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_com, out);
    out << "\n";
  }

  // member: imu_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_status: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_status, out);
    out << "\n";
  }

  // member: imu_accel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_accel_x, out);
    out << "\n";
  }

  // member: imu_accel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_accel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_accel_y, out);
    out << "\n";
  }

  // member: imu_accel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_accel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_accel_z, out);
    out << "\n";
  }

  // member: imu_gyro_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_gyro_x: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_gyro_x, out);
    out << "\n";
  }

  // member: imu_gyro_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_gyro_y: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_gyro_y, out);
    out << "\n";
  }

  // member: imu_gyro_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_gyro_z: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_gyro_z, out);
    out << "\n";
  }

  // member: imu_accels_in_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_accels_in_range: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_accels_in_range, out);
    out << "\n";
  }

  // member: imu_gyros_in_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_gyros_in_range: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_gyros_in_range, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SbgImuStatus & msg, bool use_flow_style = false)
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
  const sbg_driver::msg::SbgImuStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  sbg_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sbg_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const sbg_driver::msg::SbgImuStatus & msg)
{
  return sbg_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sbg_driver::msg::SbgImuStatus>()
{
  return "sbg_driver::msg::SbgImuStatus";
}

template<>
inline const char * name<sbg_driver::msg::SbgImuStatus>()
{
  return "sbg_driver/msg/SbgImuStatus";
}

template<>
struct has_fixed_size<sbg_driver::msg::SbgImuStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sbg_driver::msg::SbgImuStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sbg_driver::msg::SbgImuStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_IMU_STATUS__TRAITS_HPP_
