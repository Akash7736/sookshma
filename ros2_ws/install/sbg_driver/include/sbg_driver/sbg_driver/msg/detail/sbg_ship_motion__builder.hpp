// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgShipMotion.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_SHIP_MOTION__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_SHIP_MOTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_ship_motion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgShipMotion_status
{
public:
  explicit Init_SbgShipMotion_status(::sbg_driver::msg::SbgShipMotion & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgShipMotion status(::sbg_driver::msg::SbgShipMotion::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgShipMotion msg_;
};

class Init_SbgShipMotion_velocity
{
public:
  explicit Init_SbgShipMotion_velocity(::sbg_driver::msg::SbgShipMotion & msg)
  : msg_(msg)
  {}
  Init_SbgShipMotion_status velocity(::sbg_driver::msg::SbgShipMotion::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_SbgShipMotion_status(msg_);
  }

private:
  ::sbg_driver::msg::SbgShipMotion msg_;
};

class Init_SbgShipMotion_acceleration
{
public:
  explicit Init_SbgShipMotion_acceleration(::sbg_driver::msg::SbgShipMotion & msg)
  : msg_(msg)
  {}
  Init_SbgShipMotion_velocity acceleration(::sbg_driver::msg::SbgShipMotion::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_SbgShipMotion_velocity(msg_);
  }

private:
  ::sbg_driver::msg::SbgShipMotion msg_;
};

class Init_SbgShipMotion_ship_motion
{
public:
  explicit Init_SbgShipMotion_ship_motion(::sbg_driver::msg::SbgShipMotion & msg)
  : msg_(msg)
  {}
  Init_SbgShipMotion_acceleration ship_motion(::sbg_driver::msg::SbgShipMotion::_ship_motion_type arg)
  {
    msg_.ship_motion = std::move(arg);
    return Init_SbgShipMotion_acceleration(msg_);
  }

private:
  ::sbg_driver::msg::SbgShipMotion msg_;
};

class Init_SbgShipMotion_heave_period
{
public:
  explicit Init_SbgShipMotion_heave_period(::sbg_driver::msg::SbgShipMotion & msg)
  : msg_(msg)
  {}
  Init_SbgShipMotion_ship_motion heave_period(::sbg_driver::msg::SbgShipMotion::_heave_period_type arg)
  {
    msg_.heave_period = std::move(arg);
    return Init_SbgShipMotion_ship_motion(msg_);
  }

private:
  ::sbg_driver::msg::SbgShipMotion msg_;
};

class Init_SbgShipMotion_time_stamp
{
public:
  explicit Init_SbgShipMotion_time_stamp(::sbg_driver::msg::SbgShipMotion & msg)
  : msg_(msg)
  {}
  Init_SbgShipMotion_heave_period time_stamp(::sbg_driver::msg::SbgShipMotion::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SbgShipMotion_heave_period(msg_);
  }

private:
  ::sbg_driver::msg::SbgShipMotion msg_;
};

class Init_SbgShipMotion_header
{
public:
  Init_SbgShipMotion_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgShipMotion_time_stamp header(::sbg_driver::msg::SbgShipMotion::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SbgShipMotion_time_stamp(msg_);
  }

private:
  ::sbg_driver::msg::SbgShipMotion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgShipMotion>()
{
  return sbg_driver::msg::builder::Init_SbgShipMotion_header();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_SHIP_MOTION__BUILDER_HPP_
