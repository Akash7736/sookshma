// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgEkfVelBody.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_EKF_VEL_BODY__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_EKF_VEL_BODY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_ekf_vel_body__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgEkfVelBody_status
{
public:
  explicit Init_SbgEkfVelBody_status(::sbg_driver::msg::SbgEkfVelBody & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgEkfVelBody status(::sbg_driver::msg::SbgEkfVelBody::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfVelBody msg_;
};

class Init_SbgEkfVelBody_velocity_accuracy
{
public:
  explicit Init_SbgEkfVelBody_velocity_accuracy(::sbg_driver::msg::SbgEkfVelBody & msg)
  : msg_(msg)
  {}
  Init_SbgEkfVelBody_status velocity_accuracy(::sbg_driver::msg::SbgEkfVelBody::_velocity_accuracy_type arg)
  {
    msg_.velocity_accuracy = std::move(arg);
    return Init_SbgEkfVelBody_status(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfVelBody msg_;
};

class Init_SbgEkfVelBody_velocity
{
public:
  explicit Init_SbgEkfVelBody_velocity(::sbg_driver::msg::SbgEkfVelBody & msg)
  : msg_(msg)
  {}
  Init_SbgEkfVelBody_velocity_accuracy velocity(::sbg_driver::msg::SbgEkfVelBody::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_SbgEkfVelBody_velocity_accuracy(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfVelBody msg_;
};

class Init_SbgEkfVelBody_time_stamp
{
public:
  explicit Init_SbgEkfVelBody_time_stamp(::sbg_driver::msg::SbgEkfVelBody & msg)
  : msg_(msg)
  {}
  Init_SbgEkfVelBody_velocity time_stamp(::sbg_driver::msg::SbgEkfVelBody::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SbgEkfVelBody_velocity(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfVelBody msg_;
};

class Init_SbgEkfVelBody_header
{
public:
  Init_SbgEkfVelBody_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgEkfVelBody_time_stamp header(::sbg_driver::msg::SbgEkfVelBody::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SbgEkfVelBody_time_stamp(msg_);
  }

private:
  ::sbg_driver::msg::SbgEkfVelBody msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgEkfVelBody>()
{
  return sbg_driver::msg::builder::Init_SbgEkfVelBody_header();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_EKF_VEL_BODY__BUILDER_HPP_
