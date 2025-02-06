// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgEkfEuler.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_EKF_EULER__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_EKF_EULER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_ekf_euler__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgEkfEuler_status
{
public:
  explicit Init_SbgEkfEuler_status(::sbg_driver::msg::SbgEkfEuler & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgEkfEuler status(::sbg_driver::msg::SbgEkfEuler::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfEuler msg_;
};

class Init_SbgEkfEuler_accuracy
{
public:
  explicit Init_SbgEkfEuler_accuracy(::sbg_driver::msg::SbgEkfEuler & msg)
  : msg_(msg)
  {}
  Init_SbgEkfEuler_status accuracy(::sbg_driver::msg::SbgEkfEuler::_accuracy_type arg)
  {
    msg_.accuracy = std::move(arg);
    return Init_SbgEkfEuler_status(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfEuler msg_;
};

class Init_SbgEkfEuler_angle
{
public:
  explicit Init_SbgEkfEuler_angle(::sbg_driver::msg::SbgEkfEuler & msg)
  : msg_(msg)
  {}
  Init_SbgEkfEuler_accuracy angle(::sbg_driver::msg::SbgEkfEuler::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_SbgEkfEuler_accuracy(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfEuler msg_;
};

class Init_SbgEkfEuler_time_stamp
{
public:
  explicit Init_SbgEkfEuler_time_stamp(::sbg_driver::msg::SbgEkfEuler & msg)
  : msg_(msg)
  {}
  Init_SbgEkfEuler_angle time_stamp(::sbg_driver::msg::SbgEkfEuler::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SbgEkfEuler_angle(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfEuler msg_;
};

class Init_SbgEkfEuler_header
{
public:
  Init_SbgEkfEuler_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgEkfEuler_time_stamp header(::sbg_driver::msg::SbgEkfEuler::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SbgEkfEuler_time_stamp(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfEuler msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgEkfEuler>()
{
  return sbg_driver::msg::builder::Init_SbgEkfEuler_header();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_EKF_EULER__BUILDER_HPP_
