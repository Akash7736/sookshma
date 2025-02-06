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

class Init_SbgStatusAiding_user_heading_recv
{
public:
  explicit Init_SbgStatusAiding_user_heading_recv(::sbg_driver::msg::SbgStatusAiding & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgStatusAiding user_heading_recv(::sbg_driver::msg::SbgStatusAiding::_user_heading_recv_type arg)
  {
    msg_.user_heading_recv = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusAiding msg_;
};

class Init_SbgStatusAiding_user_vel_recv
{
public:
  explicit Init_SbgStatusAiding_user_vel_recv(::sbg_driver::msg::SbgStatusAiding & msg)
  : msg_(msg)
  {}
  Init_SbgStatusAiding_user_heading_recv user_vel_recv(::sbg_driver::msg::SbgStatusAiding::_user_vel_recv_type arg)
  {
    msg_.user_vel_recv = std::move(arg);
    return Init_SbgStatusAiding_user_heading_recv(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusAiding msg_;
};

class Init_SbgStatusAiding_user_pos_recv
{
public:
  explicit Init_SbgStatusAiding_user_pos_recv(::sbg_driver::msg::SbgStatusAiding & msg)
  : msg_(msg)
  {}
  Init_SbgStatusAiding_user_vel_recv user_pos_recv(::sbg_driver::msg::SbgStatusAiding::_user_pos_recv_type arg)
  {
    msg_.user_pos_recv = std::move(arg);
    return Init_SbgStatusAiding_user_vel_recv(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusAiding msg_;
};

class Init_SbgStatusAiding_air_data_recv
{
public:
  explicit Init_SbgStatusAiding_air_data_recv(::sbg_driver::msg::SbgStatusAiding & msg)
  : msg_(msg)
  {}
  Init_SbgStatusAiding_user_pos_recv air_data_recv(::sbg_driver::msg::SbgStatusAiding::_air_data_recv_type arg)
  {
    msg_.air_data_recv = std::move(arg);
    return Init_SbgStatusAiding_user_pos_recv(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusAiding msg_;
};

class Init_SbgStatusAiding_depth_recv
{
public:
  explicit Init_SbgStatusAiding_depth_recv(::sbg_driver::msg::SbgStatusAiding & msg)
  : msg_(msg)
  {}
  Init_SbgStatusAiding_air_data_recv depth_recv(::sbg_driver::msg::SbgStatusAiding::_depth_recv_type arg)
  {
    msg_.depth_recv = std::move(arg);
    return Init_SbgStatusAiding_air_data_recv(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusAiding msg_;
};

class Init_SbgStatusAiding_usbl_recv
{
public:
  explicit Init_SbgStatusAiding_usbl_recv(::sbg_driver::msg::SbgStatusAiding & msg)
  : msg_(msg)
  {}
  Init_SbgStatusAiding_depth_recv usbl_recv(::sbg_driver::msg::SbgStatusAiding::_usbl_recv_type arg)
  {
    msg_.usbl_recv = std::move(arg);
    return Init_SbgStatusAiding_depth_recv(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusAiding msg_;
};

class Init_SbgStatusAiding_dvl_recv
{
public:
  explicit Init_SbgStatusAiding_dvl_recv(::sbg_driver::msg::SbgStatusAiding & msg)
  : msg_(msg)
  {}
  Init_SbgStatusAiding_usbl_recv dvl_recv(::sbg_driver::msg::SbgStatusAiding::_dvl_recv_type arg)
  {
    msg_.dvl_recv = std::move(arg);
    return Init_SbgStatusAiding_usbl_recv(msg_);
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

class Init_SbgStatusAiding_gps2_utc_recv
{
public:
  explicit Init_SbgStatusAiding_gps2_utc_recv(::sbg_driver::msg::SbgStatusAiding & msg)
  : msg_(msg)
  {}
  Init_SbgStatusAiding_mag_recv gps2_utc_recv(::sbg_driver::msg::SbgStatusAiding::_gps2_utc_recv_type arg)
  {
    msg_.gps2_utc_recv = std::move(arg);
    return Init_SbgStatusAiding_mag_recv(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusAiding msg_;
};

class Init_SbgStatusAiding_gps2_hdt_recv
{
public:
  explicit Init_SbgStatusAiding_gps2_hdt_recv(::sbg_driver::msg::SbgStatusAiding & msg)
  : msg_(msg)
  {}
  Init_SbgStatusAiding_gps2_utc_recv gps2_hdt_recv(::sbg_driver::msg::SbgStatusAiding::_gps2_hdt_recv_type arg)
  {
    msg_.gps2_hdt_recv = std::move(arg);
    return Init_SbgStatusAiding_gps2_utc_recv(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusAiding msg_;
};

class Init_SbgStatusAiding_gps2_vel_recv
{
public:
  explicit Init_SbgStatusAiding_gps2_vel_recv(::sbg_driver::msg::SbgStatusAiding & msg)
  : msg_(msg)
  {}
  Init_SbgStatusAiding_gps2_hdt_recv gps2_vel_recv(::sbg_driver::msg::SbgStatusAiding::_gps2_vel_recv_type arg)
  {
    msg_.gps2_vel_recv = std::move(arg);
    return Init_SbgStatusAiding_gps2_hdt_recv(msg_);
  }

private:
  ::sbg_driver::msg::SbgStatusAiding msg_;
};

class Init_SbgStatusAiding_gps2_pos_recv
{
public:
  explicit Init_SbgStatusAiding_gps2_pos_recv(::sbg_driver::msg::SbgStatusAiding & msg)
  : msg_(msg)
  {}
  Init_SbgStatusAiding_gps2_vel_recv gps2_pos_recv(::sbg_driver::msg::SbgStatusAiding::_gps2_pos_recv_type arg)
  {
    msg_.gps2_pos_recv = std::move(arg);
    return Init_SbgStatusAiding_gps2_vel_recv(msg_);
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
  Init_SbgStatusAiding_gps2_pos_recv gps1_utc_recv(::sbg_driver::msg::SbgStatusAiding::_gps1_utc_recv_type arg)
  {
    msg_.gps1_utc_recv = std::move(arg);
    return Init_SbgStatusAiding_gps2_pos_recv(msg_);
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
