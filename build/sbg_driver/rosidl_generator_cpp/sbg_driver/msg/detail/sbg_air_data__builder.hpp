// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgAirData.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_AIR_DATA__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_AIR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_air_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgAirData_air_temperature
{
public:
  explicit Init_SbgAirData_air_temperature(::sbg_driver::msg::SbgAirData & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgAirData air_temperature(::sbg_driver::msg::SbgAirData::_air_temperature_type arg)
  {
    msg_.air_temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgAirData msg_;
};

class Init_SbgAirData_true_air_speed
{
public:
  explicit Init_SbgAirData_true_air_speed(::sbg_driver::msg::SbgAirData & msg)
  : msg_(msg)
  {}
  Init_SbgAirData_air_temperature true_air_speed(::sbg_driver::msg::SbgAirData::_true_air_speed_type arg)
  {
    msg_.true_air_speed = std::move(arg);
    return Init_SbgAirData_air_temperature(msg_);
  }

private:
  ::sbg_driver::msg::SbgAirData msg_;
};

class Init_SbgAirData_pressure_diff
{
public:
  explicit Init_SbgAirData_pressure_diff(::sbg_driver::msg::SbgAirData & msg)
  : msg_(msg)
  {}
  Init_SbgAirData_true_air_speed pressure_diff(::sbg_driver::msg::SbgAirData::_pressure_diff_type arg)
  {
    msg_.pressure_diff = std::move(arg);
    return Init_SbgAirData_true_air_speed(msg_);
  }

private:
  ::sbg_driver::msg::SbgAirData msg_;
};

class Init_SbgAirData_altitude
{
public:
  explicit Init_SbgAirData_altitude(::sbg_driver::msg::SbgAirData & msg)
  : msg_(msg)
  {}
  Init_SbgAirData_pressure_diff altitude(::sbg_driver::msg::SbgAirData::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_SbgAirData_pressure_diff(msg_);
  }

private:
  ::sbg_driver::msg::SbgAirData msg_;
};

class Init_SbgAirData_pressure_abs
{
public:
  explicit Init_SbgAirData_pressure_abs(::sbg_driver::msg::SbgAirData & msg)
  : msg_(msg)
  {}
  Init_SbgAirData_altitude pressure_abs(::sbg_driver::msg::SbgAirData::_pressure_abs_type arg)
  {
    msg_.pressure_abs = std::move(arg);
    return Init_SbgAirData_altitude(msg_);
  }

private:
  ::sbg_driver::msg::SbgAirData msg_;
};

class Init_SbgAirData_status
{
public:
  explicit Init_SbgAirData_status(::sbg_driver::msg::SbgAirData & msg)
  : msg_(msg)
  {}
  Init_SbgAirData_pressure_abs status(::sbg_driver::msg::SbgAirData::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SbgAirData_pressure_abs(msg_);
  }

private:
  ::sbg_driver::msg::SbgAirData msg_;
};

class Init_SbgAirData_time_stamp
{
public:
  explicit Init_SbgAirData_time_stamp(::sbg_driver::msg::SbgAirData & msg)
  : msg_(msg)
  {}
  Init_SbgAirData_status time_stamp(::sbg_driver::msg::SbgAirData::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SbgAirData_status(msg_);
  }

private:
  ::sbg_driver::msg::SbgAirData msg_;
};

class Init_SbgAirData_header
{
public:
  Init_SbgAirData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgAirData_time_stamp header(::sbg_driver::msg::SbgAirData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SbgAirData_time_stamp(msg_);
  }

private:
  ::sbg_driver::msg::SbgAirData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgAirData>()
{
  return sbg_driver::msg::builder::Init_SbgAirData_header();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_AIR_DATA__BUILDER_HPP_
