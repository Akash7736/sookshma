// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgOdoVel.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_ODO_VEL__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_ODO_VEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_odo_vel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgOdoVel_vel
{
public:
  explicit Init_SbgOdoVel_vel(::sbg_driver::msg::SbgOdoVel & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgOdoVel vel(::sbg_driver::msg::SbgOdoVel::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgOdoVel msg_;
};

class Init_SbgOdoVel_status
{
public:
  explicit Init_SbgOdoVel_status(::sbg_driver::msg::SbgOdoVel & msg)
  : msg_(msg)
  {}
  Init_SbgOdoVel_vel status(::sbg_driver::msg::SbgOdoVel::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SbgOdoVel_vel(msg_);
  }

private:
  ::sbg_driver::msg::SbgOdoVel msg_;
};

class Init_SbgOdoVel_time_stamp
{
public:
  explicit Init_SbgOdoVel_time_stamp(::sbg_driver::msg::SbgOdoVel & msg)
  : msg_(msg)
  {}
  Init_SbgOdoVel_status time_stamp(::sbg_driver::msg::SbgOdoVel::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SbgOdoVel_status(msg_);
  }

private:
  ::sbg_driver::msg::SbgOdoVel msg_;
};

class Init_SbgOdoVel_header
{
public:
  Init_SbgOdoVel_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgOdoVel_time_stamp header(::sbg_driver::msg::SbgOdoVel::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SbgOdoVel_time_stamp(msg_);
  }

private:
  ::sbg_driver::msg::SbgOdoVel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgOdoVel>()
{
  return sbg_driver::msg::builder::Init_SbgOdoVel_header();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_ODO_VEL__BUILDER_HPP_
