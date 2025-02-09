// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgStatusAiding.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_STATUS_AIDING__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_STATUS_AIDING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_status_aiding__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgStatusAiding_dvl_recv
{
public:
  explicit Init_SbgStatusAiding_dvl_recv(::sbg_driver::msg::SbgStatusAiding & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgStatusAiding dvl_recv(::sbg_driver::msg::SbgStatusAiding::_dvl_recv_type arg)
  {
    msg_.dvl_recv = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusAiding msg_;
};

class Init_SbgStatusAiding_odo_recv
{
public:
  explicit Init_SbgStatusAiding_odo_recv(::sbg_driver::msg::SbgStatusAiding & msg)
  : msg_(msg)
  {}
  Init_SbgStatusAiding_dvl_recv odo_recv(::sbg_driver::msg::SbgStatusAiding::_odo_recv_type arg)
  {
    msg_.odo_recv = std::move(arg);
    return Init_SbgStatusAiding_dvl_recv(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusAiding msg_;
};

class Init_SbgStatusAiding_mag_recv
{
public:
  explicit Init_SbgStatusAiding_mag_recv(::sbg_driver::msg::SbgStatusAiding & msg)
  : msg_(msg)
  {}
  Init_SbgStatusAiding_odo_recv mag_recv(::sbg_driver::msg::SbgStatusAiding::_mag_recv_type arg)
  {
    msg_.mag_recv = std::move(arg);
    return Init_SbgStatusAiding_odo_recv(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusAiding msg_;
};

class Init_SbgStatusAiding_gps1_utc_recv
{
public:
  explicit Init_SbgStatusAiding_gps1_utc_recv(::sbg_driver::msg::SbgStatusAiding & msg)
  : msg_(msg)
  {}
  Init_SbgStatusAiding_mag_recv gps1_utc_recv(::sbg_driver::msg::SbgStatusAiding::_gps1_utc_recv_type arg)
  {
    msg_.gps1_utc_recv = std::move(arg);
    return Init_SbgStatusAiding_mag_recv(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusAiding msg_;
};

class Init_SbgStatusAiding_gps1_hdt_recv
{
public:
  explicit Init_SbgStatusAiding_gps1_hdt_recv(::sbg_driver::msg::SbgStatusAiding & msg)
  : msg_(msg)
  {}
  Init_SbgStatusAiding_gps1_utc_recv gps1_hdt_recv(::sbg_driver::msg::SbgStatusAiding::_gps1_hdt_recv_type arg)
  {
    msg_.gps1_hdt_recv = std::move(arg);
    return Init_SbgStatusAiding_gps1_utc_recv(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusAiding msg_;
};

class Init_SbgStatusAiding_gps1_vel_recv
{
public:
  explicit Init_SbgStatusAiding_gps1_vel_recv(::sbg_driver::msg::SbgStatusAiding & msg)
  : msg_(msg)
  {}
  Init_SbgStatusAiding_gps1_hdt_recv gps1_vel_recv(::sbg_driver::msg::SbgStatusAiding::_gps1_vel_recv_type arg)
  {
    msg_.gps1_vel_recv = std::move(arg);
    return Init_SbgStatusAiding_gps1_hdt_recv(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusAiding msg_;
};

class Init_SbgStatusAiding_gps1_pos_recv
{
public:
  Init_SbgStatusAiding_gps1_pos_recv()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgStatusAiding_gps1_vel_recv gps1_pos_recv(::sbg_driver::msg::SbgStatusAiding::_gps1_pos_recv_type arg)
  {
    msg_.gps1_pos_recv = std::move(arg);
    return Init_SbgStatusAiding_gps1_vel_recv(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusAiding msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgStatusAiding>()
{
  return sbg_driver::msg::builder::Init_SbgStatusAiding_gps1_pos_recv();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_STATUS_AIDING__BUILDER_HPP_
