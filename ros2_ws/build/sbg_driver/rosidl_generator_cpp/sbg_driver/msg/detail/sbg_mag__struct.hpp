// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbg_driver:msg/SbgMag.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_MAG__STRUCT_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_MAG__STRUCT_HPP_

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
// Member 'mag'
// Member 'accel'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'status'
#include "sbg_driver/msg/detail/sbg_mag_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sbg_driver__msg__SbgMag __attribute__((deprecated))
#else
# define DEPRECATED__sbg_driver__msg__SbgMag __declspec(deprecated)
#endif

namespace sbg_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgMag_
{
  using Type = SbgMag_<ContainerAllocator>;

  explicit SbgMag_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    mag(_init),
    accel(_init),
    status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
    }
  }

  explicit SbgMag_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    mag(_alloc, _init),
    accel(_alloc, _init),
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
  using _mag_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _mag_type mag;
  using _accel_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _accel_type accel;
  using _status_type =
    sbg_driver::msg::SbgMagStatus_<ContainerAllocator>;
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
  Type & set__mag(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->mag = _arg;
    return *this;
  }
  Type & set__accel(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->accel = _arg;
    return *this;
  }
  Type & set__status(
    const sbg_driver::msg::SbgMagStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbg_driver::msg::SbgMag_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbg_driver::msg::SbgMag_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgMag_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgMag_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgMag_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgMag_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgMag_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgMag_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgMag_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgMag_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbg_driver__msg__SbgMag
    std::shared_ptr<sbg_driver::msg::SbgMag_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbg_driver__msg__SbgMag
    std::shared_ptr<sbg_driver::msg::SbgMag_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgMag_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->mag != other.mag) {
      return false;
    }
    if (this->accel != other.accel) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgMag_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgMag_

// alias to use template instance with default allocator
using SbgMag =
  sbg_driver::msg::SbgMag_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_MAG__STRUCT_HPP_
