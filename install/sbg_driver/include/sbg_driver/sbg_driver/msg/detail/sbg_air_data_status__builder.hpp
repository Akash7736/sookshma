// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgAirDataStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_AIR_DATA_STATUS__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_AIR_DATA_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_air_data_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgAirDataStatus_air_temperature_valid
{
public:
  explicit Init_SbgAirDataStatus_air_temperature_valid(::sbg_driver::msg::SbgAirDataStatus & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgAirDataStatus air_temperature_valid(::sbg_driver::msg::SbgAirDataStatus::_air_temperature_valid_type arg)
  {
    msg_.air_temperature_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgAirDataStatus msg_;
};

class Init_SbgAirDataStatus_air_speed_valid
{
public:
  explicit Init_SbgAirDataStatus_air_speed_valid(::sbg_driver::msg::SbgAirDataStatus & msg)
  : msg_(msg)
  {}
  Init_SbgAirDataStatus_air_temperature_valid air_speed_valid(::sbg_driver::msg::SbgAirDataStatus::_air_speed_valid_type arg)
  {
    msg_.air_speed_valid = std::move(arg);
    return Init_SbgAirDataStatus_air_temperature_valid(msg_);
  }

private:
  ::sbg_driver::msg::SbgAirDataStatus msg_;
};

class Init_SbgAirDataStatus_pressure_diff_valid
{
public:
  explicit Init_SbgAirDataStatus_pressure_diff_valid(::sbg_driver::msg::SbgAirDataStatus & msg)
  : msg_(msg)
  {}
  Init_SbgAirDataStatus_air_speed_valid pressure_diff_valid(::sbg_driver::msg::SbgAirDataStatus::_pressure_diff_valid_type arg)
  {
    msg_.pressure_diff_valid = std::move(arg);
    return Init_SbgAirDataStatus_air_speed_valid(msg_);
  }

private:
  ::sbg_driver::msg::SbgAirDataStatus msg_;
};

class Init_SbgAirDataStatus_altitude_valid
{
public:
  explicit Init_SbgAirDataStatus_altitude_valid(::sbg_driver::msg::SbgAirDataStatus & msg)
  : msg_(msg)
  {}
  Init_SbgAirDataStatus_pressure_diff_valid altitude_valid(::sbg_driver::msg::SbgAirDataStatus::_altitude_valid_type arg)
  {
    msg_.altitude_valid = std::move(arg);
    return Init_SbgAirDataStatus_pressure_diff_valid(msg_);
  }

private:
  ::sbg_driver::msg::SbgAirDataStatus msg_;
};

class Init_SbgAirDataStatus_pressure_valid
{
public:
  explicit Init_SbgAirDataStatus_pressure_valid(::sbg_driver::msg::SbgAirDataStatus & msg)
  : msg_(msg)
  {}
  Init_SbgAirDataStatus_altitude_valid pressure_valid(::sbg_driver::msg::SbgAirDataStatus::_pressure_valid_type arg)
  {
    msg_.pressure_valid = std::move(arg);
    return Init_SbgAirDataStatus_altitude_valid(msg_);
  }

private:
  ::sbg_driver::msg::SbgAirDataStatus msg_;
};

class Init_SbgAirDataStatus_is_delay_time
{
public:
  Init_SbgAirDataStatus_is_delay_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgAirDataStatus_pressure_valid is_delay_time(::sbg_driver::msg::SbgAirDataStatus::_is_delay_time_type arg)
  {
    msg_.is_delay_time = std::move(arg);
    return Init_SbgAirDataStatus_pressure_valid(msg_);
  }

private:
  ::sbg_driver::msg::SbgAirDataStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgAirDataStatus>()
{
  return sbg_driver::msg::builder::Init_SbgAirDataStatus_is_delay_time();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_AIR_DATA_STATUS__BUILDER_HPP_
