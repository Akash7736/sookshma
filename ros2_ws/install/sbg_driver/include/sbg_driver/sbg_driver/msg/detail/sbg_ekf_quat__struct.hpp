// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbg_driver:msg/SbgEkfQuat.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_EKF_QUAT__STRUCT_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_EKF_QUAT__STRUCT_HPP_

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
// Member 'quaternion'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"
// Member 'accuracy'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'status'
#include "sbg_driver/msg/detail/sbg_ekf_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sbg_driver__msg__SbgEkfQuat __attribute__((deprecated))
#else
# define DEPRECATED__sbg_driver__msg__SbgEkfQuat __declspec(deprecated)
#endif

namespace sbg_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgEkfQuat_
{
  using Type = SbgEkfQuat_<ContainerAllocator>;

  explicit SbgEkfQuat_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    quaternion(_init),
    accuracy(_init),
    status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
    }
  }

  explicit SbgEkfQuat_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    quaternion(_alloc, _init),
    accuracy(_alloc, _init),
    status(_alloc, _init)
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
  using _quaternion_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _quaternion_type quaternion;
  using _accuracy_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _accuracy_type accuracy;
  using _status_type =
    sbg_driver::msg::SbgEkfStatus_<ContainerAllocator>;
  _status_type status;

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
  Type & set__quaternion(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->quaternion = _arg;
    return *this;
  }
  Type & set__accuracy(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->accuracy = _arg;
    return *this;
  }
  Type & set__status(
    const sbg_driver::msg::SbgEkfStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbg_driver::msg::SbgEkfQuat_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbg_driver::msg::SbgEkfQuat_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgEkfQuat_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgEkfQuat_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgEkfQuat_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgEkfQuat_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgEkfQuat_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgEkfQuat_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgEkfQuat_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgEkfQuat_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbg_driver__msg__SbgEkfQuat
    std::shared_ptr<sbg_driver::msg::SbgEkfQuat_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbg_driver__msg__SbgEkfQuat
    std::shared_ptr<sbg_driver::msg::SbgEkfQuat_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgEkfQuat_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->quaternion != other.quaternion) {
      return false;
    }
    if (this->accuracy != other.accuracy) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgEkfQuat_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgEkfQuat_

// alias to use template instance with default allocator
using SbgEkfQuat =
  sbg_driver::msg::SbgEkfQuat_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_EKF_QUAT__STRUCT_HPP_
