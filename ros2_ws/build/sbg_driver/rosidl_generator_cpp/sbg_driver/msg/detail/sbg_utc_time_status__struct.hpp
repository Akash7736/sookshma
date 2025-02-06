// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbg_driver:msg/SbgUtcTimeStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_UTC_TIME_STATUS__STRUCT_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_UTC_TIME_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sbg_driver__msg__SbgUtcTimeStatus __attribute__((deprecated))
#else
# define DEPRECATED__sbg_driver__msg__SbgUtcTimeStatus __declspec(deprecated)
#endif

namespace sbg_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgUtcTimeStatus_
{
  using Type = SbgUtcTimeStatus_<ContainerAllocator>;

  explicit SbgUtcTimeStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->clock_stable = false;
      this->clock_status = 0;
      this->clock_utc_sync = false;
      this->clock_utc_status = 0;
    }
  }

  explicit SbgUtcTimeStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->clock_stable = false;
      this->clock_status = 0;
      this->clock_utc_sync = false;
      this->clock_utc_status = 0;
    }
  }

  // field types and members
  using _clock_stable_type =
    bool;
  _clock_stable_type clock_stable;
  using _clock_status_type =
    uint8_t;
  _clock_status_type clock_status;
  using _clock_utc_sync_type =
    bool;
  _clock_utc_sync_type clock_utc_sync;
  using _clock_utc_status_type =
    uint8_t;
  _clock_utc_status_type clock_utc_status;

  // setters for named parameter idiom
  Type & set__clock_stable(
    const bool & _arg)
  {
    this->clock_stable = _arg;
    return *this;
  }
  Type & set__clock_status(
    const uint8_t & _arg)
  {
    this->clock_status = _arg;
    return *this;
  }
  Type & set__clock_utc_sync(
    const bool & _arg)
  {
    this->clock_utc_sync = _arg;
    return *this;
  }
  Type & set__clock_utc_status(
    const uint8_t & _arg)
  {
    this->clock_utc_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbg_driver::msg::SbgUtcTimeStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbg_driver::msg::SbgUtcTimeStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgUtcTimeStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgUtcTimeStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgUtcTimeStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgUtcTimeStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgUtcTimeStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgUtcTimeStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgUtcTimeStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgUtcTimeStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbg_driver__msg__SbgUtcTimeStatus
    std::shared_ptr<sbg_driver::msg::SbgUtcTimeStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbg_driver__msg__SbgUtcTimeStatus
    std::shared_ptr<sbg_driver::msg::SbgUtcTimeStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgUtcTimeStatus_ & other) const
  {
    if (this->clock_stable != other.clock_stable) {
      return false;
    }
    if (this->clock_status != other.clock_status) {
      return false;
    }
    if (this->clock_utc_sync != other.clock_utc_sync) {
      return false;
    }
    if (this->clock_utc_status != other.clock_utc_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgUtcTimeStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgUtcTimeStatus_

// alias to use template instance with default allocator
using SbgUtcTimeStatus =
  sbg_driver::msg::SbgUtcTimeStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_UTC_TIME_STATUS__STRUCT_HPP_
