// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgEkfRotAccel.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_EKF_ROT_ACCEL__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_EKF_ROT_ACCEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_ekf_rot_accel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgEkfRotAccel_acceleration
{
public:
  explicit Init_SbgEkfRotAccel_acceleration(::sbg_driver::msg::SbgEkfRotAccel & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgEkfRotAccel acceleration(::sbg_driver::msg::SbgEkfRotAccel::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfRotAccel msg_;
};

class Init_SbgEkfRotAccel_rate
{
public:
  explicit Init_SbgEkfRotAccel_rate(::sbg_driver::msg::SbgEkfRotAccel & msg)
  : msg_(msg)
  {}
  Init_SbgEkfRotAccel_acceleration rate(::sbg_driver::msg::SbgEkfRotAccel::_rate_type arg)
  {
    msg_.rate = std::move(arg);
    return Init_SbgEkfRotAccel_acceleration(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfRotAccel msg_;
};

class Init_SbgEkfRotAccel_time_stamp
{
public:
  explicit Init_SbgEkfRotAccel_time_stamp(::sbg_driver::msg::SbgEkfRotAccel & msg)
  : msg_(msg)
  {}
  Init_SbgEkfRotAccel_rate time_stamp(::sbg_driver::msg::SbgEkfRotAccel::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SbgEkfRotAccel_rate(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfRotAccel msg_;
};

class Init_SbgEkfRotAccel_header
{
public:
  Init_SbgEkfRotAccel_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgEkfRotAccel_time_stamp header(::sbg_driver::msg::SbgEkfRotAccel::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SbgEkfRotAccel_time_stamp(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfRotAccel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgEkfRotAccel>()
{
  return sbg_driver::msg::builder::Init_SbgEkfRotAccel_header();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_EKF_ROT_ACCEL__BUILDER_HPP_
