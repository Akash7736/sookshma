// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgImuShort.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_IMU_SHORT__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_IMU_SHORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_imu_short__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgImuShort_temperature
{
public:
  explicit Init_SbgImuShort_temperature(::sbg_driver::msg::SbgImuShort & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgImuShort temperature(::sbg_driver::msg::SbgImuShort::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgImuShort msg_;
};

class Init_SbgImuShort_delta_angle
{
public:
  explicit Init_SbgImuShort_delta_angle(::sbg_driver::msg::SbgImuShort & msg)
  : msg_(msg)
  {}
  Init_SbgImuShort_temperature delta_angle(::sbg_driver::msg::SbgImuShort::_delta_angle_type arg)
  {
    msg_.delta_angle = std::move(arg);
    return Init_SbgImuShort_temperature(msg_);
  }

private:
  ::sbg_driver::msg::SbgImuShort msg_;
};

class Init_SbgImuShort_delta_velocity
{
public:
  explicit Init_SbgImuShort_delta_velocity(::sbg_driver::msg::SbgImuShort & msg)
  : msg_(msg)
  {}
  Init_SbgImuShort_delta_angle delta_velocity(::sbg_driver::msg::SbgImuShort::_delta_velocity_type arg)
  {
    msg_.delta_velocity = std::move(arg);
    return Init_SbgImuShort_delta_angle(msg_);
  }

private:
  ::sbg_driver::msg::SbgImuShort msg_;
};

class Init_SbgImuShort_imu_status
{
public:
  explicit Init_SbgImuShort_imu_status(::sbg_driver::msg::SbgImuShort & msg)
  : msg_(msg)
  {}
  Init_SbgImuShort_delta_velocity imu_status(::sbg_driver::msg::SbgImuShort::_imu_status_type arg)
  {
    msg_.imu_status = std::move(arg);
    return Init_SbgImuShort_delta_velocity(msg_);
  }

private:
  ::sbg_driver::msg::SbgImuShort msg_;
};

class Init_SbgImuShort_time_stamp
{
public:
  explicit Init_SbgImuShort_time_stamp(::sbg_driver::msg::SbgImuShort & msg)
  : msg_(msg)
  {}
  Init_SbgImuShort_imu_status time_stamp(::sbg_driver::msg::SbgImuShort::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SbgImuShort_imu_status(msg_);
  }

private:
  ::sbg_driver::msg::SbgImuShort msg_;
};

class Init_SbgImuShort_header
{
public:
  Init_SbgImuShort_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgImuShort_time_stamp header(::sbg_driver::msg::SbgImuShort::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SbgImuShort_time_stamp(msg_);
  }

private:
  ::sbg_driver::msg::SbgImuShort msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgImuShort>()
{
  return sbg_driver::msg::builder::Init_SbgImuShort_header();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_IMU_SHORT__BUILDER_HPP_
