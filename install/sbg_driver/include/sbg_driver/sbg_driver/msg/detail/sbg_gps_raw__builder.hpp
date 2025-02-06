// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgGpsRaw.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_GPS_RAW__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_GPS_RAW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_gps_raw__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgGpsRaw_data
{
public:
  explicit Init_SbgGpsRaw_data(::sbg_driver::msg::SbgGpsRaw & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgGpsRaw data(::sbg_driver::msg::SbgGpsRaw::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsRaw msg_;
};

class Init_SbgGpsRaw_header
{
public:
  Init_SbgGpsRaw_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgGpsRaw_data header(::sbg_driver::msg::SbgGpsRaw::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SbgGpsRaw_data(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsRaw msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgGpsRaw>()
{
  return sbg_driver::msg::builder::Init_SbgGpsRaw_header();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_GPS_RAW__BUILDER_HPP_
