// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbg_driver:msg/SbgGpsVel.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_GPS_VEL__STRUCT_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_GPS_VEL__STRUCT_HPP_

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
// Member 'status'
#include "sbg_driver/msg/detail/sbg_gps_vel_status__struct.hpp"
// Member 'velocity'
// Member 'velocity_accuracy'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sbg_driver__msg__SbgGpsVel __attribute__((deprecated))
#else
# define DEPRECATED__sbg_driver__msg__SbgGpsVel __declspec(deprecated)
#endif

namespace sbg_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgGpsVel_
{
  using Type = SbgGpsVel_<ContainerAllocator>;

  explicit SbgGpsVel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status(_init),
    velocity(_init),
    velocity_accuracy(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->gps_tow = 0ul;
      this->course = 0.0f;
      this->course_acc = 0.0f;
    }
  }

  explicit SbgGpsVel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc, _init),
    velocity(_alloc, _init),
    velocity_accuracy(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->gps_tow = 0ul;
      this->course = 0.0f;
      this->course_acc = 0.0f;
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
    sbg_driver::msg::SbgGpsVelStatus_<ContainerAllocator>;
  _status_type status;
  using _gps_tow_type =
    uint32_t;
  _gps_tow_type gps_tow;
  using _velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _velocity_type velocity;
  using _velocity_accuracy_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _velocity_accuracy_type velocity_accuracy;
  using _course_type =
    float;
  _course_type course;
  using _course_acc_type =
    float;
  _course_acc_type course_acc;

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
    const sbg_driver::msg::SbgGpsVelStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__gps_tow(
    const uint32_t & _arg)
  {
    this->gps_tow = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__velocity_accuracy(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->velocity_accuracy = _arg;
    return *this;
  }
  Type & set__course(
    const float & _arg)
  {
    this->course = _arg;
    return *this;
  }
  Type & set__course_acc(
    const float & _arg)
  {
    this->course_acc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbg_driver::msg::SbgGpsVel_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbg_driver::msg::SbgGpsVel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgGpsVel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgGpsVel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgGpsVel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgGpsVel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgGpsVel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgGpsVel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgGpsVel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgGpsVel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbg_driver__msg__SbgGpsVel
    std::shared_ptr<sbg_driver::msg::SbgGpsVel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbg_driver__msg__SbgGpsVel
    std::shared_ptr<sbg_driver::msg::SbgGpsVel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgGpsVel_ & other) const
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
    if (this->gps_tow != other.gps_tow) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->velocity_accuracy != other.velocity_accuracy) {
      return false;
    }
    if (this->course != other.course) {
      return false;
    }
    if (this->course_acc != other.course_acc) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgGpsVel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgGpsVel_

// alias to use template instance with default allocator
using SbgGpsVel =
  sbg_driver::msg::SbgGpsVel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_GPS_VEL__STRUCT_HPP_
