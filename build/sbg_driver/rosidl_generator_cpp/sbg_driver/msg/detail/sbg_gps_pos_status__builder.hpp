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

class Init_SbgGpsPosStatus_qzss_l5_used
{
public:
  explicit Init_SbgGpsPosStatus_qzss_l5_used(::sbg_driver::msg::SbgGpsPosStatus & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgGpsPosStatus qzss_l5_used(::sbg_driver::msg::SbgGpsPosStatus::_qzss_l5_used_type arg)
  {
    msg_.qzss_l5_used = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPosStatus msg_;
};

class Init_SbgGpsPosStatus_qzss_l2_used
{
public:
  explicit Init_SbgGpsPosStatus_qzss_l2_used(::sbg_driver::msg::SbgGpsPosStatus & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPosStatus_qzss_l5_used qzss_l2_used(::sbg_driver::msg::SbgGpsPosStatus::_qzss_l2_used_type arg)
  {
    msg_.qzss_l2_used = std::move(arg);
    return Init_SbgGpsPosStatus_qzss_l5_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPosStatus msg_;
};

class Init_SbgGpsPosStatus_qzss_l1_used
{
public:
  explicit Init_SbgGpsPosStatus_qzss_l1_used(::sbg_driver::msg::SbgGpsPosStatus & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPosStatus_qzss_l2_used qzss_l1_used(::sbg_driver::msg::SbgGpsPosStatus::_qzss_l1_used_type arg)
  {
    msg_.qzss_l1_used = std::move(arg);
    return Init_SbgGpsPosStatus_qzss_l2_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPosStatus msg_;
};

class Init_SbgGpsPosStatus_bds_b3_used
{
public:
  explicit Init_SbgGpsPosStatus_bds_b3_used(::sbg_driver::msg::SbgGpsPosStatus & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPosStatus_qzss_l1_used bds_b3_used(::sbg_driver::msg::SbgGpsPosStatus::_bds_b3_used_type arg)
  {
    msg_.bds_b3_used = std::move(arg);
    return Init_SbgGpsPosStatus_qzss_l1_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPosStatus msg_;
};

class Init_SbgGpsPosStatus_bds_b2_used
{
public:
  explicit Init_SbgGpsPosStatus_bds_b2_used(::sbg_driver::msg::SbgGpsPosStatus & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPosStatus_bds_b3_used bds_b2_used(::sbg_driver::msg::SbgGpsPosStatus::_bds_b2_used_type arg)
  {
    msg_.bds_b2_used = std::move(arg);
    return Init_SbgGpsPosStatus_bds_b3_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPosStatus msg_;
};

class Init_SbgGpsPosStatus_bds_b1_used
{
public:
  explicit Init_SbgGpsPosStatus_bds_b1_used(::sbg_driver::msg::SbgGpsPosStatus & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPosStatus_bds_b2_used bds_b1_used(::sbg_driver::msg::SbgGpsPosStatus::_bds_b1_used_type arg)
  {
    msg_.bds_b1_used = std::move(arg);
    return Init_SbgGpsPosStatus_bds_b2_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPosStatus msg_;
};

class Init_SbgGpsPosStatus_gal_e6_used
{
public:
  explicit Init_SbgGpsPosStatus_gal_e6_used(::sbg_driver::msg::SbgGpsPosStatus & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPosStatus_bds_b1_used gal_e6_used(::sbg_driver::msg::SbgGpsPosStatus::_gal_e6_used_type arg)
  {
    msg_.gal_e6_used = std::move(arg);
    return Init_SbgGpsPosStatus_bds_b1_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPosStatus msg_;
};

class Init_SbgGpsPosStatus_gal_e5alt_used
{
public:
  explicit Init_SbgGpsPosStatus_gal_e5alt_used(::sbg_driver::msg::SbgGpsPosStatus & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPosStatus_gal_e6_used gal_e5alt_used(::sbg_driver::msg::SbgGpsPosStatus::_gal_e5alt_used_type arg)
  {
    msg_.gal_e5alt_used = std::move(arg);
    return Init_SbgGpsPosStatus_gal_e6_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPosStatus msg_;
};

class Init_SbgGpsPosStatus_gal_e5b_used
{
public:
  explicit Init_SbgGpsPosStatus_gal_e5b_used(::sbg_driver::msg::SbgGpsPosStatus & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPosStatus_gal_e5alt_used gal_e5b_used(::sbg_driver::msg::SbgGpsPosStatus::_gal_e5b_used_type arg)
  {
    msg_.gal_e5b_used = std::move(arg);
    return Init_SbgGpsPosStatus_gal_e5alt_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPosStatus msg_;
};

class Init_SbgGpsPosStatus_gal_e5a_used
{
public:
  explicit Init_SbgGpsPosStatus_gal_e5a_used(::sbg_driver::msg::SbgGpsPosStatus & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPosStatus_gal_e5b_used gal_e5a_used(::sbg_driver::msg::SbgGpsPosStatus::_gal_e5a_used_type arg)
  {
    msg_.gal_e5a_used = std::move(arg);
    return Init_SbgGpsPosStatus_gal_e5b_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPosStatus msg_;
};

class Init_SbgGpsPosStatus_gal_e1_used
{
public:
  explicit Init_SbgGpsPosStatus_gal_e1_used(::sbg_driver::msg::SbgGpsPosStatus & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPosStatus_gal_e5a_used gal_e1_used(::sbg_driver::msg::SbgGpsPosStatus::_gal_e1_used_type arg)
  {
    msg_.gal_e1_used = std::move(arg);
    return Init_SbgGpsPosStatus_gal_e5a_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPosStatus msg_;
};

class Init_SbgGpsPosStatus_glo_l3_used
{
public:
  explicit Init_SbgGpsPosStatus_glo_l3_used(::sbg_driver::msg::SbgGpsPosStatus & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPosStatus_gal_e1_used glo_l3_used(::sbg_driver::msg::SbgGpsPosStatus::_glo_l3_used_type arg)
  {
    msg_.glo_l3_used = std::move(arg);
    return Init_SbgGpsPosStatus_gal_e1_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPosStatus msg_;
};

class Init_SbgGpsPosStatus_glo_l2_used
{
public:
  explicit Init_SbgGpsPosStatus_glo_l2_used(::sbg_driver::msg::SbgGpsPosStatus & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPosStatus_glo_l3_used glo_l2_used(::sbg_driver::msg::SbgGpsPosStatus::_glo_l2_used_type arg)
  {
    msg_.glo_l2_used = std::move(arg);
    return Init_SbgGpsPosStatus_glo_l3_used(msg_);
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

class Init_SbgGpsPosStatus_osnma
{
public:
  explicit Init_SbgGpsPosStatus_osnma(::sbg_driver::msg::SbgGpsPosStatus & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPosStatus_gps_l1_used osnma(::sbg_driver::msg::SbgGpsPosStatus::_osnma_type arg)
  {
    msg_.osnma = std::move(arg);
    return Init_SbgGpsPosStatus_gps_l1_used(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPosStatus msg_;
};

class Init_SbgGpsPosStatus_spoofing
{
public:
  explicit Init_SbgGpsPosStatus_spoofing(::sbg_driver::msg::SbgGpsPosStatus & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPosStatus_osnma spoofing(::sbg_driver::msg::SbgGpsPosStatus::_spoofing_type arg)
  {
    msg_.spoofing = std::move(arg);
    return Init_SbgGpsPosStatus_osnma(msg_);
  }

private:
  ::sbg_driver::msg::SbgGpsPosStatus msg_;
};

class Init_SbgGpsPosStatus_ifm
{
public:
  explicit Init_SbgGpsPosStatus_ifm(::sbg_driver::msg::SbgGpsPosStatus & msg)
  : msg_(msg)
  {}
  Init_SbgGpsPosStatus_spoofing ifm(::sbg_driver::msg::SbgGpsPosStatus::_ifm_type arg)
  {
    msg_.ifm = std::move(arg);
    return Init_SbgGpsPosStatus_spoofing(msg_);
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
  Init_SbgGpsPosStatus_ifm type(::sbg_driver::msg::SbgGpsPosStatus::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SbgGpsPosStatus_ifm(msg_);
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
