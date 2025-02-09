// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgUtcTime.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_UTC_TIME__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_UTC_TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_utc_time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgUtcTime_gps_tow
{
public:
  explicit Init_SbgUtcTime_gps_tow(::sbg_driver::msg::SbgUtcTime & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgUtcTime gps_tow(::sbg_driver::msg::SbgUtcTime::_gps_tow_type arg)
  {
    msg_.gps_tow = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgUtcTime msg_;
};

class Init_SbgUtcTime_nanosec
{
public:
  explicit Init_SbgUtcTime_nanosec(::sbg_driver::msg::SbgUtcTime & msg)
  : msg_(msg)
  {}
  Init_SbgUtcTime_gps_tow nanosec(::sbg_driver::msg::SbgUtcTime::_nanosec_type arg)
  {
    msg_.nanosec = std::move(arg);
    return Init_SbgUtcTime_gps_tow(msg_);
  }

private:
  ::sbg_driver::msg::SbgUtcTime msg_;
};

class Init_SbgUtcTime_sec
{
public:
  explicit Init_SbgUtcTime_sec(::sbg_driver::msg::SbgUtcTime & msg)
  : msg_(msg)
  {}
  Init_SbgUtcTime_nanosec sec(::sbg_driver::msg::SbgUtcTime::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_SbgUtcTime_nanosec(msg_);
  }

private:
  ::sbg_driver::msg::SbgUtcTime msg_;
};

class Init_SbgUtcTime_min
{
public:
  explicit Init_SbgUtcTime_min(::sbg_driver::msg::SbgUtcTime & msg)
  : msg_(msg)
  {}
  Init_SbgUtcTime_sec min(::sbg_driver::msg::SbgUtcTime::_min_type arg)
  {
    msg_.min = std::move(arg);
    return Init_SbgUtcTime_sec(msg_);
  }

private:
  ::sbg_driver::msg::SbgUtcTime msg_;
};

class Init_SbgUtcTime_hour
{
public:
  explicit Init_SbgUtcTime_hour(::sbg_driver::msg::SbgUtcTime & msg)
  : msg_(msg)
  {}
  Init_SbgUtcTime_min hour(::sbg_driver::msg::SbgUtcTime::_hour_type arg)
  {
    msg_.hour = std::move(arg);
    return Init_SbgUtcTime_min(msg_);
  }

private:
  ::sbg_driver::msg::SbgUtcTime msg_;
};

class Init_SbgUtcTime_day
{
public:
  explicit Init_SbgUtcTime_day(::sbg_driver::msg::SbgUtcTime & msg)
  : msg_(msg)
  {}
  Init_SbgUtcTime_hour day(::sbg_driver::msg::SbgUtcTime::_day_type arg)
  {
    msg_.day = std::move(arg);
    return Init_SbgUtcTime_hour(msg_);
  }

private:
  ::sbg_driver::msg::SbgUtcTime msg_;
};

class Init_SbgUtcTime_month
{
public:
  explicit Init_SbgUtcTime_month(::sbg_driver::msg::SbgUtcTime & msg)
  : msg_(msg)
  {}
  Init_SbgUtcTime_day month(::sbg_driver::msg::SbgUtcTime::_month_type arg)
  {
    msg_.month = std::move(arg);
    return Init_SbgUtcTime_day(msg_);
  }

private:
  ::sbg_driver::msg::SbgUtcTime msg_;
};

class Init_SbgUtcTime_year
{
public:
  explicit Init_SbgUtcTime_year(::sbg_driver::msg::SbgUtcTime & msg)
  : msg_(msg)
  {}
  Init_SbgUtcTime_month year(::sbg_driver::msg::SbgUtcTime::_year_type arg)
  {
    msg_.year = std::move(arg);
    return Init_SbgUtcTime_month(msg_);
  }

private:
  ::sbg_driver::msg::SbgUtcTime msg_;
};

class Init_SbgUtcTime_clock_status
{
public:
  explicit Init_SbgUtcTime_clock_status(::sbg_driver::msg::SbgUtcTime & msg)
  : msg_(msg)
  {}
  Init_SbgUtcTime_year clock_status(::sbg_driver::msg::SbgUtcTime::_clock_status_type arg)
  {
    msg_.clock_status = std::move(arg);
    return Init_SbgUtcTime_year(msg_);
  }

private:
  ::sbg_driver::msg::SbgUtcTime msg_;
};

class Init_SbgUtcTime_time_stamp
{
public:
  explicit Init_SbgUtcTime_time_stamp(::sbg_driver::msg::SbgUtcTime & msg)
  : msg_(msg)
  {}
  Init_SbgUtcTime_clock_status time_stamp(::sbg_driver::msg::SbgUtcTime::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SbgUtcTime_clock_status(msg_);
  }

private:
  ::sbg_driver::msg::SbgUtcTime msg_;
};

class Init_SbgUtcTime_header
{
public:
  Init_SbgUtcTime_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgUtcTime_time_stamp header(::sbg_driver::msg::SbgUtcTime::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SbgUtcTime_time_stamp(msg_);
  }

private:
  ::sbg_driver::msg::SbgUtcTime msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgUtcTime>()
{
  return sbg_driver::msg::builder::Init_SbgUtcTime_header();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_UTC_TIME__BUILDER_HPP_
