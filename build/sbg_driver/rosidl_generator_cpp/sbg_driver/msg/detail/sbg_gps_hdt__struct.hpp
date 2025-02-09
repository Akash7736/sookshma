// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbg_driver:msg/SbgGpsHdt.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_GPS_HDT__STRUCT_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_GPS_HDT__STRUCT_HPP_

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
# define DEPRECATED__sbg_driver__msg__SbgGpsHdt __attribute__((deprecated))
#else
# define DEPRECATED__sbg_driver__msg__SbgGpsHdt __declspec(deprecated)
#endif

namespace sbg_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgGpsHdt_
{
  using Type = SbgGpsHdt_<ContainerAllocator>;

  explicit SbgGpsHdt_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->status = 0;
      this->tow = 0ul;
      this->true_heading = 0.0f;
      this->true_heading_acc = 0.0f;
      this->pitch = 0.0f;
      this->pitch_acc = 0.0f;
      this->baseline = 0.0f;
    }
  }

  explicit SbgGpsHdt_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->status = 0;
      this->tow = 0ul;
      this->true_heading = 0.0f;
      this->true_heading_acc = 0.0f;
      this->pitch = 0.0f;
      this->pitch_acc = 0.0f;
      this->baseline = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _time_stamp_type =
    uint32_t;
  _time_stamp_type time_stamp;
  using _status_type =
    uint16_t;
  _status_type status;
  using _tow_type =
    uint32_t;
  _tow_type tow;
  using _true_heading_type =
    float;
  _true_heading_type true_heading;
  using _true_heading_acc_type =
    float;
  _true_heading_acc_type true_heading_acc;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _pitch_acc_type =
    float;
  _pitch_acc_type pitch_acc;
  using _baseline_type =
    float;
  _baseline_type baseline;

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
  Type & set__status(
    const uint16_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__tow(
    const uint32_t & _arg)
  {
    this->tow = _arg;
    return *this;
  }
  Type & set__true_heading(
    const float & _arg)
  {
    this->true_heading = _arg;
    return *this;
  }
  Type & set__true_heading_acc(
    const float & _arg)
  {
    this->true_heading_acc = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__pitch_acc(
    const float & _arg)
  {
    this->pitch_acc = _arg;
    return *this;
  }
  Type & set__baseline(
    const float & _arg)
  {
    this->baseline = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbg_driver::msg::SbgGpsHdt_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbg_driver::msg::SbgGpsHdt_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgGpsHdt_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgGpsHdt_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgGpsHdt_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgGpsHdt_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgGpsHdt_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgGpsHdt_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgGpsHdt_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgGpsHdt_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbg_driver__msg__SbgGpsHdt
    std::shared_ptr<sbg_driver::msg::SbgGpsHdt_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbg_driver__msg__SbgGpsHdt
    std::shared_ptr<sbg_driver::msg::SbgGpsHdt_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgGpsHdt_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->tow != other.tow) {
      return false;
    }
    if (this->true_heading != other.true_heading) {
      return false;
    }
    if (this->true_heading_acc != other.true_heading_acc) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->pitch_acc != other.pitch_acc) {
      return false;
    }
    if (this->baseline != other.baseline) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgGpsHdt_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgGpsHdt_

// alias to use template instance with default allocator
using SbgGpsHdt =
  sbg_driver::msg::SbgGpsHdt_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_GPS_HDT__STRUCT_HPP_
