// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_STATUS__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgStatus_status_aiding
{
public:
  explicit Init_SbgStatus_status_aiding(::sbg_driver::msg::SbgStatus & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgStatus status_aiding(::sbg_driver::msg::SbgStatus::_status_aiding_type arg)
  {
    msg_.status_aiding = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatus msg_;
};

class Init_SbgStatus_status_com
{
public:
  explicit Init_SbgStatus_status_com(::sbg_driver::msg::SbgStatus & msg)
  : msg_(msg)
  {}
  Init_SbgStatus_status_aiding status_com(::sbg_driver::msg::SbgStatus::_status_com_type arg)
  {
    msg_.status_com = std::move(arg);
    return Init_SbgStatus_status_aiding(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatus msg_;
};

class Init_SbgStatus_status_general
{
public:
  explicit Init_SbgStatus_status_general(::sbg_driver::msg::SbgStatus & msg)
  : msg_(msg)
  {}
  Init_SbgStatus_status_com status_general(::sbg_driver::msg::SbgStatus::_status_general_type arg)
  {
    msg_.status_general = std::move(arg);
    return Init_SbgStatus_status_com(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatus msg_;
};

class Init_SbgStatus_time_stamp
{
public:
  explicit Init_SbgStatus_time_stamp(::sbg_driver::msg::SbgStatus & msg)
  : msg_(msg)
  {}
  Init_SbgStatus_status_general time_stamp(::sbg_driver::msg::SbgStatus::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SbgStatus_status_general(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatus msg_;
};

class Init_SbgStatus_header
{
public:
  Init_SbgStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgStatus_time_stamp header(::sbg_driver::msg::SbgStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SbgStatus_time_stamp(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgStatus>()
{
  return sbg_driver::msg::builder::Init_SbgStatus_header();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_STATUS__BUILDER_HPP_
