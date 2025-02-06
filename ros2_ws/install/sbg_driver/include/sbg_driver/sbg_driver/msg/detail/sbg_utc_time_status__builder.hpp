// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgUtcTimeStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_UTC_TIME_STATUS__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_UTC_TIME_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_utc_time_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgUtcTimeStatus_clock_utc_status
{
public:
  explicit Init_SbgUtcTimeStatus_clock_utc_status(::sbg_driver::msg::SbgUtcTimeStatus & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgUtcTimeStatus clock_utc_status(::sbg_driver::msg::SbgUtcTimeStatus::_clock_utc_status_type arg)
  {
    msg_.clock_utc_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgUtcTimeStatus msg_;
};

class Init_SbgUtcTimeStatus_clock_utc_sync
{
public:
  explicit Init_SbgUtcTimeStatus_clock_utc_sync(::sbg_driver::msg::SbgUtcTimeStatus & msg)
  : msg_(msg)
  {}
  Init_SbgUtcTimeStatus_clock_utc_status clock_utc_sync(::sbg_driver::msg::SbgUtcTimeStatus::_clock_utc_sync_type arg)
  {
    msg_.clock_utc_sync = std::move(arg);
    return Init_SbgUtcTimeStatus_clock_utc_status(msg_);
  }

private:
  ::sbg_driver::msg::SbgUtcTimeStatus msg_;
};

class Init_SbgUtcTimeStatus_clock_status
{
public:
  explicit Init_SbgUtcTimeStatus_clock_status(::sbg_driver::msg::SbgUtcTimeStatus & msg)
  : msg_(msg)
  {}
  Init_SbgUtcTimeStatus_clock_utc_sync clock_status(::sbg_driver::msg::SbgUtcTimeStatus::_clock_status_type arg)
  {
    msg_.clock_status = std::move(arg);
    return Init_SbgUtcTimeStatus_clock_utc_sync(msg_);
  }

private:
  ::sbg_driver::msg::SbgUtcTimeStatus msg_;
};

class Init_SbgUtcTimeStatus_clock_stable
{
public:
  Init_SbgUtcTimeStatus_clock_stable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgUtcTimeStatus_clock_status clock_stable(::sbg_driver::msg::SbgUtcTimeStatus::_clock_stable_type arg)
  {
    msg_.clock_stable = std::move(arg);
    return Init_SbgUtcTimeStatus_clock_status(msg_);
  }

private:
  ::sbg_driver::msg::SbgUtcTimeStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgUtcTimeStatus>()
{
  return sbg_driver::msg::builder::Init_SbgUtcTimeStatus_clock_stable();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_UTC_TIME_STATUS__BUILDER_HPP_
