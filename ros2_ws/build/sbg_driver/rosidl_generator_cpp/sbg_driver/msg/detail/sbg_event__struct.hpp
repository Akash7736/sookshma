// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbg_driver:msg/SbgEvent.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_EVENT__STRUCT_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sbg_driver__msg__SbgEvent __attribute__((deprecated))
#else
# define DEPRECATED__sbg_driver__msg__SbgEvent __declspec(deprecated)
#endif

namespace sbg_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgEvent_
{
  using Type = SbgEvent_<ContainerAllocator>;

  explicit SbgEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->overflow = false;
      this->offset_0_valid = false;
      this->offset_1_valid = false;
      this->offset_2_valid = false;
      this->offset_3_valid = false;
      this->time_offset_0 = 0;
      this->time_offset_1 = 0;
      this->time_offset_2 = 0;
      this->time_offset_3 = 0;
    }
  }

  explicit SbgEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->overflow = false;
      this->offset_0_valid = false;
      this->offset_1_valid = false;
      this->offset_2_valid = false;
      this->offset_3_valid = false;
      this->time_offset_0 = 0;
      this->time_offset_1 = 0;
      this->time_offset_2 = 0;
      this->time_offset_3 = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _time_stamp_type =
    uint32_t;
  _time_stamp_type time_stamp;
  using _overflow_type =
    bool;
  _overflow_type overflow;
  using _offset_0_valid_type =
    bool;
  _offset_0_valid_type offset_0_valid;
  using _offset_1_valid_type =
    bool;
  _offset_1_valid_type offset_1_valid;
  using _offset_2_valid_type =
    bool;
  _offset_2_valid_type offset_2_valid;
  using _offset_3_valid_type =
    bool;
  _offset_3_valid_type offset_3_valid;
  using _time_offset_0_type =
    uint16_t;
  _time_offset_0_type time_offset_0;
  using _time_offset_1_type =
    uint16_t;
  _time_offset_1_type time_offset_1;
  using _time_offset_2_type =
    uint16_t;
  _time_offset_2_type time_offset_2;
  using _time_offset_3_type =
    uint16_t;
  _time_offset_3_type time_offset_3;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__time_stamp(
    const uint32_t & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }
  Type & set__overflow(
    const bool & _arg)
  {
    this->overflow = _arg;
    return *this;
  }
  Type & set__offset_0_valid(
    const bool & _arg)
  {
    this->offset_0_valid = _arg;
    return *this;
  }
  Type & set__offset_1_valid(
    const bool & _arg)
  {
    this->offset_1_valid = _arg;
    return *this;
  }
  Type & set__offset_2_valid(
    const bool & _arg)
  {
    this->offset_2_valid = _arg;
    return *this;
  }
  Type & set__offset_3_valid(
    const bool & _arg)
  {
    this->offset_3_valid = _arg;
    return *this;
  }
  Type & set__time_offset_0(
    const uint16_t & _arg)
  {
    this->time_offset_0 = _arg;
    return *this;
  }
  Type & set__time_offset_1(
    const uint16_t & _arg)
  {
    this->time_offset_1 = _arg;
    return *this;
  }
  Type & set__time_offset_2(
    const uint16_t & _arg)
  {
    this->time_offset_2 = _arg;
    return *this;
  }
  Type & set__time_offset_3(
    const uint16_t & _arg)
  {
    this->time_offset_3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbg_driver::msg::SbgEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbg_driver::msg::SbgEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbg_driver__msg__SbgEvent
    std::shared_ptr<sbg_driver::msg::SbgEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbg_driver__msg__SbgEvent
    std::shared_ptr<sbg_driver::msg::SbgEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgEvent_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->overflow != other.overflow) {
      return false;
    }
    if (this->offset_0_valid != other.offset_0_valid) {
      return false;
    }
    if (this->offset_1_valid != other.offset_1_valid) {
      return false;
    }
    if (this->offset_2_valid != other.offset_2_valid) {
      return false;
    }
    if (this->offset_3_valid != other.offset_3_valid) {
      return false;
    }
    if (this->time_offset_0 != other.time_offset_0) {
      return false;
    }
    if (this->time_offset_1 != other.time_offset_1) {
      return false;
    }
    if (this->time_offset_2 != other.time_offset_2) {
      return false;
    }
    if (this->time_offset_3 != other.time_offset_3) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgEvent_

// alias to use template instance with default allocator
using SbgEvent =
  sbg_driver::msg::SbgEvent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_EVENT__STRUCT_HPP_
