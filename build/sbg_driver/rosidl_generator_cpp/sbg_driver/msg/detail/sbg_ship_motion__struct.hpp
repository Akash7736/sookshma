// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbg_driver:msg/SbgShipMotion.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_SHIP_MOTION__STRUCT_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_SHIP_MOTION__STRUCT_HPP_

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
// Member 'ship_motion'
// Member 'acceleration'
// Member 'velocity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'status'
#include "sbg_driver/msg/detail/sbg_ship_motion_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sbg_driver__msg__SbgShipMotion __attribute__((deprecated))
#else
# define DEPRECATED__sbg_driver__msg__SbgShipMotion __declspec(deprecated)
#endif

namespace sbg_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgShipMotion_
{
  using Type = SbgShipMotion_<ContainerAllocator>;

  explicit SbgShipMotion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    ship_motion(_init),
    acceleration(_init),
    velocity(_init),
    status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->heave_period = 0;
    }
  }

  explicit SbgShipMotion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ship_motion(_alloc, _init),
    acceleration(_alloc, _init),
    velocity(_alloc, _init),
    status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->heave_period = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _time_stamp_type =
    uint32_t;
  _time_stamp_type time_stamp;
  using _heave_period_type =
    uint16_t;
  _heave_period_type heave_period;
  using _ship_motion_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _ship_motion_type ship_motion;
  using _acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _acceleration_type acceleration;
  using _velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _velocity_type velocity;
  using _status_type =
    sbg_driver::msg::SbgShipMotionStatus_<ContainerAllocator>;
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
  Type & set__heave_period(
    const uint16_t & _arg)
  {
    this->heave_period = _arg;
    return *this;
  }
  Type & set__ship_motion(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->ship_motion = _arg;
    return *this;
  }
  Type & set__acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__status(
    const sbg_driver::msg::SbgShipMotionStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbg_driver::msg::SbgShipMotion_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbg_driver::msg::SbgShipMotion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgShipMotion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgShipMotion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgShipMotion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgShipMotion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgShipMotion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgShipMotion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgShipMotion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgShipMotion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbg_driver__msg__SbgShipMotion
    std::shared_ptr<sbg_driver::msg::SbgShipMotion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbg_driver__msg__SbgShipMotion
    std::shared_ptr<sbg_driver::msg::SbgShipMotion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgShipMotion_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->heave_period != other.heave_period) {
      return false;
    }
    if (this->ship_motion != other.ship_motion) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgShipMotion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgShipMotion_

// alias to use template instance with default allocator
using SbgShipMotion =
  sbg_driver::msg::SbgShipMotion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_SHIP_MOTION__STRUCT_HPP_
