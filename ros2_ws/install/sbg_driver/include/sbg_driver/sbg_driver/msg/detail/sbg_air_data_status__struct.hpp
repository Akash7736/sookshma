// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbg_driver:msg/SbgAirDataStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_AIR_DATA_STATUS__STRUCT_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_AIR_DATA_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sbg_driver__msg__SbgAirDataStatus __attribute__((deprecated))
#else
# define DEPRECATED__sbg_driver__msg__SbgAirDataStatus __declspec(deprecated)
#endif

namespace sbg_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgAirDataStatus_
{
  using Type = SbgAirDataStatus_<ContainerAllocator>;

  explicit SbgAirDataStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_delay_time = false;
      this->pressure_valid = false;
      this->altitude_valid = false;
      this->pressure_diff_valid = false;
      this->air_speed_valid = false;
      this->air_temperature_valid = false;
    }
  }

  explicit SbgAirDataStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_delay_time = false;
      this->pressure_valid = false;
      this->altitude_valid = false;
      this->pressure_diff_valid = false;
      this->air_speed_valid = false;
      this->air_temperature_valid = false;
    }
  }

  // field types and members
  using _is_delay_time_type =
    bool;
  _is_delay_time_type is_delay_time;
  using _pressure_valid_type =
    bool;
  _pressure_valid_type pressure_valid;
  using _altitude_valid_type =
    bool;
  _altitude_valid_type altitude_valid;
  using _pressure_diff_valid_type =
    bool;
  _pressure_diff_valid_type pressure_diff_valid;
  using _air_speed_valid_type =
    bool;
  _air_speed_valid_type air_speed_valid;
  using _air_temperature_valid_type =
    bool;
  _air_temperature_valid_type air_temperature_valid;

  // setters for named parameter idiom
  Type & set__is_delay_time(
    const bool & _arg)
  {
    this->is_delay_time = _arg;
    return *this;
  }
  Type & set__pressure_valid(
    const bool & _arg)
  {
    this->pressure_valid = _arg;
    return *this;
  }
  Type & set__altitude_valid(
    const bool & _arg)
  {
    this->altitude_valid = _arg;
    return *this;
  }
  Type & set__pressure_diff_valid(
    const bool & _arg)
  {
    this->pressure_diff_valid = _arg;
    return *this;
  }
  Type & set__air_speed_valid(
    const bool & _arg)
  {
    this->air_speed_valid = _arg;
    return *this;
  }
  Type & set__air_temperature_valid(
    const bool & _arg)
  {
    this->air_temperature_valid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbg_driver::msg::SbgAirDataStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbg_driver::msg::SbgAirDataStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgAirDataStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgAirDataStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgAirDataStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgAirDataStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgAirDataStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgAirDataStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgAirDataStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgAirDataStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbg_driver__msg__SbgAirDataStatus
    std::shared_ptr<sbg_driver::msg::SbgAirDataStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbg_driver__msg__SbgAirDataStatus
    std::shared_ptr<sbg_driver::msg::SbgAirDataStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgAirDataStatus_ & other) const
  {
    if (this->is_delay_time != other.is_delay_time) {
      return false;
    }
    if (this->pressure_valid != other.pressure_valid) {
      return false;
    }
    if (this->altitude_valid != other.altitude_valid) {
      return false;
    }
    if (this->pressure_diff_valid != other.pressure_diff_valid) {
      return false;
    }
    if (this->air_speed_valid != other.air_speed_valid) {
      return false;
    }
    if (this->air_temperature_valid != other.air_temperature_valid) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgAirDataStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgAirDataStatus_

// alias to use template instance with default allocator
using SbgAirDataStatus =
  sbg_driver::msg::SbgAirDataStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_AIR_DATA_STATUS__STRUCT_HPP_
