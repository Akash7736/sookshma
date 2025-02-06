// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgGpsVel.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_GPS_VEL__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_GPS_VEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_gps_vel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgGpsVel_course_acc
{
public:
  explicit Init_SbgGpsVel_course_acc(::sbg_driver::msg::SbgGpsVel & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgGpsVel course_acc(::sbg_driver::msg::SbgGpsVel::_course_acc_type arg)
  {
    msg_.course_acc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsVel msg_;
};

class Init_SbgGpsVel_course
{
public:
  explicit Init_SbgGpsVel_course(::sbg_driver::msg::SbgGpsVel & msg)
  : msg_(msg)
  {}
  Init_SbgGpsVel_course_acc course(::sbg_driver::msg::SbgGpsVel::_course_type arg)
  {
    msg_.course = std::move(arg);
    return Init_SbgGpsVel_course_acc(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsVel msg_;
};

class Init_SbgGpsVel_velocity_accuracy
{
public:
  explicit Init_SbgGpsVel_velocity_accuracy(::sbg_driver::msg::SbgGpsVel & msg)
  : msg_(msg)
  {}
  Init_SbgGpsVel_course velocity_accuracy(::sbg_driver::msg::SbgGpsVel::_velocity_accuracy_type arg)
  {
    msg_.velocity_accuracy = std::move(arg);
    return Init_SbgGpsVel_course(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsVel msg_;
};

class Init_SbgGpsVel_velocity
{
public:
  explicit Init_SbgGpsVel_velocity(::sbg_driver::msg::SbgGpsVel & msg)
  : msg_(msg)
  {}
  Init_SbgGpsVel_velocity_accuracy velocity(::sbg_driver::msg::SbgGpsVel::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_SbgGpsVel_velocity_accuracy(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsVel msg_;
};

class Init_SbgGpsVel_gps_tow
{
public:
  explicit Init_SbgGpsVel_gps_tow(::sbg_driver::msg::SbgGpsVel & msg)
  : msg_(msg)
  {}
  Init_SbgGpsVel_velocity gps_tow(::sbg_driver::msg::SbgGpsVel::_gps_tow_type arg)
  {
    msg_.gps_tow = std::move(arg);
    return Init_SbgGpsVel_velocity(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsVel msg_;
};

class Init_SbgGpsVel_status
{
public:
  explicit Init_SbgGpsVel_status(::sbg_driver::msg::SbgGpsVel & msg)
  : msg_(msg)
  {}
  Init_SbgGpsVel_gps_tow status(::sbg_driver::msg::SbgGpsVel::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SbgGpsVel_gps_tow(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsVel msg_;
};

class Init_SbgGpsVel_time_stamp
{
public:
  explicit Init_SbgGpsVel_time_stamp(::sbg_driver::msg::SbgGpsVel & msg)
  : msg_(msg)
  {}
  Init_SbgGpsVel_status time_stamp(::sbg_driver::msg::SbgGpsVel::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SbgGpsVel_status(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsVel msg_;
};

class Init_SbgGpsVel_header
{
public:
  Init_SbgGpsVel_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgGpsVel_time_stamp header(::sbg_driver::msg::SbgGpsVel::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SbgGpsVel_time_stamp(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsVel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgGpsVel>()
{
  return sbg_driver::msg::builder::Init_SbgGpsVel_header();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_GPS_VEL__BUILDER_HPP_
