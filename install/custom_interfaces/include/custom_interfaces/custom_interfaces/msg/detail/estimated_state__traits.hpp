// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/EstimatedState.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__ESTIMATED_STATE__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__ESTIMATED_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/msg/detail/estimated_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const EstimatedState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: u
  {
    out << "u: ";
    rosidl_generator_traits::value_to_yaml(msg.u, out);
    out << ", ";
  }

  // member: v
  {
    out << "v: ";
    rosidl_generator_traits::value_to_yaml(msg.v, out);
    out << ", ";
  }

  // member: r
  {
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: propeller
  {
    out << "propeller: ";
    rosidl_generator_traits::value_to_yaml(msg.propeller, out);
    out << ", ";
  }

  // member: rudder
  {
    out << "rudder: ";
    rosidl_generator_traits::value_to_yaml(msg.rudder, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EstimatedState & msg,
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

  // member: u
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u: ";
    rosidl_generator_traits::value_to_yaml(msg.u, out);
    out << "\n";
  }

  // member: v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v: ";
    rosidl_generator_traits::value_to_yaml(msg.v, out);
    out << "\n";
  }

  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: propeller
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "propeller: ";
    rosidl_generator_traits::value_to_yaml(msg.propeller, out);
    out << "\n";
  }

  // member: rudder
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rudder: ";
    rosidl_generator_traits::value_to_yaml(msg.rudder, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EstimatedState & msg, bool use_flow_style = false)
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

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::msg::EstimatedState & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::msg::EstimatedState & msg)
{
  return custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::msg::EstimatedState>()
{
  return "custom_interfaces::msg::EstimatedState";
}

template<>
inline const char * name<custom_interfaces::msg::EstimatedState>()
{
  return "custom_interfaces/msg/EstimatedState";
}

template<>
struct has_fixed_size<custom_interfaces::msg::EstimatedState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<custom_interfaces::msg::EstimatedState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<custom_interfaces::msg::EstimatedState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__ESTIMATED_STATE__TRAITS_HPP_
