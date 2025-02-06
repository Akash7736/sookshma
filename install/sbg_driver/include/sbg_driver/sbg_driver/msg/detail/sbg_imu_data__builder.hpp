// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgImuData.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_IMU_DATA__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_IMU_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_imu_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgImuData_delta_angle
{
public:
  explicit Init_SbgImuData_delta_angle(::sbg_driver::msg::SbgImuData & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgImuData delta_angle(::sbg_driver::msg::SbgImuData::_delta_angle_type arg)
  {
    msg_.delta_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgImuData msg_;
};

class Init_SbgImuData_delta_vel
{
public:
  explicit Init_SbgImuData_delta_vel(::sbg_driver::msg::SbgImuData & msg)
  : msg_(msg)
  {}
  Init_SbgImuData_delta_angle delta_vel(::sbg_driver::msg::SbgImuData::_delta_vel_type arg)
  {
    msg_.delta_vel = std::move(arg);
    return Init_SbgImuData_delta_angle(msg_);
  }

private:
  ::sbg_driver::msg::SbgImuData msg_;
};

class Init_SbgImuData_temp
{
public:
  explicit Init_SbgImuData_temp(::sbg_driver::msg::SbgImuData & msg)
  : msg_(msg)
  {}
  Init_SbgImuData_delta_vel temp(::sbg_driver::msg::SbgImuData::_temp_type arg)
  {
    msg_.temp = std::move(arg);
    return Init_SbgImuData_delta_vel(msg_);
  }

private:
  ::sbg_driver::msg::SbgImuData msg_;
};

class Init_SbgImuData_gyro
{
public:
  explicit Init_SbgImuData_gyro(::sbg_driver::msg::SbgImuData & msg)
  : msg_(msg)
  {}
  Init_SbgImuData_temp gyro(::sbg_driver::msg::SbgImuData::_gyro_type arg)
  {
    msg_.gyro = std::move(arg);
    return Init_SbgImuData_temp(msg_);
  }

private:
  ::sbg_driver::msg::SbgImuData msg_;
};

class Init_SbgImuData_accel
{
public:
  explicit Init_SbgImuData_accel(::sbg_driver::msg::SbgImuData & msg)
  : msg_(msg)
  {}
  Init_SbgImuData_gyro accel(::sbg_driver::msg::SbgImuData::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return Init_SbgImuData_gyro(msg_);
  }

private:
  ::sbg_driver::msg::SbgImuData msg_;
};

class Init_SbgImuData_imu_status
{
public:
  explicit Init_SbgImuData_imu_status(::sbg_driver::msg::SbgImuData & msg)
  : msg_(msg)
  {}
  Init_SbgImuData_accel imu_status(::sbg_driver::msg::SbgImuData::_imu_status_type arg)
  {
    msg_.imu_status = std::move(arg);
    return Init_SbgImuData_accel(msg_);
  }

private:
  ::sbg_driver::msg::SbgImuData msg_;
};

class Init_SbgImuData_time_stamp
{
public:
  explicit Init_SbgImuData_time_stamp(::sbg_driver::msg::SbgImuData & msg)
  : msg_(msg)
  {}
  Init_SbgImuData_imu_status time_stamp(::sbg_driver::msg::SbgImuData::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SbgImuData_imu_status(msg_);
  }

private:
  ::sbg_driver::msg::SbgImuData msg_;
};

class Init_SbgImuData_header
{
public:
  Init_SbgImuData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgImuData_time_stamp header(::sbg_driver::msg::SbgImuData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SbgImuData_time_stamp(msg_);
  }

private:
  ::sbg_driver::msg::SbgImuData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgImuData>()
{
  return sbg_driver::msg::builder::Init_SbgImuData_header();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_IMU_DATA__BUILDER_HPP_
