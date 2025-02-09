// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sbg_driver:msg/SbgEkfStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_EKF_STATUS__TRAITS_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_EKF_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sbg_driver/msg/detail/sbg_ekf_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sbg_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const SbgEkfStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: solution_mode
  {
    out << "solution_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_mode, out);
    out << ", ";
  }

  // member: attitude_valid
  {
    out << "attitude_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.attitude_valid, out);
    out << ", ";
  }

  // member: heading_valid
  {
    out << "heading_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_valid, out);
    out << ", ";
  }

  // member: velocity_valid
  {
    out << "velocity_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_valid, out);
    out << ", ";
  }

  // member: position_valid
  {
    out << "position_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.position_valid, out);
    out << ", ";
  }

  // member: vert_ref_used
  {
    out << "vert_ref_used: ";
    rosidl_generator_traits::value_to_yaml(msg.vert_ref_used, out);
    out << ", ";
  }

  // member: mag_ref_used
  {
    out << "mag_ref_used: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_ref_used, out);
    out << ", ";
  }

  // member: gps1_vel_used
  {
    out << "gps1_vel_used: ";
    rosidl_generator_traits::value_to_yaml(msg.gps1_vel_used, out);
    out << ", ";
  }

  // member: gps1_pos_used
  {
    out << "gps1_pos_used: ";
    rosidl_generator_traits::value_to_yaml(msg.gps1_pos_used, out);
    out << ", ";
  }

  // member: gps1_course_used
  {
    out << "gps1_course_used: ";
    rosidl_generator_traits::value_to_yaml(msg.gps1_course_used, out);
    out << ", ";
  }

  // member: gps1_hdt_used
  {
    out << "gps1_hdt_used: ";
    rosidl_generator_traits::value_to_yaml(msg.gps1_hdt_used, out);
    out << ", ";
  }

  // member: gps2_vel_used
  {
    out << "gps2_vel_used: ";
    rosidl_generator_traits::value_to_yaml(msg.gps2_vel_used, out);
    out << ", ";
  }

  // member: gps2_pos_used
  {
    out << "gps2_pos_used: ";
    rosidl_generator_traits::value_to_yaml(msg.gps2_pos_used, out);
    out << ", ";
  }

  // member: gps2_course_used
  {
    out << "gps2_course_used: ";
    rosidl_generator_traits::value_to_yaml(msg.gps2_course_used, out);
    out << ", ";
  }

  // member: gps2_hdt_used
  {
    out << "gps2_hdt_used: ";
    rosidl_generator_traits::value_to_yaml(msg.gps2_hdt_used, out);
    out << ", ";
  }

  // member: odo_used
  {
    out << "odo_used: ";
    rosidl_generator_traits::value_to_yaml(msg.odo_used, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SbgEkfStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: solution_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solution_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_mode, out);
    out << "\n";
  }

  // member: attitude_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attitude_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.attitude_valid, out);
    out << "\n";
  }

  // member: heading_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_valid, out);
    out << "\n";
  }

  // member: velocity_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_valid, out);
    out << "\n";
  }

  // member: position_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.position_valid, out);
    out << "\n";
  }

  // member: vert_ref_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vert_ref_used: ";
    rosidl_generator_traits::value_to_yaml(msg.vert_ref_used, out);
    out << "\n";
  }

  // member: mag_ref_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_ref_used: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_ref_used, out);
    out << "\n";
  }

  // member: gps1_vel_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps1_vel_used: ";
    rosidl_generator_traits::value_to_yaml(msg.gps1_vel_used, out);
    out << "\n";
  }

  // member: gps1_pos_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps1_pos_used: ";
    rosidl_generator_traits::value_to_yaml(msg.gps1_pos_used, out);
    out << "\n";
  }

  // member: gps1_course_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps1_course_used: ";
    rosidl_generator_traits::value_to_yaml(msg.gps1_course_used, out);
    out << "\n";
  }

  // member: gps1_hdt_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps1_hdt_used: ";
    rosidl_generator_traits::value_to_yaml(msg.gps1_hdt_used, out);
    out << "\n";
  }

  // member: gps2_vel_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps2_vel_used: ";
    rosidl_generator_traits::value_to_yaml(msg.gps2_vel_used, out);
    out << "\n";
  }

  // member: gps2_pos_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps2_pos_used: ";
    rosidl_generator_traits::value_to_yaml(msg.gps2_pos_used, out);
    out << "\n";
  }

  // member: gps2_course_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps2_course_used: ";
    rosidl_generator_traits::value_to_yaml(msg.gps2_course_used, out);
    out << "\n";
  }

  // member: gps2_hdt_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps2_hdt_used: ";
    rosidl_generator_traits::value_to_yaml(msg.gps2_hdt_used, out);
    out << "\n";
  }

  // member: odo_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odo_used: ";
    rosidl_generator_traits::value_to_yaml(msg.odo_used, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SbgEkfStatus & msg, bool use_flow_style = false)
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
  const sbg_driver::msg::SbgEkfStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  sbg_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sbg_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const sbg_driver::msg::SbgEkfStatus & msg)
{
  return sbg_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sbg_driver::msg::SbgEkfStatus>()
{
  return "sbg_driver::msg::SbgEkfStatus";
}

template<>
inline const char * name<sbg_driver::msg::SbgEkfStatus>()
{
  return "sbg_driver/msg/SbgEkfStatus";
}

template<>
struct has_fixed_size<sbg_driver::msg::SbgEkfStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sbg_driver::msg::SbgEkfStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sbg_driver::msg::SbgEkfStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_EKF_STATUS__TRAITS_HPP_
