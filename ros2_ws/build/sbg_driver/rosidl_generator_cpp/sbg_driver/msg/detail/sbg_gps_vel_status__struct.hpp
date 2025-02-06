// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbg_driver:msg/SbgGpsVelStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_GPS_VEL_STATUS__STRUCT_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_GPS_VEL_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sbg_driver__msg__SbgGpsVelStatus __attribute__((deprecated))
#else
# define DEPRECATED__sbg_driver__msg__SbgGpsVelStatus __declspec(deprecated)
#endif

namespace sbg_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgGpsVelStatus_
{
  using Type = SbgGpsVelStatus_<ContainerAllocator>;

  explicit SbgGpsVelStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vel_status = 0;
      this->vel_type = 0;
    }
  }

  explicit SbgGpsVelStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vel_status = 0;
      this->vel_type = 0;
    }
  }

  // field types and members
  using _vel_status_type =
    uint8_t;
  _vel_status_type vel_status;
  using _vel_type_type =
    uint8_t;
  _vel_type_type vel_type;

  // setters for named parameter idiom
  Type & set__vel_status(
    const uint8_t & _arg)
  {
    this->vel_status = _arg;
    return *this;
  }
  Type & set__vel_type(
    const uint8_t & _arg)
  {
    this->vel_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbg_driver::msg::SbgGpsVelStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbg_driver::msg::SbgGpsVelStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgGpsVelStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgGpsVelStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgGpsVelStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgGpsVelStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgGpsVelStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgGpsVelStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgGpsVelStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgGpsVelStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbg_driver__msg__SbgGpsVelStatus
    std::shared_ptr<sbg_driver::msg::SbgGpsVelStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbg_driver__msg__SbgGpsVelStatus
    std::shared_ptr<sbg_driver::msg::SbgGpsVelStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgGpsVelStatus_ & other) const
  {
    if (this->vel_status != other.vel_status) {
      return false;
    }
    if (this->vel_type != other.vel_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgGpsVelStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgGpsVelStatus_

// alias to use template instance with default allocator
using SbgGpsVelStatus =
  sbg_driver::msg::SbgGpsVelStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_GPS_VEL_STATUS__STRUCT_HPP_
