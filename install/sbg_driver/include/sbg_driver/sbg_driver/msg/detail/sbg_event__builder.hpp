// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbg_driver:msg/SbgEvent.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_EVENT__BUILDER_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sbg_driver/msg/detail/sbg_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sbg_driver
{

namespace msg
{

namespace builder
{

class Init_SbgEvent_time_offset_3
{
public:
  explicit Init_SbgEvent_time_offset_3(::sbg_driver::msg::SbgEvent & msg)
  : msg_(msg)
  {}
  ::sbg_driver::msg::SbgEvent time_offset_3(::sbg_driver::msg::SbgEvent::_time_offset_3_type arg)
  {
    msg_.time_offset_3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbg_driver::msg::SbgEvent msg_;
};

class Init_SbgEvent_time_offset_2
{
public:
  explicit Init_SbgEvent_time_offset_2(::sbg_driver::msg::SbgEvent & msg)
  : msg_(msg)
  {}
  Init_SbgEvent_time_offset_3 time_offset_2(::sbg_driver::msg::SbgEvent::_time_offset_2_type arg)
  {
    msg_.time_offset_2 = std::move(arg);
    return Init_SbgEvent_time_offset_3(msg_);
  }

private:
  ::sbg_driver::msg::SbgEvent msg_;
};

class Init_SbgEvent_time_offset_1
{
public:
  explicit Init_SbgEvent_time_offset_1(::sbg_driver::msg::SbgEvent & msg)
  : msg_(msg)
  {}
  Init_SbgEvent_time_offset_2 time_offset_1(::sbg_driver::msg::SbgEvent::_time_offset_1_type arg)
  {
    msg_.time_offset_1 = std::move(arg);
    return Init_SbgEvent_time_offset_2(msg_);
  }

private:
  ::sbg_driver::msg::SbgEvent msg_;
};

class Init_SbgEvent_time_offset_0
{
public:
  explicit Init_SbgEvent_time_offset_0(::sbg_driver::msg::SbgEvent & msg)
  : msg_(msg)
  {}
  Init_SbgEvent_time_offset_1 time_offset_0(::sbg_driver::msg::SbgEvent::_time_offset_0_type arg)
  {
    msg_.time_offset_0 = std::move(arg);
    return Init_SbgEvent_time_offset_1(msg_);
  }

private:
  ::sbg_driver::msg::SbgEvent msg_;
};

class Init_SbgEvent_offset_3_valid
{
public:
  explicit Init_SbgEvent_offset_3_valid(::sbg_driver::msg::SbgEvent & msg)
  : msg_(msg)
  {}
  Init_SbgEvent_time_offset_0 offset_3_valid(::sbg_driver::msg::SbgEvent::_offset_3_valid_type arg)
  {
    msg_.offset_3_valid = std::move(arg);
    return Init_SbgEvent_time_offset_0(msg_);
  }

private:
  ::sbg_driver::msg::SbgEvent msg_;
};

class Init_SbgEvent_offset_2_valid
{
public:
  explicit Init_SbgEvent_offset_2_valid(::sbg_driver::msg::SbgEvent & msg)
  : msg_(msg)
  {}
  Init_SbgEvent_offset_3_valid offset_2_valid(::sbg_driver::msg::SbgEvent::_offset_2_valid_type arg)
  {
    msg_.offset_2_valid = std::move(arg);
    return Init_SbgEvent_offset_3_valid(msg_);
  }

private:
  ::sbg_driver::msg::SbgEvent msg_;
};

class Init_SbgEvent_offset_1_valid
{
public:
  explicit Init_SbgEvent_offset_1_valid(::sbg_driver::msg::SbgEvent & msg)
  : msg_(msg)
  {}
  Init_SbgEvent_offset_2_valid offset_1_valid(::sbg_driver::msg::SbgEvent::_offset_1_valid_type arg)
  {
    msg_.offset_1_valid = std::move(arg);
    return Init_SbgEvent_offset_2_valid(msg_);
  }

private:
  ::sbg_driver::msg::SbgEvent msg_;
};

class Init_SbgEvent_offset_0_valid
{
public:
  explicit Init_SbgEvent_offset_0_valid(::sbg_driver::msg::SbgEvent & msg)
  : msg_(msg)
  {}
  Init_SbgEvent_offset_1_valid offset_0_valid(::sbg_driver::msg::SbgEvent::_offset_0_valid_type arg)
  {
    msg_.offset_0_valid = std::move(arg);
    return Init_SbgEvent_offset_1_valid(msg_);
  }

private:
  ::sbg_driver::msg::SbgEvent msg_;
};

class Init_SbgEvent_overflow
{
public:
  explicit Init_SbgEvent_overflow(::sbg_driver::msg::SbgEvent & msg)
  : msg_(msg)
  {}
  Init_SbgEvent_offset_0_valid overflow(::sbg_driver::msg::SbgEvent::_overflow_type arg)
  {
    msg_.overflow = std::move(arg);
    return Init_SbgEvent_offset_0_valid(msg_);
  }

private:
  ::sbg_driver::msg::SbgEvent msg_;
};

class Init_SbgEvent_time_stamp
{
public:
  explicit Init_SbgEvent_time_stamp(::sbg_driver::msg::SbgEvent & msg)
  : msg_(msg)
  {}
  Init_SbgEvent_overflow time_stamp(::sbg_driver::msg::SbgEvent::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SbgEvent_overflow(msg_);
  }

private:
  ::sbg_driver::msg::SbgEvent msg_;
};

class Init_SbgEvent_header
{
public:
  Init_SbgEvent_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgEvent_time_stamp header(::sbg_driver::msg::SbgEvent::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SbgEvent_time_stamp(msg_);
  }

private:
  ::sbg_driver::msg::SbgEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbg_driver::msg::SbgEvent>()
{
  return sbg_driver::msg::builder::Init_SbgEvent_header();
}

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_EVENT__BUILDER_HPP_
