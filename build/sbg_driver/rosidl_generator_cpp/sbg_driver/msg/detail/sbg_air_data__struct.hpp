// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbg_driver:msg/SbgAirData.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_AIR_DATA__STRUCT_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_AIR_DATA__STRUCT_HPP_

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
#include "sbg_driver/msg/detail/sbg_air_data_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sbg_driver__msg__SbgAirData __attribute__((deprecated))
#else
# define DEPRECATED__sbg_driver__msg__SbgAirData __declspec(deprecated)
#endif

namespace sbg_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgAirData_
{
  using Type = SbgAirData_<ContainerAllocator>;

  explicit SbgAirData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->pressure_abs = 0.0;
      this->altitude = 0.0;
      this->pressure_diff = 0.0;
      this->true_air_speed = 0.0;
      this->air_temperature = 0.0;
    }
  }

  explicit SbgAirData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->pressure_abs = 0.0;
      this->altitude = 0.0;
      this->pressure_diff = 0.0;
      this->true_air_speed = 0.0;
      this->air_temperature = 0.0;
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
    sbg_driver::msg::SbgAirDataStatus_<ContainerAllocator>;
  _status_type status;
  using _pressure_abs_type =
    double;
  _pressure_abs_type pressure_abs;
  using _altitude_type =
    double;
  _altitude_type altitude;
  using _pressure_diff_type =
    double;
  _pressure_diff_type pressure_diff;
  using _true_air_speed_type =
    double;
  _true_air_speed_type true_air_speed;
  using _air_temperature_type =
    double;
  _air_temperature_type air_temperature;

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
    const sbg_driver::msg::SbgAirDataStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__pressure_abs(
    const double & _arg)
  {
    this->pressure_abs = _arg;
    return *this;
  }
  Type & set__altitude(
    const double & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__pressure_diff(
    const double & _arg)
  {
    this->pressure_diff = _arg;
    return *this;
  }
  Type & set__true_air_speed(
    const double & _arg)
  {
    this->true_air_speed = _arg;
    return *this;
  }
  Type & set__air_temperature(
    const double & _arg)
  {
    this->air_temperature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbg_driver::msg::SbgAirData_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbg_driver::msg::SbgAirData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgAirData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgAirData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgAirData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgAirData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgAirData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgAirData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgAirData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgAirData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbg_driver__msg__SbgAirData
    std::shared_ptr<sbg_driver::msg::SbgAirData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbg_driver__msg__SbgAirData
    std::shared_ptr<sbg_driver::msg::SbgAirData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgAirData_ & other) const
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
    if (this->pressure_abs != other.pressure_abs) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->pressure_diff != other.pressure_diff) {
      return false;
    }
    if (this->true_air_speed != other.true_air_speed) {
      return false;
    }
    if (this->air_temperature != other.air_temperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgAirData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgAirData_

// alias to use template instance with default allocator
using SbgAirData =
  sbg_driver::msg::SbgAirData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_AIR_DATA__STRUCT_HPP_
