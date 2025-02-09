// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgGpsHdt.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_GPS_HDT__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_GPS_HDT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_gps_hdt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgGpsHdt_baseline
{
public:
  explicit Init_SbgGpsHdt_baseline(::sbg_driver::msg::SbgGpsHdt & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgGpsHdt baseline(::sbg_driver::msg::SbgGpsHdt::_baseline_type arg)
  {
    msg_.baseline = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsHdt msg_;
};

class Init_SbgGpsHdt_pitch_acc
{
public:
  explicit Init_SbgGpsHdt_pitch_acc(::sbg_driver::msg::SbgGpsHdt & msg)
  : msg_(msg)
  {}
  Init_SbgGpsHdt_baseline pitch_acc(::sbg_driver::msg::SbgGpsHdt::_pitch_acc_type arg)
  {
    msg_.pitch_acc = std::move(arg);
    return Init_SbgGpsHdt_baseline(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsHdt msg_;
};

class Init_SbgGpsHdt_pitch
{
public:
  explicit Init_SbgGpsHdt_pitch(::sbg_driver::msg::SbgGpsHdt & msg)
  : msg_(msg)
  {}
  Init_SbgGpsHdt_pitch_acc pitch(::sbg_driver::msg::SbgGpsHdt::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_SbgGpsHdt_pitch_acc(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsHdt msg_;
};

class Init_SbgGpsHdt_true_heading_acc
{
public:
  explicit Init_SbgGpsHdt_true_heading_acc(::sbg_driver::msg::SbgGpsHdt & msg)
  : msg_(msg)
  {}
  Init_SbgGpsHdt_pitch true_heading_acc(::sbg_driver::msg::SbgGpsHdt::_true_heading_acc_type arg)
  {
    msg_.true_heading_acc = std::move(arg);
    return Init_SbgGpsHdt_pitch(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsHdt msg_;
};

class Init_SbgGpsHdt_true_heading
{
public:
  explicit Init_SbgGpsHdt_true_heading(::sbg_driver::msg::SbgGpsHdt & msg)
  : msg_(msg)
  {}
  Init_SbgGpsHdt_true_heading_acc true_heading(::sbg_driver::msg::SbgGpsHdt::_true_heading_type arg)
  {
    msg_.true_heading = std::move(arg);
    return Init_SbgGpsHdt_true_heading_acc(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsHdt msg_;
};

class Init_SbgGpsHdt_tow
{
public:
  explicit Init_SbgGpsHdt_tow(::sbg_driver::msg::SbgGpsHdt & msg)
  : msg_(msg)
  {}
  Init_SbgGpsHdt_true_heading tow(::sbg_driver::msg::SbgGpsHdt::_tow_type arg)
  {
    msg_.tow = std::move(arg);
    return Init_SbgGpsHdt_true_heading(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsHdt msg_;
};

class Init_SbgGpsHdt_status
{
public:
  explicit Init_SbgGpsHdt_status(::sbg_driver::msg::SbgGpsHdt & msg)
  : msg_(msg)
  {}
  Init_SbgGpsHdt_tow status(::sbg_driver::msg::SbgGpsHdt::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SbgGpsHdt_tow(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsHdt msg_;
};

class Init_SbgGpsHdt_time_stamp
{
public:
  explicit Init_SbgGpsHdt_time_stamp(::sbg_driver::msg::SbgGpsHdt & msg)
  : msg_(msg)
  {}
  Init_SbgGpsHdt_status time_stamp(::sbg_driver::msg::SbgGpsHdt::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SbgGpsHdt_status(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsHdt msg_;
};

class Init_SbgGpsHdt_header
{
public:
  Init_SbgGpsHdt_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgGpsHdt_time_stamp header(::sbg_driver::msg::SbgGpsHdt::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SbgGpsHdt_time_stamp(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsHdt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgGpsHdt>()
{
  return sbg_driver::msg::builder::Init_SbgGpsHdt_header();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_GPS_HDT__BUILDER_HPP_
