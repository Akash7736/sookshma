// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgGpsVelStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_GPS_VEL_STATUS__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_GPS_VEL_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_gps_vel_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgGpsVelStatus_vel_type
{
public:
  explicit Init_SbgGpsVelStatus_vel_type(::sbg_driver::msg::SbgGpsVelStatus & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgGpsVelStatus vel_type(::sbg_driver::msg::SbgGpsVelStatus::_vel_type_type arg)
  {
    msg_.vel_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsVelStatus msg_;
};

class Init_SbgGpsVelStatus_vel_status
{
public:
  Init_SbgGpsVelStatus_vel_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgGpsVelStatus_vel_type vel_status(::sbg_driver::msg::SbgGpsVelStatus::_vel_status_type arg)
  {
    msg_.vel_status = std::move(arg);
    return Init_SbgGpsVelStatus_vel_type(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsVelStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgGpsVelStatus>()
{
  return sbg_driver::msg::builder::Init_SbgGpsVelStatus_vel_status();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_GPS_VEL_STATUS__BUILDER_HPP_
