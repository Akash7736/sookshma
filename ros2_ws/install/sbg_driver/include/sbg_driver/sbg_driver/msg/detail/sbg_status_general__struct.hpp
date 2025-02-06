// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbg_driver:msg/SbgStatusGeneral.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_STATUS_GENERAL__STRUCT_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_STATUS_GENERAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sbg_driver__msg__SbgStatusGeneral __attribute__((deprecated))
#else
# define DEPRECATED__sbg_driver__msg__SbgStatusGeneral __declspec(deprecated)
#endif

namespace sbg_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgStatusGeneral_
{
  using Type = SbgStatusGeneral_<ContainerAllocator>;

  explicit SbgStatusGeneral_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->main_power = false;
      this->imu_power = false;
      this->gps_power = false;
      this->settings = false;
      this->temperature = false;
    }
  }

  explicit SbgStatusGeneral_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->main_power = false;
      this->imu_power = false;
      this->gps_power = false;
      this->settings = false;
      this->temperature = false;
    }
  }

  // field types and members
  using _main_power_type =
    bool;
  _main_power_type main_power;
  using _imu_power_type =
    bool;
  _imu_power_type imu_power;
  using _gps_power_type =
    bool;
  _gps_power_type gps_power;
  using _settings_type =
    bool;
  _settings_type settings;
  using _temperature_type =
    bool;
  _temperature_type temperature;

  // setters for named parameter idiom
  Type & set__main_power(
    const bool & _arg)
  {
    this->main_power = _arg;
    return *this;
  }
  Type & set__imu_power(
    const bool & _arg)
  {
    this->imu_power = _arg;
    return *this;
  }
  Type & set__gps_power(
    const bool & _arg)
  {
    this->gps_power = _arg;
    return *this;
  }
  Type & set__settings(
    const bool & _arg)
  {
    this->settings = _arg;
    return *this;
  }
  Type & set__temperature(
    const bool & _arg)
  {
    this->temperature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbg_driver::msg::SbgStatusGeneral_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbg_driver::msg::SbgStatusGeneral_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgStatusGeneral_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgStatusGeneral_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgStatusGeneral_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgStatusGeneral_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgStatusGeneral_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgStatusGeneral_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgStatusGeneral_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgStatusGeneral_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbg_driver__msg__SbgStatusGeneral
    std::shared_ptr<sbg_driver::msg::SbgStatusGeneral_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbg_driver__msg__SbgStatusGeneral
    std::shared_ptr<sbg_driver::msg::SbgStatusGeneral_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgStatusGeneral_ & other) const
  {
    if (this->main_power != other.main_power) {
      return false;
    }
    if (this->imu_power != other.imu_power) {
      return false;
    }
    if (this->gps_power != other.gps_power) {
      return false;
    }
    if (this->settings != other.settings) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgStatusGeneral_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgStatusGeneral_

// alias to use template instance with default allocator
using SbgStatusGeneral =
  sbg_driver::msg::SbgStatusGeneral_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_STATUS_GENERAL__STRUCT_HPP_
