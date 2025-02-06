// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgEkfNav.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_EKF_NAV__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_EKF_NAV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_ekf_nav__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgEkfNav_status
{
public:
  explicit Init_SbgEkfNav_status(::sbg_driver::msg::SbgEkfNav & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgEkfNav status(::sbg_driver::msg::SbgEkfNav::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfNav msg_;
};

class Init_SbgEkfNav_position_accuracy
{
public:
  explicit Init_SbgEkfNav_position_accuracy(::sbg_driver::msg::SbgEkfNav & msg)
  : msg_(msg)
  {}
  Init_SbgEkfNav_status position_accuracy(::sbg_driver::msg::SbgEkfNav::_position_accuracy_type arg)
  {
    msg_.position_accuracy = std::move(arg);
    return Init_SbgEkfNav_status(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfNav msg_;
};

class Init_SbgEkfNav_undulation
{
public:
  explicit Init_SbgEkfNav_undulation(::sbg_driver::msg::SbgEkfNav & msg)
  : msg_(msg)
  {}
  Init_SbgEkfNav_position_accuracy undulation(::sbg_driver::msg::SbgEkfNav::_undulation_type arg)
  {
    msg_.undulation = std::move(arg);
    return Init_SbgEkfNav_position_accuracy(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfNav msg_;
};

class Init_SbgEkfNav_altitude
{
public:
  explicit Init_SbgEkfNav_altitude(::sbg_driver::msg::SbgEkfNav & msg)
  : msg_(msg)
  {}
  Init_SbgEkfNav_undulation altitude(::sbg_driver::msg::SbgEkfNav::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_SbgEkfNav_undulation(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfNav msg_;
};

class Init_SbgEkfNav_longitude
{
public:
  explicit Init_SbgEkfNav_longitude(::sbg_driver::msg::SbgEkfNav & msg)
  : msg_(msg)
  {}
  Init_SbgEkfNav_altitude longitude(::sbg_driver::msg::SbgEkfNav::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_SbgEkfNav_altitude(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfNav msg_;
};

class Init_SbgEkfNav_latitude
{
public:
  explicit Init_SbgEkfNav_latitude(::sbg_driver::msg::SbgEkfNav & msg)
  : msg_(msg)
  {}
  Init_SbgEkfNav_longitude latitude(::sbg_driver::msg::SbgEkfNav::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_SbgEkfNav_longitude(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfNav msg_;
};

class Init_SbgEkfNav_velocity_accuracy
{
public:
  explicit Init_SbgEkfNav_velocity_accuracy(::sbg_driver::msg::SbgEkfNav & msg)
  : msg_(msg)
  {}
  Init_SbgEkfNav_latitude velocity_accuracy(::sbg_driver::msg::SbgEkfNav::_velocity_accuracy_type arg)
  {
    msg_.velocity_accuracy = std::move(arg);
    return Init_SbgEkfNav_latitude(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfNav msg_;
};

class Init_SbgEkfNav_velocity
{
public:
  explicit Init_SbgEkfNav_velocity(::sbg_driver::msg::SbgEkfNav & msg)
  : msg_(msg)
  {}
  Init_SbgEkfNav_velocity_accuracy velocity(::sbg_driver::msg::SbgEkfNav::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_SbgEkfNav_velocity_accuracy(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfNav msg_;
};

class Init_SbgEkfNav_time_stamp
{
public:
  explicit Init_SbgEkfNav_time_stamp(::sbg_driver::msg::SbgEkfNav & msg)
  : msg_(msg)
  {}
  Init_SbgEkfNav_velocity time_stamp(::sbg_driver::msg::SbgEkfNav::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SbgEkfNav_velocity(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfNav msg_;
};

class Init_SbgEkfNav_header
{
public:
  Init_SbgEkfNav_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgEkfNav_time_stamp header(::sbg_driver::msg::SbgEkfNav::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SbgEkfNav_time_stamp(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfNav msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgEkfNav>()
{
  return sbg_driver::msg::builder::Init_SbgEkfNav_header();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_EKF_NAV__BUILDER_HPP_
