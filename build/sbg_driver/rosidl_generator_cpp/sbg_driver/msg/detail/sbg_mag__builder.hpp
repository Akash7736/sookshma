// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgMag.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_MAG__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_MAG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_mag__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgMag_status
{
public:
  explicit Init_SbgMag_status(::sbg_driver::msg::SbgMag & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgMag status(::sbg_driver::msg::SbgMag::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgMag msg_;
};

class Init_SbgMag_accel
{
public:
  explicit Init_SbgMag_accel(::sbg_driver::msg::SbgMag & msg)
  : msg_(msg)
  {}
  Init_SbgMag_status accel(::sbg_driver::msg::SbgMag::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return Init_SbgMag_status(msg_);
  }

private:
  ::sbg_driver::msg::SbgMag msg_;
};

class Init_SbgMag_mag
{
public:
  explicit Init_SbgMag_mag(::sbg_driver::msg::SbgMag & msg)
  : msg_(msg)
  {}
  Init_SbgMag_accel mag(::sbg_driver::msg::SbgMag::_mag_type arg)
  {
    msg_.mag = std::move(arg);
    return Init_SbgMag_accel(msg_);
  }

private:
  ::sbg_driver::msg::SbgMag msg_;
};

class Init_SbgMag_time_stamp
{
public:
  explicit Init_SbgMag_time_stamp(::sbg_driver::msg::SbgMag & msg)
  : msg_(msg)
  {}
  Init_SbgMag_mag time_stamp(::sbg_driver::msg::SbgMag::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SbgMag_mag(msg_);
  }

private:
  ::sbg_driver::msg::SbgMag msg_;
};

class Init_SbgMag_header
{
public:
  Init_SbgMag_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgMag_time_stamp header(::sbg_driver::msg::SbgMag::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SbgMag_time_stamp(msg_);
  }

private:
  ::sbg_driver::msg::SbgMag msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgMag>()
{
  return sbg_driver::msg::builder::Init_SbgMag_header();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_MAG__BUILDER_HPP_
