// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgShipMotionStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_SHIP_MOTION_STATUS__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_SHIP_MOTION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_ship_motion_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgShipMotionStatus_period_valid
{
public:
  explicit Init_SbgShipMotionStatus_period_valid(::sbg_driver::msg::SbgShipMotionStatus & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgShipMotionStatus period_valid(::sbg_driver::msg::SbgShipMotionStatus::_period_valid_type arg)
  {
    msg_.period_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgShipMotionStatus msg_;
};

class Init_SbgShipMotionStatus_period_available
{
public:
  explicit Init_SbgShipMotionStatus_period_available(::sbg_driver::msg::SbgShipMotionStatus & msg)
  : msg_(msg)
  {}
  Init_SbgShipMotionStatus_period_valid period_available(::sbg_driver::msg::SbgShipMotionStatus::_period_available_type arg)
  {
    msg_.period_available = std::move(arg);
    return Init_SbgShipMotionStatus_period_valid(msg_);
  }

private:
  ::sbg_driver::msg::SbgShipMotionStatus msg_;
};

class Init_SbgShipMotionStatus_heave_vel_aided
{
public:
  explicit Init_SbgShipMotionStatus_heave_vel_aided(::sbg_driver::msg::SbgShipMotionStatus & msg)
  : msg_(msg)
  {}
  Init_SbgShipMotionStatus_period_available heave_vel_aided(::sbg_driver::msg::SbgShipMotionStatus::_heave_vel_aided_type arg)
  {
    msg_.heave_vel_aided = std::move(arg);
    return Init_SbgShipMotionStatus_period_available(msg_);
  }

private:
  ::sbg_driver::msg::SbgShipMotionStatus msg_;
};

class Init_SbgShipMotionStatus_heave_valid
{
public:
  Init_SbgShipMotionStatus_heave_valid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgShipMotionStatus_heave_vel_aided heave_valid(::sbg_driver::msg::SbgShipMotionStatus::_heave_valid_type arg)
  {
    msg_.heave_valid = std::move(arg);
    return Init_SbgShipMotionStatus_heave_vel_aided(msg_);
  }

private:
  ::sbg_driver::msg::SbgShipMotionStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgShipMotionStatus>()
{
  return sbg_driver::msg::builder::Init_SbgShipMotionStatus_heave_valid();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_SHIP_MOTION_STATUS__BUILDER_HPP_
