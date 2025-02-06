// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sbg_driver:msg/SbgStatusCom.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_STATUS_COM__TRAITS_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_STATUS_COM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sbg_driver/msg/detail/sbg_status_com__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sbg_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const SbgStatusCom & msg,
  std::ostream & out)
{
  out << "{";
  // member: port_a
  {
    out << "port_a: ";
    rosidl_generator_traits::value_to_yaml(msg.port_a, out);
    out << ", ";
  }

  // member: port_b
  {
    out << "port_b: ";
    rosidl_generator_traits::value_to_yaml(msg.port_b, out);
    out << ", ";
  }

  // member: port_c
  {
    out << "port_c: ";
    rosidl_generator_traits::value_to_yaml(msg.port_c, out);
    out << ", ";
  }

  // member: port_d
  {
    out << "port_d: ";
    rosidl_generator_traits::value_to_yaml(msg.port_d, out);
    out << ", ";
  }

  // member: port_e
  {
    out << "port_e: ";
    rosidl_generator_traits::value_to_yaml(msg.port_e, out);
    out << ", ";
  }

  // member: port_a_rx
  {
    out << "port_a_rx: ";
    rosidl_generator_traits::value_to_yaml(msg.port_a_rx, out);
    out << ", ";
  }

  // member: port_a_tx
  {
    out << "port_a_tx: ";
    rosidl_generator_traits::value_to_yaml(msg.port_a_tx, out);
    out << ", ";
  }

  // member: port_b_rx
  {
    out << "port_b_rx: ";
    rosidl_generator_traits::value_to_yaml(msg.port_b_rx, out);
    out << ", ";
  }

  // member: port_b_tx
  {
    out << "port_b_tx: ";
    rosidl_generator_traits::value_to_yaml(msg.port_b_tx, out);
    out << ", ";
  }

  // member: port_c_rx
  {
    out << "port_c_rx: ";
    rosidl_generator_traits::value_to_yaml(msg.port_c_rx, out);
    out << ", ";
  }

  // member: port_c_tx
  {
    out << "port_c_tx: ";
    rosidl_generator_traits::value_to_yaml(msg.port_c_tx, out);
    out << ", ";
  }

  // member: port_d_rx
  {
    out << "port_d_rx: ";
    rosidl_generator_traits::value_to_yaml(msg.port_d_rx, out);
    out << ", ";
  }

  // member: port_d_tx
  {
    out << "port_d_tx: ";
    rosidl_generator_traits::value_to_yaml(msg.port_d_tx, out);
    out << ", ";
  }

  // member: port_e_rx
  {
    out << "port_e_rx: ";
    rosidl_generator_traits::value_to_yaml(msg.port_e_rx, out);
    out << ", ";
  }

  // member: port_e_tx
  {
    out << "port_e_tx: ";
    rosidl_generator_traits::value_to_yaml(msg.port_e_tx, out);
    out << ", ";
  }

  // member: can_rx
  {
    out << "can_rx: ";
    rosidl_generator_traits::value_to_yaml(msg.can_rx, out);
    out << ", ";
  }

  // member: can_tx
  {
    out << "can_tx: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx, out);
    out << ", ";
  }

  // member: can_status
  {
    out << "can_status: ";
    rosidl_generator_traits::value_to_yaml(msg.can_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SbgStatusCom & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: port_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port_a: ";
    rosidl_generator_traits::value_to_yaml(msg.port_a, out);
    out << "\n";
  }

  // member: port_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port_b: ";
    rosidl_generator_traits::value_to_yaml(msg.port_b, out);
    out << "\n";
  }

  // member: port_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port_c: ";
    rosidl_generator_traits::value_to_yaml(msg.port_c, out);
    out << "\n";
  }

  // member: port_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port_d: ";
    rosidl_generator_traits::value_to_yaml(msg.port_d, out);
    out << "\n";
  }

  // member: port_e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port_e: ";
    rosidl_generator_traits::value_to_yaml(msg.port_e, out);
    out << "\n";
  }

  // member: port_a_rx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port_a_rx: ";
    rosidl_generator_traits::value_to_yaml(msg.port_a_rx, out);
    out << "\n";
  }

  // member: port_a_tx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port_a_tx: ";
    rosidl_generator_traits::value_to_yaml(msg.port_a_tx, out);
    out << "\n";
  }

  // member: port_b_rx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port_b_rx: ";
    rosidl_generator_traits::value_to_yaml(msg.port_b_rx, out);
    out << "\n";
  }

  // member: port_b_tx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port_b_tx: ";
    rosidl_generator_traits::value_to_yaml(msg.port_b_tx, out);
    out << "\n";
  }

  // member: port_c_rx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port_c_rx: ";
    rosidl_generator_traits::value_to_yaml(msg.port_c_rx, out);
    out << "\n";
  }

  // member: port_c_tx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port_c_tx: ";
    rosidl_generator_traits::value_to_yaml(msg.port_c_tx, out);
    out << "\n";
  }

  // member: port_d_rx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port_d_rx: ";
    rosidl_generator_traits::value_to_yaml(msg.port_d_rx, out);
    out << "\n";
  }

  // member: port_d_tx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port_d_tx: ";
    rosidl_generator_traits::value_to_yaml(msg.port_d_tx, out);
    out << "\n";
  }

  // member: port_e_rx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port_e_rx: ";
    rosidl_generator_traits::value_to_yaml(msg.port_e_rx, out);
    out << "\n";
  }

  // member: port_e_tx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port_e_tx: ";
    rosidl_generator_traits::value_to_yaml(msg.port_e_tx, out);
    out << "\n";
  }

  // member: can_rx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_rx: ";
    rosidl_generator_traits::value_to_yaml(msg.can_rx, out);
    out << "\n";
  }

  // member: can_tx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx: ";
    rosidl_generator_traits::value_to_yaml(msg.can_tx, out);
    out << "\n";
  }

  // member: can_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_status: ";
    rosidl_generator_traits::value_to_yaml(msg.can_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SbgStatusCom & msg, bool use_flow_style = false)
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
  const sbg_driver::msg::SbgStatusCom & msg,
  std::ostream & out, size_t indentation = 0)
{
  sbg_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sbg_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const sbg_driver::msg::SbgStatusCom & msg)
{
  return sbg_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sbg_driver::msg::SbgStatusCom>()
{
  return "sbg_driver::msg::SbgStatusCom";
}

template<>
inline const char * name<sbg_driver::msg::SbgStatusCom>()
{
  return "sbg_driver/msg/SbgStatusCom";
}

template<>
struct has_fixed_size<sbg_driver::msg::SbgStatusCom>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sbg_driver::msg::SbgStatusCom>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sbg_driver::msg::SbgStatusCom>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_STATUS_COM__TRAITS_HPP_
