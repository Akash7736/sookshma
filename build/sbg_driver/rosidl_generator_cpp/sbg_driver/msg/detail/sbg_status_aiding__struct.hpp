// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbg_driver:msg/SbgStatusAiding.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_STATUS_AIDING__STRUCT_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_STATUS_AIDING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sbg_driver__msg__SbgStatusAiding __attribute__((deprecated))
#else
# define DEPRECATED__sbg_driver__msg__SbgStatusAiding __declspec(deprecated)
#endif

namespace sbg_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgStatusAiding_
{
  using Type = SbgStatusAiding_<ContainerAllocator>;

  explicit SbgStatusAiding_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gps1_pos_recv = false;
      this->gps1_vel_recv = false;
      this->gps1_hdt_recv = false;
      this->gps1_utc_recv = false;
      this->mag_recv = false;
      this->odo_recv = false;
      this->dvl_recv = false;
    }
  }

  explicit SbgStatusAiding_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gps1_pos_recv = false;
      this->gps1_vel_recv = false;
      this->gps1_hdt_recv = false;
      this->gps1_utc_recv = false;
      this->mag_recv = false;
      this->odo_recv = false;
      this->dvl_recv = false;
    }
  }

  // field types and members
  using _gps1_pos_recv_type =
    bool;
  _gps1_pos_recv_type gps1_pos_recv;
  using _gps1_vel_recv_type =
    bool;
  _gps1_vel_recv_type gps1_vel_recv;
  using _gps1_hdt_recv_type =
    bool;
  _gps1_hdt_recv_type gps1_hdt_recv;
  using _gps1_utc_recv_type =
    bool;
  _gps1_utc_recv_type gps1_utc_recv;
  using _mag_recv_type =
    bool;
  _mag_recv_type mag_recv;
  using _odo_recv_type =
    bool;
  _odo_recv_type odo_recv;
  using _dvl_recv_type =
    bool;
  _dvl_recv_type dvl_recv;

  // setters for named parameter idiom
  Type & set__gps1_pos_recv(
    const bool & _arg)
  {
    this->gps1_pos_recv = _arg;
    return *this;
  }
  Type & set__gps1_vel_recv(
    const bool & _arg)
  {
    this->gps1_vel_recv = _arg;
    return *this;
  }
  Type & set__gps1_hdt_recv(
    const bool & _arg)
  {
    this->gps1_hdt_recv = _arg;
    return *this;
  }
  Type & set__gps1_utc_recv(
    const bool & _arg)
  {
    this->gps1_utc_recv = _arg;
    return *this;
  }
  Type & set__mag_recv(
    const bool & _arg)
  {
    this->mag_recv = _arg;
    return *this;
  }
  Type & set__odo_recv(
    const bool & _arg)
  {
    this->odo_recv = _arg;
    return *this;
  }
  Type & set__dvl_recv(
    const bool & _arg)
  {
    this->dvl_recv = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbg_driver::msg::SbgStatusAiding_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbg_driver::msg::SbgStatusAiding_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgStatusAiding_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgStatusAiding_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgStatusAiding_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgStatusAiding_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgStatusAiding_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgStatusAiding_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgStatusAiding_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgStatusAiding_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbg_driver__msg__SbgStatusAiding
    std::shared_ptr<sbg_driver::msg::SbgStatusAiding_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbg_driver__msg__SbgStatusAiding
    std::shared_ptr<sbg_driver::msg::SbgStatusAiding_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgStatusAiding_ & other) const
  {
    if (this->gps1_pos_recv != other.gps1_pos_recv) {
      return false;
    }
    if (this->gps1_vel_recv != other.gps1_vel_recv) {
      return false;
    }
    if (this->gps1_hdt_recv != other.gps1_hdt_recv) {
      return false;
    }
    if (this->gps1_utc_recv != other.gps1_utc_recv) {
      return false;
    }
    if (this->mag_recv != other.mag_recv) {
      return false;
    }
    if (this->odo_recv != other.odo_recv) {
      return false;
    }
    if (this->dvl_recv != other.dvl_recv) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgStatusAiding_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgStatusAiding_

// alias to use template instance with default allocator
using SbgStatusAiding =
  sbg_driver::msg::SbgStatusAiding_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_STATUS_AIDING__STRUCT_HPP_
