// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgStatusGeneral.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_STATUS_GENERAL__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_STATUS_GENERAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_status_general__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgStatusGeneral_temperature
{
public:
  explicit Init_SbgStatusGeneral_temperature(::sbg_driver::msg::SbgStatusGeneral & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgStatusGeneral temperature(::sbg_driver::msg::SbgStatusGeneral::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusGeneral msg_;
};

class Init_SbgStatusGeneral_settings
{
public:
  explicit Init_SbgStatusGeneral_settings(::sbg_driver::msg::SbgStatusGeneral & msg)
  : msg_(msg)
  {}
  Init_SbgStatusGeneral_temperature settings(::sbg_driver::msg::SbgStatusGeneral::_settings_type arg)
  {
    msg_.settings = std::move(arg);
    return Init_SbgStatusGeneral_temperature(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusGeneral msg_;
};

class Init_SbgStatusGeneral_gps_power
{
public:
  explicit Init_SbgStatusGeneral_gps_power(::sbg_driver::msg::SbgStatusGeneral & msg)
  : msg_(msg)
  {}
  Init_SbgStatusGeneral_settings gps_power(::sbg_driver::msg::SbgStatusGeneral::_gps_power_type arg)
  {
    msg_.gps_power = std::move(arg);
    return Init_SbgStatusGeneral_settings(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusGeneral msg_;
};

class Init_SbgStatusGeneral_imu_power
{
public:
  explicit Init_SbgStatusGeneral_imu_power(::sbg_driver::msg::SbgStatusGeneral & msg)
  : msg_(msg)
  {}
  Init_SbgStatusGeneral_gps_power imu_power(::sbg_driver::msg::SbgStatusGeneral::_imu_power_type arg)
  {
    msg_.imu_power = std::move(arg);
    return Init_SbgStatusGeneral_gps_power(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusGeneral msg_;
};

class Init_SbgStatusGeneral_main_power
{
public:
  Init_SbgStatusGeneral_main_power()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgStatusGeneral_imu_power main_power(::sbg_driver::msg::SbgStatusGeneral::_main_power_type arg)
  {
    msg_.main_power = std::move(arg);
    return Init_SbgStatusGeneral_imu_power(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusGeneral msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgStatusGeneral>()
{
  return sbg_driver::msg::builder::Init_SbgStatusGeneral_main_power();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_STATUS_GENERAL__BUILDER_HPP_
