// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgMagStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_MAG_STATUS__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_MAG_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_mag_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgMagStatus_calibration
{
public:
  explicit Init_SbgMagStatus_calibration(::sbg_driver::msg::SbgMagStatus & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgMagStatus calibration(::sbg_driver::msg::SbgMagStatus::_calibration_type arg)
  {
    msg_.calibration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgMagStatus msg_;
};

class Init_SbgMagStatus_accels_in_range
{
public:
  explicit Init_SbgMagStatus_accels_in_range(::sbg_driver::msg::SbgMagStatus & msg)
  : msg_(msg)
  {}
  Init_SbgMagStatus_calibration accels_in_range(::sbg_driver::msg::SbgMagStatus::_accels_in_range_type arg)
  {
    msg_.accels_in_range = std::move(arg);
    return Init_SbgMagStatus_calibration(msg_);
  }

private:
  ::sbg_driver::msg::SbgMagStatus msg_;
};

class Init_SbgMagStatus_mags_in_range
{
public:
  explicit Init_SbgMagStatus_mags_in_range(::sbg_driver::msg::SbgMagStatus & msg)
  : msg_(msg)
  {}
  Init_SbgMagStatus_accels_in_range mags_in_range(::sbg_driver::msg::SbgMagStatus::_mags_in_range_type arg)
  {
    msg_.mags_in_range = std::move(arg);
    return Init_SbgMagStatus_accels_in_range(msg_);
  }

private:
  ::sbg_driver::msg::SbgMagStatus msg_;
};

class Init_SbgMagStatus_accel_z
{
public:
  explicit Init_SbgMagStatus_accel_z(::sbg_driver::msg::SbgMagStatus & msg)
  : msg_(msg)
  {}
  Init_SbgMagStatus_mags_in_range accel_z(::sbg_driver::msg::SbgMagStatus::_accel_z_type arg)
  {
    msg_.accel_z = std::move(arg);
    return Init_SbgMagStatus_mags_in_range(msg_);
  }

private:
  ::sbg_driver::msg::SbgMagStatus msg_;
};

class Init_SbgMagStatus_accel_y
{
public:
  explicit Init_SbgMagStatus_accel_y(::sbg_driver::msg::SbgMagStatus & msg)
  : msg_(msg)
  {}
  Init_SbgMagStatus_accel_z accel_y(::sbg_driver::msg::SbgMagStatus::_accel_y_type arg)
  {
    msg_.accel_y = std::move(arg);
    return Init_SbgMagStatus_accel_z(msg_);
  }

private:
  ::sbg_driver::msg::SbgMagStatus msg_;
};

class Init_SbgMagStatus_accel_x
{
public:
  explicit Init_SbgMagStatus_accel_x(::sbg_driver::msg::SbgMagStatus & msg)
  : msg_(msg)
  {}
  Init_SbgMagStatus_accel_y accel_x(::sbg_driver::msg::SbgMagStatus::_accel_x_type arg)
  {
    msg_.accel_x = std::move(arg);
    return Init_SbgMagStatus_accel_y(msg_);
  }

private:
  ::sbg_driver::msg::SbgMagStatus msg_;
};

class Init_SbgMagStatus_mag_z
{
public:
  explicit Init_SbgMagStatus_mag_z(::sbg_driver::msg::SbgMagStatus & msg)
  : msg_(msg)
  {}
  Init_SbgMagStatus_accel_x mag_z(::sbg_driver::msg::SbgMagStatus::_mag_z_type arg)
  {
    msg_.mag_z = std::move(arg);
    return Init_SbgMagStatus_accel_x(msg_);
  }

private:
  ::sbg_driver::msg::SbgMagStatus msg_;
};

class Init_SbgMagStatus_mag_y
{
public:
  explicit Init_SbgMagStatus_mag_y(::sbg_driver::msg::SbgMagStatus & msg)
  : msg_(msg)
  {}
  Init_SbgMagStatus_mag_z mag_y(::sbg_driver::msg::SbgMagStatus::_mag_y_type arg)
  {
    msg_.mag_y = std::move(arg);
    return Init_SbgMagStatus_mag_z(msg_);
  }

private:
  ::sbg_driver::msg::SbgMagStatus msg_;
};

class Init_SbgMagStatus_mag_x
{
public:
  Init_SbgMagStatus_mag_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgMagStatus_mag_y mag_x(::sbg_driver::msg::SbgMagStatus::_mag_x_type arg)
  {
    msg_.mag_x = std::move(arg);
    return Init_SbgMagStatus_mag_y(msg_);
  }

private:
  ::sbg_driver::msg::SbgMagStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgMagStatus>()
{
  return sbg_driver::msg::builder::Init_SbgMagStatus_mag_x();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_MAG_STATUS__BUILDER_HPP_
