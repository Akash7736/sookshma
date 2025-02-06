// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbg_driver:msg/SbgEkfRotAccel.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_EKF_ROT_ACCEL__STRUCT_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_EKF_ROT_ACCEL__STRUCT_HPP_

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
// Member 'rate'
// Member 'acceleration'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sbg_driver__msg__SbgEkfRotAccel __attribute__((deprecated))
#else
# define DEPRECATED__sbg_driver__msg__SbgEkfRotAccel __declspec(deprecated)
#endif

namespace sbg_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgEkfRotAccel_
{
  using Type = SbgEkfRotAccel_<ContainerAllocator>;

  explicit SbgEkfRotAccel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    rate(_init),
    acceleration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
    }
  }

  explicit SbgEkfRotAccel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    rate(_alloc, _init),
    acceleration(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _time_stamp_type =
    uint32_t;
  _time_stamp_type time_stamp;
  using _rate_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _rate_type rate;
  using _acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _acceleration_type acceleration;

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
  Type & set__rate(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->rate = _arg;
    return *this;
  }
  Type & set__acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbg_driver::msg::SbgEkfRotAccel_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbg_driver::msg::SbgEkfRotAccel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgEkfRotAccel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgEkfRotAccel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgEkfRotAccel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgEkfRotAccel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgEkfRotAccel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgEkfRotAccel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgEkfRotAccel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgEkfRotAccel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbg_driver__msg__SbgEkfRotAccel
    std::shared_ptr<sbg_driver::msg::SbgEkfRotAccel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbg_driver__msg__SbgEkfRotAccel
    std::shared_ptr<sbg_driver::msg::SbgEkfRotAccel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgEkfRotAccel_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->rate != other.rate) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgEkfRotAccel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgEkfRotAccel_

// alias to use template instance with default allocator
using SbgEkfRotAccel =
  sbg_driver::msg::SbgEkfRotAccel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_EKF_ROT_ACCEL__STRUCT_HPP_
