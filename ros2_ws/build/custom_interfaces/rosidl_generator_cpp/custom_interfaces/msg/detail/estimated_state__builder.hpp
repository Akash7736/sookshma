// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/EstimatedState.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__ESTIMATED_STATE__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__ESTIMATED_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/estimated_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_EstimatedState_heading
{
public:
  explicit Init_EstimatedState_heading(::custom_interfaces::msg::EstimatedState & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::EstimatedState heading(::custom_interfaces::msg::EstimatedState::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::EstimatedState msg_;
};

class Init_EstimatedState_y
{
public:
  explicit Init_EstimatedState_y(::custom_interfaces::msg::EstimatedState & msg)
  : msg_(msg)
  {}
  Init_EstimatedState_heading y(::custom_interfaces::msg::EstimatedState::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_EstimatedState_heading(msg_);
  }

private:
  ::custom_interfaces::msg::EstimatedState msg_;
};

class Init_EstimatedState_x
{
public:
  explicit Init_EstimatedState_x(::custom_interfaces::msg::EstimatedState & msg)
  : msg_(msg)
  {}
  Init_EstimatedState_y x(::custom_interfaces::msg::EstimatedState::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_EstimatedState_y(msg_);
  }

private:
  ::custom_interfaces::msg::EstimatedState msg_;
};

class Init_EstimatedState_r
{
public:
  explicit Init_EstimatedState_r(::custom_interfaces::msg::EstimatedState & msg)
  : msg_(msg)
  {}
  Init_EstimatedState_x r(::custom_interfaces::msg::EstimatedState::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_EstimatedState_x(msg_);
  }

private:
  ::custom_interfaces::msg::EstimatedState msg_;
};

class Init_EstimatedState_v
{
public:
  explicit Init_EstimatedState_v(::custom_interfaces::msg::EstimatedState & msg)
  : msg_(msg)
  {}
  Init_EstimatedState_r v(::custom_interfaces::msg::EstimatedState::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_EstimatedState_r(msg_);
  }

private:
  ::custom_interfaces::msg::EstimatedState msg_;
};

class Init_EstimatedState_u
{
public:
  Init_EstimatedState_u()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstimatedState_v u(::custom_interfaces::msg::EstimatedState::_u_type arg)
  {
    msg_.u = std::move(arg);
    return Init_EstimatedState_v(msg_);
  }

private:
  ::custom_interfaces::msg::EstimatedState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::EstimatedState>()
{
  return custom_interfaces::msg::builder::Init_EstimatedState_u();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__ESTIMATED_STATE__BUILDER_HPP_
