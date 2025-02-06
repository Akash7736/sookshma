// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbg_driver:msg/SbgImuStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_IMU_STATUS__STRUCT_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_IMU_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sbg_driver__msg__SbgImuStatus __attribute__((deprecated))
#else
# define DEPRECATED__sbg_driver__msg__SbgImuStatus __declspec(deprecated)
#endif

namespace sbg_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgImuStatus_
{
  using Type = SbgImuStatus_<ContainerAllocator>;

  explicit SbgImuStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->imu_com = false;
      this->imu_status = false;
      this->imu_accel_x = false;
      this->imu_accel_y = false;
      this->imu_accel_z = false;
      this->imu_gyro_x = false;
      this->imu_gyro_y = false;
      this->imu_gyro_z = false;
      this->imu_accels_in_range = false;
      this->imu_gyros_in_range = false;
    }
  }

  explicit SbgImuStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->imu_com = false;
      this->imu_status = false;
      this->imu_accel_x = false;
      this->imu_accel_y = false;
      this->imu_accel_z = false;
      this->imu_gyro_x = false;
      this->imu_gyro_y = false;
      this->imu_gyro_z = false;
      this->imu_accels_in_range = false;
      this->imu_gyros_in_range = false;
    }
  }

  // field types and members
  using _imu_com_type =
    bool;
  _imu_com_type imu_com;
  using _imu_status_type =
    bool;
  _imu_status_type imu_status;
  using _imu_accel_x_type =
    bool;
  _imu_accel_x_type imu_accel_x;
  using _imu_accel_y_type =
    bool;
  _imu_accel_y_type imu_accel_y;
  using _imu_accel_z_type =
    bool;
  _imu_accel_z_type imu_accel_z;
  using _imu_gyro_x_type =
    bool;
  _imu_gyro_x_type imu_gyro_x;
  using _imu_gyro_y_type =
    bool;
  _imu_gyro_y_type imu_gyro_y;
  using _imu_gyro_z_type =
    bool;
  _imu_gyro_z_type imu_gyro_z;
  using _imu_accels_in_range_type =
    bool;
  _imu_accels_in_range_type imu_accels_in_range;
  using _imu_gyros_in_range_type =
    bool;
  _imu_gyros_in_range_type imu_gyros_in_range;

  // setters for named parameter idiom
  Type & set__imu_com(
    const bool & _arg)
  {
    this->imu_com = _arg;
    return *this;
  }
  Type & set__imu_status(
    const bool & _arg)
  {
    this->imu_status = _arg;
    return *this;
  }
  Type & set__imu_accel_x(
    const bool & _arg)
  {
    this->imu_accel_x = _arg;
    return *this;
  }
  Type & set__imu_accel_y(
    const bool & _arg)
  {
    this->imu_accel_y = _arg;
    return *this;
  }
  Type & set__imu_accel_z(
    const bool & _arg)
  {
    this->imu_accel_z = _arg;
    return *this;
  }
  Type & set__imu_gyro_x(
    const bool & _arg)
  {
    this->imu_gyro_x = _arg;
    return *this;
  }
  Type & set__imu_gyro_y(
    const bool & _arg)
  {
    this->imu_gyro_y = _arg;
    return *this;
  }
  Type & set__imu_gyro_z(
    const bool & _arg)
  {
    this->imu_gyro_z = _arg;
    return *this;
  }
  Type & set__imu_accels_in_range(
    const bool & _arg)
  {
    this->imu_accels_in_range = _arg;
    return *this;
  }
  Type & set__imu_gyros_in_range(
    const bool & _arg)
  {
    this->imu_gyros_in_range = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbg_driver::msg::SbgImuStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbg_driver::msg::SbgImuStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgImuStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgImuStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgImuStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgImuStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgImuStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgImuStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgImuStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgImuStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbg_driver__msg__SbgImuStatus
    std::shared_ptr<sbg_driver::msg::SbgImuStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbg_driver__msg__SbgImuStatus
    std::shared_ptr<sbg_driver::msg::SbgImuStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgImuStatus_ & other) const
  {
    if (this->imu_com != other.imu_com) {
      return false;
    }
    if (this->imu_status != other.imu_status) {
      return false;
    }
    if (this->imu_accel_x != other.imu_accel_x) {
      return false;
    }
    if (this->imu_accel_y != other.imu_accel_y) {
      return false;
    }
    if (this->imu_accel_z != other.imu_accel_z) {
      return false;
    }
    if (this->imu_gyro_x != other.imu_gyro_x) {
      return false;
    }
    if (this->imu_gyro_y != other.imu_gyro_y) {
      return false;
    }
    if (this->imu_gyro_z != other.imu_gyro_z) {
      return false;
    }
    if (this->imu_accels_in_range != other.imu_accels_in_range) {
      return false;
    }
    if (this->imu_gyros_in_range != other.imu_gyros_in_range) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgImuStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgImuStatus_

// alias to use template instance with default allocator
using SbgImuStatus =
  sbg_driver::msg::SbgImuStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_IMU_STATUS__STRUCT_HPP_
