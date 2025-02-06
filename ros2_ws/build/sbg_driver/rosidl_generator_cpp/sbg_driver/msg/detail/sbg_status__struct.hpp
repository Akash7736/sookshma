// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbg_driver:msg/SbgStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_STATUS__STRUCT_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_STATUS__STRUCT_HPP_

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
// Member 'status_general'
#include "sbg_driver/msg/detail/sbg_status_general__struct.hpp"
// Member 'status_com'
#include "sbg_driver/msg/detail/sbg_status_com__struct.hpp"
// Member 'status_aiding'
#include "sbg_driver/msg/detail/sbg_status_aiding__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sbg_driver__msg__SbgStatus __attribute__((deprecated))
#else
# define DEPRECATED__sbg_driver__msg__SbgStatus __declspec(deprecated)
#endif

namespace sbg_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgStatus_
{
  using Type = SbgStatus_<ContainerAllocator>;

  explicit SbgStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status_general(_init),
    status_com(_init),
    status_aiding(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
    }
  }

  explicit SbgStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status_general(_alloc, _init),
    status_com(_alloc, _init),
    status_aiding(_alloc, _init)
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
  using _status_general_type =
    sbg_driver::msg::SbgStatusGeneral_<ContainerAllocator>;
  _status_general_type status_general;
  using _status_com_type =
    sbg_driver::msg::SbgStatusCom_<ContainerAllocator>;
  _status_com_type status_com;
  using _status_aiding_type =
    sbg_driver::msg::SbgStatusAiding_<ContainerAllocator>;
  _status_aiding_type status_aiding;

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
  Type & set__status_general(
    const sbg_driver::msg::SbgStatusGeneral_<ContainerAllocator> & _arg)
  {
    this->status_general = _arg;
    return *this;
  }
  Type & set__status_com(
    const sbg_driver::msg::SbgStatusCom_<ContainerAllocator> & _arg)
  {
    this->status_com = _arg;
    return *this;
  }
  Type & set__status_aiding(
    const sbg_driver::msg::SbgStatusAiding_<ContainerAllocator> & _arg)
  {
    this->status_aiding = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbg_driver::msg::SbgStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbg_driver::msg::SbgStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbg_driver__msg__SbgStatus
    std::shared_ptr<sbg_driver::msg::SbgStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbg_driver__msg__SbgStatus
    std::shared_ptr<sbg_driver::msg::SbgStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->status_general != other.status_general) {
      return false;
    }
    if (this->status_com != other.status_com) {
      return false;
    }
    if (this->status_aiding != other.status_aiding) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgStatus_

// alias to use template instance with default allocator
using SbgStatus =
  sbg_driver::msg::SbgStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_STATUS__STRUCT_HPP_
