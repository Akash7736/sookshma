// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbg_driver:msg/SbgShipMotionStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_SHIP_MOTION_STATUS__STRUCT_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_SHIP_MOTION_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sbg_driver__msg__SbgShipMotionStatus __attribute__((deprecated))
#else
# define DEPRECATED__sbg_driver__msg__SbgShipMotionStatus __declspec(deprecated)
#endif

namespace sbg_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgShipMotionStatus_
{
  using Type = SbgShipMotionStatus_<ContainerAllocator>;

  explicit SbgShipMotionStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heave_valid = false;
      this->heave_vel_aided = false;
      this->period_available = false;
      this->period_valid = false;
    }
  }

  explicit SbgShipMotionStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heave_valid = false;
      this->heave_vel_aided = false;
      this->period_available = false;
      this->period_valid = false;
    }
  }

  // field types and members
  using _heave_valid_type =
    bool;
  _heave_valid_type heave_valid;
  using _heave_vel_aided_type =
    bool;
  _heave_vel_aided_type heave_vel_aided;
  using _period_available_type =
    bool;
  _period_available_type period_available;
  using _period_valid_type =
    bool;
  _period_valid_type period_valid;

  // setters for named parameter idiom
  Type & set__heave_valid(
    const bool & _arg)
  {
    this->heave_valid = _arg;
    return *this;
  }
  Type & set__heave_vel_aided(
    const bool & _arg)
  {
    this->heave_vel_aided = _arg;
    return *this;
  }
  Type & set__period_available(
    const bool & _arg)
  {
    this->period_available = _arg;
    return *this;
  }
  Type & set__period_valid(
    const bool & _arg)
  {
    this->period_valid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbg_driver::msg::SbgShipMotionStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbg_driver::msg::SbgShipMotionStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgShipMotionStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgShipMotionStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgShipMotionStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgShipMotionStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgShipMotionStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgShipMotionStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgShipMotionStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgShipMotionStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbg_driver__msg__SbgShipMotionStatus
    std::shared_ptr<sbg_driver::msg::SbgShipMotionStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbg_driver__msg__SbgShipMotionStatus
    std::shared_ptr<sbg_driver::msg::SbgShipMotionStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgShipMotionStatus_ & other) const
  {
    if (this->heave_valid != other.heave_valid) {
      return false;
    }
    if (this->heave_vel_aided != other.heave_vel_aided) {
      return false;
    }
    if (this->period_available != other.period_available) {
      return false;
    }
    if (this->period_valid != other.period_valid) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgShipMotionStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgShipMotionStatus_

// alias to use template instance with default allocator
using SbgShipMotionStatus =
  sbg_driver::msg::SbgShipMotionStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_SHIP_MOTION_STATUS__STRUCT_HPP_
