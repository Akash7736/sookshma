// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbg_driver:msg/SbgImuShort.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_IMU_SHORT__STRUCT_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_IMU_SHORT__STRUCT_HPP_

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
// Member 'imu_status'
#include "sbg_driver/msg/detail/sbg_imu_status__struct.hpp"
// Member 'delta_velocity'
// Member 'delta_angle'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sbg_driver__msg__SbgImuShort __attribute__((deprecated))
#else
# define DEPRECATED__sbg_driver__msg__SbgImuShort __declspec(deprecated)
#endif

namespace sbg_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgImuShort_
{
  using Type = SbgImuShort_<ContainerAllocator>;

  explicit SbgImuShort_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    imu_status(_init),
    delta_velocity(_init),
    delta_angle(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->temperature = 0;
    }
  }

  explicit SbgImuShort_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    imu_status(_alloc, _init),
    delta_velocity(_alloc, _init),
    delta_angle(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->temperature = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _time_stamp_type =
    uint32_t;
  _time_stamp_type time_stamp;
  using _imu_status_type =
    sbg_driver::msg::SbgImuStatus_<ContainerAllocator>;
  _imu_status_type imu_status;
  using _delta_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _delta_velocity_type delta_velocity;
  using _delta_angle_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _delta_angle_type delta_angle;
  using _temperature_type =
    int16_t;
  _temperature_type temperature;

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
  Type & set__imu_status(
    const sbg_driver::msg::SbgImuStatus_<ContainerAllocator> & _arg)
  {
    this->imu_status = _arg;
    return *this;
  }
  Type & set__delta_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->delta_velocity = _arg;
    return *this;
  }
  Type & set__delta_angle(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->delta_angle = _arg;
    return *this;
  }
  Type & set__temperature(
    const int16_t & _arg)
  {
    this->temperature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbg_driver::msg::SbgImuShort_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbg_driver::msg::SbgImuShort_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgImuShort_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgImuShort_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgImuShort_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgImuShort_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgImuShort_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgImuShort_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgImuShort_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgImuShort_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbg_driver__msg__SbgImuShort
    std::shared_ptr<sbg_driver::msg::SbgImuShort_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbg_driver__msg__SbgImuShort
    std::shared_ptr<sbg_driver::msg::SbgImuShort_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgImuShort_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->imu_status != other.imu_status) {
      return false;
    }
    if (this->delta_velocity != other.delta_velocity) {
      return false;
    }
    if (this->delta_angle != other.delta_angle) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgImuShort_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgImuShort_

// alias to use template instance with default allocator
using SbgImuShort =
  sbg_driver::msg::SbgImuShort_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_IMU_SHORT__STRUCT_HPP_
