// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/Actuator.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__ACTUATOR__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__ACTUATOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/actuator__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_Actuator_covariance
{
public:
  explicit Init_Actuator_covariance(::custom_interfaces::msg::Actuator & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::Actuator covariance(::custom_interfaces::msg::Actuator::_covariance_type arg)
  {
    msg_.covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::Actuator msg_;
};

class Init_Actuator_propeller
{
public:
  explicit Init_Actuator_propeller(::custom_interfaces::msg::Actuator & msg)
  : msg_(msg)
  {}
  Init_Actuator_covariance propeller(::custom_interfaces::msg::Actuator::_propeller_type arg)
  {
    msg_.propeller = std::move(arg);
    return Init_Actuator_covariance(msg_);
  }

private:
  ::custom_interfaces::msg::Actuator msg_;
};

class Init_Actuator_rudder
{
public:
  explicit Init_Actuator_rudder(::custom_interfaces::msg::Actuator & msg)
  : msg_(msg)
  {}
  Init_Actuator_propeller rudder(::custom_interfaces::msg::Actuator::_rudder_type arg)
  {
    msg_.rudder = std::move(arg);
    return Init_Actuator_propeller(msg_);
  }

private:
  ::custom_interfaces::msg::Actuator msg_;
};

class Init_Actuator_header
{
public:
  Init_Actuator_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Actuator_rudder header(::custom_interfaces::msg::Actuator::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Actuator_rudder(msg_);
  }

private:
  ::custom_interfaces::msg::Actuator msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::Actuator>()
{
  return custom_interfaces::msg::builder::Init_Actuator_header();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__ACTUATOR__BUILDER_HPP_
