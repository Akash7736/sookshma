// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/Actuator.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__ACTUATOR__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__ACTUATOR__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__Actuator __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__Actuator __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Actuator_
{
  using Type = Actuator_<ContainerAllocator>;

  explicit Actuator_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rudder = 0.0;
      this->propeller = 0.0;
      std::fill<typename std::array<double, 4>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
    }
  }

  explicit Actuator_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    covariance(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rudder = 0.0;
      this->propeller = 0.0;
      std::fill<typename std::array<double, 4>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _rudder_type =
    double;
  _rudder_type rudder;
  using _propeller_type =
    double;
  _propeller_type propeller;
  using _covariance_type =
    std::array<double, 4>;
  _covariance_type covariance;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__rudder(
    const double & _arg)
  {
    this->rudder = _arg;
    return *this;
  }
  Type & set__propeller(
    const double & _arg)
  {
    this->propeller = _arg;
    return *this;
  }
  Type & set__covariance(
    const std::array<double, 4> & _arg)
  {
    this->covariance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::Actuator_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::Actuator_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::Actuator_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::Actuator_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::Actuator_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::Actuator_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::Actuator_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::Actuator_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::Actuator_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::Actuator_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__Actuator
    std::shared_ptr<custom_interfaces::msg::Actuator_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__Actuator
    std::shared_ptr<custom_interfaces::msg::Actuator_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Actuator_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->rudder != other.rudder) {
      return false;
    }
    if (this->propeller != other.propeller) {
      return false;
    }
    if (this->covariance != other.covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const Actuator_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Actuator_

// alias to use template instance with default allocator
using Actuator =
  custom_interfaces::msg::Actuator_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__ACTUATOR__STRUCT_HPP_
