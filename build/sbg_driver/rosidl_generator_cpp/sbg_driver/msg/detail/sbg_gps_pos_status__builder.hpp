// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgGpsPosStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_GPS_POS_STATUS__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_GPS_POS_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_gps_pos_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgGpsPosStatus_glo_l2_used
{
public:
  explicit Init_SbgGpsPosStatus_glo_l2_used(::sbg_driver::msg::SbgGpsPosStatus & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgGpsPosStatus glo_l2_used(::sbg_driver::msg::SbgGpsPosStatus::_glo_l2_used_type arg)
  {
    msg_.glo_l2_used = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPosStatus msg_;
};

class Init_SbgGpsPosStatus_glo_l1_used
{
public:
  explicit Init_SbgGpsPosStatus_glo_l1_used(::sbg_driver::msg::SbgGpsPosStatus & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPosStatus_glo_l2_used glo_l1_used(::sbg_driver::msg::SbgGpsPosStatus::_glo_l1_used_type arg)
  {
    msg_.glo_l1_used = std::move(arg);
    return Init_SbgGpsPosStatus_glo_l2_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPosStatus msg_;
};

class Init_SbgGpsPosStatus_gps_l5_used
{
public:
  explicit Init_SbgGpsPosStatus_gps_l5_used(::sbg_driver::msg::SbgGpsPosStatus & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPosStatus_glo_l1_used gps_l5_used(::sbg_driver::msg::SbgGpsPosStatus::_gps_l5_used_type arg)
  {
    msg_.gps_l5_used = std::move(arg);
    return Init_SbgGpsPosStatus_glo_l1_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPosStatus msg_;
};

class Init_SbgGpsPosStatus_gps_l2_used
{
public:
  explicit Init_SbgGpsPosStatus_gps_l2_used(::sbg_driver::msg::SbgGpsPosStatus & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPosStatus_gps_l5_used gps_l2_used(::sbg_driver::msg::SbgGpsPosStatus::_gps_l2_used_type arg)
  {
    msg_.gps_l2_used = std::move(arg);
    return Init_SbgGpsPosStatus_gps_l5_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPosStatus msg_;
};

class Init_SbgGpsPosStatus_gps_l1_used
{
public:
  explicit Init_SbgGpsPosStatus_gps_l1_used(::sbg_driver::msg::SbgGpsPosStatus & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPosStatus_gps_l2_used gps_l1_used(::sbg_driver::msg::SbgGpsPosStatus::_gps_l1_used_type arg)
  {
    msg_.gps_l1_used = std::move(arg);
    return Init_SbgGpsPosStatus_gps_l2_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPosStatus msg_;
};

class Init_SbgGpsPosStatus_type
{
public:
  explicit Init_SbgGpsPosStatus_type(::sbg_driver::msg::SbgGpsPosStatus & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPosStatus_gps_l1_used type(::sbg_driver::msg::SbgGpsPosStatus::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SbgGpsPosStatus_gps_l1_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPosStatus msg_;
};

class Init_SbgGpsPosStatus_status
{
public:
  Init_SbgGpsPosStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgGpsPosStatus_type status(::sbg_driver::msg::SbgGpsPosStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SbgGpsPosStatus_type(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPosStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgGpsPosStatus>()
{
  return sbg_driver::msg::builder::Init_SbgGpsPosStatus_status();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_GPS_POS_STATUS__BUILDER_HPP_
