// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbg_driver:msg/SbgMagStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_MAG_STATUS__STRUCT_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_MAG_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sbg_driver__msg__SbgMagStatus __attribute__((deprecated))
#else
# define DEPRECATED__sbg_driver__msg__SbgMagStatus __declspec(deprecated)
#endif

namespace sbg_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgMagStatus_
{
  using Type = SbgMagStatus_<ContainerAllocator>;

  explicit SbgMagStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mag_x = false;
      this->mag_y = false;
      this->mag_z = false;
      this->accel_x = false;
      this->accel_y = false;
      this->accel_z = false;
      this->mags_in_range = false;
      this->accels_in_range = false;
      this->calibration = false;
    }
  }

  explicit SbgMagStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mag_x = false;
      this->mag_y = false;
      this->mag_z = false;
      this->accel_x = false;
      this->accel_y = false;
      this->accel_z = false;
      this->mags_in_range = false;
      this->accels_in_range = false;
      this->calibration = false;
    }
  }

  // field types and members
  using _mag_x_type =
    bool;
  _mag_x_type mag_x;
  using _mag_y_type =
    bool;
  _mag_y_type mag_y;
  using _mag_z_type =
    bool;
  _mag_z_type mag_z;
  using _accel_x_type =
    bool;
  _accel_x_type accel_x;
  using _accel_y_type =
    bool;
  _accel_y_type accel_y;
  using _accel_z_type =
    bool;
  _accel_z_type accel_z;
  using _mags_in_range_type =
    bool;
  _mags_in_range_type mags_in_range;
  using _accels_in_range_type =
    bool;
  _accels_in_range_type accels_in_range;
  using _calibration_type =
    bool;
  _calibration_type calibration;

  // setters for named parameter idiom
  Type & set__mag_x(
    const bool & _arg)
  {
    this->mag_x = _arg;
    return *this;
  }
  Type & set__mag_y(
    const bool & _arg)
  {
    this->mag_y = _arg;
    return *this;
  }
  Type & set__mag_z(
    const bool & _arg)
  {
    this->mag_z = _arg;
    return *this;
  }
  Type & set__accel_x(
    const bool & _arg)
  {
    this->accel_x = _arg;
    return *this;
  }
  Type & set__accel_y(
    const bool & _arg)
  {
    this->accel_y = _arg;
    return *this;
  }
  Type & set__accel_z(
    const bool & _arg)
  {
    this->accel_z = _arg;
    return *this;
  }
  Type & set__mags_in_range(
    const bool & _arg)
  {
    this->mags_in_range = _arg;
    return *this;
  }
  Type & set__accels_in_range(
    const bool & _arg)
  {
    this->accels_in_range = _arg;
    return *this;
  }
  Type & set__calibration(
    const bool & _arg)
  {
    this->calibration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbg_driver::msg::SbgMagStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbg_driver::msg::SbgMagStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgMagStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgMagStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgMagStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgMagStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgMagStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgMagStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgMagStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgMagStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbg_driver__msg__SbgMagStatus
    std::shared_ptr<sbg_driver::msg::SbgMagStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbg_driver__msg__SbgMagStatus
    std::shared_ptr<sbg_driver::msg::SbgMagStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgMagStatus_ & other) const
  {
    if (this->mag_x != other.mag_x) {
      return false;
    }
    if (this->mag_y != other.mag_y) {
      return false;
    }
    if (this->mag_z != other.mag_z) {
      return false;
    }
    if (this->accel_x != other.accel_x) {
      return false;
    }
    if (this->accel_y != other.accel_y) {
      return false;
    }
    if (this->accel_z != other.accel_z) {
      return false;
    }
    if (this->mags_in_range != other.mags_in_range) {
      return false;
    }
    if (this->accels_in_range != other.accels_in_range) {
      return false;
    }
    if (this->calibration != other.calibration) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgMagStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgMagStatus_

// alias to use template instance with default allocator
using SbgMagStatus =
  sbg_driver::msg::SbgMagStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_MAG_STATUS__STRUCT_HPP_
