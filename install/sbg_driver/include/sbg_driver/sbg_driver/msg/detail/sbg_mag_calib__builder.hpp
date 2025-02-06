// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgMagCalib.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_MAG_CALIB__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_MAG_CALIB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_mag_calib__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgMagCalib_header
{
public:
  Init_SbgMagCalib_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sbg_driver::msg::SbgMagCalib header(::sbg_driver::msg::SbgMagCalib::_header_type arg)
  {
    msg_.header = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgMagCalib msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgMagCalib>()
{
  return sbg_driver::msg::builder::Init_SbgMagCalib_header();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_MAG_CALIB__BUILDER_HPP_
