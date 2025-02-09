// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/EstimatedState.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__ESTIMATED_STATE__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__ESTIMATED_STATE__STRUCT_HPP_

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
# define DEPRECATED__custom_interfaces__msg__EstimatedState __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__EstimatedState __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EstimatedState_
{
  using Type = EstimatedState_<ContainerAllocator>;

  explicit EstimatedState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->u = 0.0;
      this->v = 0.0;
      this->r = 0.0;
      this->x = 0.0;
      this->y = 0.0;
      this->heading = 0.0;
      this->propeller = 0.0;
      this->rudder = 0.0;
    }
  }

  explicit EstimatedState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->u = 0.0;
      this->v = 0.0;
      this->r = 0.0;
      this->x = 0.0;
      this->y = 0.0;
      this->heading = 0.0;
      this->propeller = 0.0;
      this->rudder = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _u_type =
    double;
  _u_type u;
  using _v_type =
    double;
  _v_type v;
  using _r_type =
    double;
  _r_type r;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _heading_type =
    double;
  _heading_type heading;
  using _propeller_type =
    double;
  _propeller_type propeller;
  using _rudder_type =
    double;
  _rudder_type rudder;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__u(
    const double & _arg)
  {
    this->u = _arg;
    return *this;
  }
  Type & set__v(
    const double & _arg)
  {
    this->v = _arg;
    return *this;
  }
  Type & set__r(
    const double & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__propeller(
    const double & _arg)
  {
    this->propeller = _arg;
    return *this;
  }
  Type & set__rudder(
    const double & _arg)
  {
    this->rudder = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::EstimatedState_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::EstimatedState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::EstimatedState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::EstimatedState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::EstimatedState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::EstimatedState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::EstimatedState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::EstimatedState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::EstimatedState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::EstimatedState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__EstimatedState
    std::shared_ptr<custom_interfaces::msg::EstimatedState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__EstimatedState
    std::shared_ptr<custom_interfaces::msg::EstimatedState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EstimatedState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->u != other.u) {
      return false;
    }
    if (this->v != other.v) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->propeller != other.propeller) {
      return false;
    }
    if (this->rudder != other.rudder) {
      return false;
    }
    return true;
  }
  bool operator!=(const EstimatedState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EstimatedState_

// alias to use template instance with default allocator
using EstimatedState =
  custom_interfaces::msg::EstimatedState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__ESTIMATED_STATE__STRUCT_HPP_
