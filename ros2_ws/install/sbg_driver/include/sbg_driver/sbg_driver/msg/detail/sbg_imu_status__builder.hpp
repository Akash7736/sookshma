// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgImuStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_IMU_STATUS__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_IMU_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_imu_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgImuStatus_imu_gyros_in_range
{
public:
  explicit Init_SbgImuStatus_imu_gyros_in_range(::sbg_driver::msg::SbgImuStatus & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgImuStatus imu_gyros_in_range(::sbg_driver::msg::SbgImuStatus::_imu_gyros_in_range_type arg)
  {
    msg_.imu_gyros_in_range = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgImuStatus msg_;
};

class Init_SbgImuStatus_imu_accels_in_range
{
public:
  explicit Init_SbgImuStatus_imu_accels_in_range(::sbg_driver::msg::SbgImuStatus & msg)
  : msg_(msg)
  {}
  Init_SbgImuStatus_imu_gyros_in_range imu_accels_in_range(::sbg_driver::msg::SbgImuStatus::_imu_accels_in_range_type arg)
  {
    msg_.imu_accels_in_range = std::move(arg);
    return Init_SbgImuStatus_imu_gyros_in_range(msg_);
  }

private:
  ::sbg_driver::msg::SbgImuStatus msg_;
};

class Init_SbgImuStatus_imu_gyro_z
{
public:
  explicit Init_SbgImuStatus_imu_gyro_z(::sbg_driver::msg::SbgImuStatus & msg)
  : msg_(msg)
  {}
  Init_SbgImuStatus_imu_accels_in_range imu_gyro_z(::sbg_driver::msg::SbgImuStatus::_imu_gyro_z_type arg)
  {
    msg_.imu_gyro_z = std::move(arg);
    return Init_SbgImuStatus_imu_accels_in_range(msg_);
  }

private:
  ::sbg_driver::msg::SbgImuStatus msg_;
};

class Init_SbgImuStatus_imu_gyro_y
{
public:
  explicit Init_SbgImuStatus_imu_gyro_y(::sbg_driver::msg::SbgImuStatus & msg)
  : msg_(msg)
  {}
  Init_SbgImuStatus_imu_gyro_z imu_gyro_y(::sbg_driver::msg::SbgImuStatus::_imu_gyro_y_type arg)
  {
    msg_.imu_gyro_y = std::move(arg);
    return Init_SbgImuStatus_imu_gyro_z(msg_);
  }

private:
  ::sbg_driver::msg::SbgImuStatus msg_;
};

class Init_SbgImuStatus_imu_gyro_x
{
public:
  explicit Init_SbgImuStatus_imu_gyro_x(::sbg_driver::msg::SbgImuStatus & msg)
  : msg_(msg)
  {}
  Init_SbgImuStatus_imu_gyro_y imu_gyro_x(::sbg_driver::msg::SbgImuStatus::_imu_gyro_x_type arg)
  {
    msg_.imu_gyro_x = std::move(arg);
    return Init_SbgImuStatus_imu_gyro_y(msg_);
  }

private:
  ::sbg_driver::msg::SbgImuStatus msg_;
};

class Init_SbgImuStatus_imu_accel_z
{
public:
  explicit Init_SbgImuStatus_imu_accel_z(::sbg_driver::msg::SbgImuStatus & msg)
  : msg_(msg)
  {}
  Init_SbgImuStatus_imu_gyro_x imu_accel_z(::sbg_driver::msg::SbgImuStatus::_imu_accel_z_type arg)
  {
    msg_.imu_accel_z = std::move(arg);
    return Init_SbgImuStatus_imu_gyro_x(msg_);
  }

private:
  ::sbg_driver::msg::SbgImuStatus msg_;
};

class Init_SbgImuStatus_imu_accel_y
{
public:
  explicit Init_SbgImuStatus_imu_accel_y(::sbg_driver::msg::SbgImuStatus & msg)
  : msg_(msg)
  {}
  Init_SbgImuStatus_imu_accel_z imu_accel_y(::sbg_driver::msg::SbgImuStatus::_imu_accel_y_type arg)
  {
    msg_.imu_accel_y = std::move(arg);
    return Init_SbgImuStatus_imu_accel_z(msg_);
  }

private:
  ::sbg_driver::msg::SbgImuStatus msg_;
};

class Init_SbgImuStatus_imu_accel_x
{
public:
  explicit Init_SbgImuStatus_imu_accel_x(::sbg_driver::msg::SbgImuStatus & msg)
  : msg_(msg)
  {}
  Init_SbgImuStatus_imu_accel_y imu_accel_x(::sbg_driver::msg::SbgImuStatus::_imu_accel_x_type arg)
  {
    msg_.imu_accel_x = std::move(arg);
    return Init_SbgImuStatus_imu_accel_y(msg_);
  }

private:
  ::sbg_driver::msg::SbgImuStatus msg_;
};

class Init_SbgImuStatus_imu_status
{
public:
  explicit Init_SbgImuStatus_imu_status(::sbg_driver::msg::SbgImuStatus & msg)
  : msg_(msg)
  {}
  Init_SbgImuStatus_imu_accel_x imu_status(::sbg_driver::msg::SbgImuStatus::_imu_status_type arg)
  {
    msg_.imu_status = std::move(arg);
    return Init_SbgImuStatus_imu_accel_x(msg_);
  }

private:
  ::sbg_driver::msg::SbgImuStatus msg_;
};

class Init_SbgImuStatus_imu_com
{
public:
  Init_SbgImuStatus_imu_com()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgImuStatus_imu_status imu_com(::sbg_driver::msg::SbgImuStatus::_imu_com_type arg)
  {
    msg_.imu_com = std::move(arg);
    return Init_SbgImuStatus_imu_status(msg_);
  }

private:
  ::sbg_driver::msg::SbgImuStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgImuStatus>()
{
  return sbg_driver::msg::builder::Init_SbgImuStatus_imu_com();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_IMU_STATUS__BUILDER_HPP_
