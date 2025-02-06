// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgGpsPos.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_GPS_POS__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_GPS_POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_gps_pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgGpsPos_diff_age
{
public:
  explicit Init_SbgGpsPos_diff_age(::sbg_driver::msg::SbgGpsPos & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgGpsPos diff_age(::sbg_driver::msg::SbgGpsPos::_diff_age_type arg)
  {
    msg_.diff_age = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPos msg_;
};

class Init_SbgGpsPos_base_station_id
{
public:
  explicit Init_SbgGpsPos_base_station_id(::sbg_driver::msg::SbgGpsPos & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPos_diff_age base_station_id(::sbg_driver::msg::SbgGpsPos::_base_station_id_type arg)
  {
    msg_.base_station_id = std::move(arg);
    return Init_SbgGpsPos_diff_age(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPos msg_;
};

class Init_SbgGpsPos_num_sv_used
{
public:
  explicit Init_SbgGpsPos_num_sv_used(::sbg_driver::msg::SbgGpsPos & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPos_base_station_id num_sv_used(::sbg_driver::msg::SbgGpsPos::_num_sv_used_type arg)
  {
    msg_.num_sv_used = std::move(arg);
    return Init_SbgGpsPos_base_station_id(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPos msg_;
};

class Init_SbgGpsPos_position_accuracy
{
public:
  explicit Init_SbgGpsPos_position_accuracy(::sbg_driver::msg::SbgGpsPos & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPos_num_sv_used position_accuracy(::sbg_driver::msg::SbgGpsPos::_position_accuracy_type arg)
  {
    msg_.position_accuracy = std::move(arg);
    return Init_SbgGpsPos_num_sv_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPos msg_;
};

class Init_SbgGpsPos_undulation
{
public:
  explicit Init_SbgGpsPos_undulation(::sbg_driver::msg::SbgGpsPos & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPos_position_accuracy undulation(::sbg_driver::msg::SbgGpsPos::_undulation_type arg)
  {
    msg_.undulation = std::move(arg);
    return Init_SbgGpsPos_position_accuracy(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPos msg_;
};

class Init_SbgGpsPos_altitude
{
public:
  explicit Init_SbgGpsPos_altitude(::sbg_driver::msg::SbgGpsPos & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPos_undulation altitude(::sbg_driver::msg::SbgGpsPos::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_SbgGpsPos_undulation(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPos msg_;
};

class Init_SbgGpsPos_longitude
{
public:
  explicit Init_SbgGpsPos_longitude(::sbg_driver::msg::SbgGpsPos & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPos_altitude longitude(::sbg_driver::msg::SbgGpsPos::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_SbgGpsPos_altitude(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPos msg_;
};

class Init_SbgGpsPos_latitude
{
public:
  explicit Init_SbgGpsPos_latitude(::sbg_driver::msg::SbgGpsPos & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPos_longitude latitude(::sbg_driver::msg::SbgGpsPos::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_SbgGpsPos_longitude(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPos msg_;
};

class Init_SbgGpsPos_gps_tow
{
public:
  explicit Init_SbgGpsPos_gps_tow(::sbg_driver::msg::SbgGpsPos & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPos_latitude gps_tow(::sbg_driver::msg::SbgGpsPos::_gps_tow_type arg)
  {
    msg_.gps_tow = std::move(arg);
    return Init_SbgGpsPos_latitude(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPos msg_;
};

class Init_SbgGpsPos_status
{
public:
  explicit Init_SbgGpsPos_status(::sbg_driver::msg::SbgGpsPos & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPos_gps_tow status(::sbg_driver::msg::SbgGpsPos::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SbgGpsPos_gps_tow(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPos msg_;
};

class Init_SbgGpsPos_time_stamp
{
public:
  explicit Init_SbgGpsPos_time_stamp(::sbg_driver::msg::SbgGpsPos & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPos_status time_stamp(::sbg_driver::msg::SbgGpsPos::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SbgGpsPos_status(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPos msg_;
};

class Init_SbgGpsPos_header
{
public:
  Init_SbgGpsPos_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgGpsPos_time_stamp header(::sbg_driver::msg::SbgGpsPos::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SbgGpsPos_time_stamp(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgGpsPos>()
{
  return sbg_driver::msg::builder::Init_SbgGpsPos_header();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_GPS_POS__BUILDER_HPP_
