// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgEkfQuat.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_EKF_QUAT__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_EKF_QUAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_ekf_quat__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgEkfQuat_status
{
public:
  explicit Init_SbgEkfQuat_status(::sbg_driver::msg::SbgEkfQuat & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgEkfQuat status(::sbg_driver::msg::SbgEkfQuat::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfQuat msg_;
};

class Init_SbgEkfQuat_accuracy
{
public:
  explicit Init_SbgEkfQuat_accuracy(::sbg_driver::msg::SbgEkfQuat & msg)
  : msg_(msg)
  {}
  Init_SbgEkfQuat_status accuracy(::sbg_driver::msg::SbgEkfQuat::_accuracy_type arg)
  {
    msg_.accuracy = std::move(arg);
    return Init_SbgEkfQuat_status(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfQuat msg_;
};

class Init_SbgEkfQuat_quaternion
{
public:
  explicit Init_SbgEkfQuat_quaternion(::sbg_driver::msg::SbgEkfQuat & msg)
  : msg_(msg)
  {}
  Init_SbgEkfQuat_accuracy quaternion(::sbg_driver::msg::SbgEkfQuat::_quaternion_type arg)
  {
    msg_.quaternion = std::move(arg);
    return Init_SbgEkfQuat_accuracy(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfQuat msg_;
};

class Init_SbgEkfQuat_time_stamp
{
public:
  explicit Init_SbgEkfQuat_time_stamp(::sbg_driver::msg::SbgEkfQuat & msg)
  : msg_(msg)
  {}
  Init_SbgEkfQuat_quaternion time_stamp(::sbg_driver::msg::SbgEkfQuat::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SbgEkfQuat_quaternion(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfQuat msg_;
};

class Init_SbgEkfQuat_header
{
public:
  Init_SbgEkfQuat_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgEkfQuat_time_stamp header(::sbg_driver::msg::SbgEkfQuat::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SbgEkfQuat_time_stamp(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfQuat msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgEkfQuat>()
{
  return sbg_driver::msg::builder::Init_SbgEkfQuat_header();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_EKF_QUAT__BUILDER_HPP_
