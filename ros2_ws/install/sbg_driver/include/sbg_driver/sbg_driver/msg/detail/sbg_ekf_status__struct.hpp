// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbg_driver:msg/SbgEkfStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_EKF_STATUS__STRUCT_HPP_
#define SBG_DRIVER__MSG__DETAIL__SBG_EKF_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sbg_driver__msg__SbgEkfStatus __attribute__((deprecated))
#else
# define DEPRECATED__sbg_driver__msg__SbgEkfStatus __declspec(deprecated)
#endif

namespace sbg_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgEkfStatus_
{
  using Type = SbgEkfStatus_<ContainerAllocator>;

  explicit SbgEkfStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->solution_mode = 0;
      this->attitude_valid = false;
      this->heading_valid = false;
      this->velocity_valid = false;
      this->position_valid = false;
      this->vert_ref_used = false;
      this->mag_ref_used = false;
      this->gps1_vel_used = false;
      this->gps1_pos_used = false;
      this->gps1_hdt_used = false;
      this->gps2_vel_used = false;
      this->gps2_pos_used = false;
      this->gps2_hdt_used = false;
      this->odo_used = false;
      this->dvl_bt_used = false;
      this->dvl_wt_used = false;
      this->user_pos_used = false;
      this->user_vel_used = false;
      this->user_heading_used = false;
      this->usbl_used = false;
      this->air_data_used = false;
      this->zupt_used = false;
      this->align_valid = false;
      this->depth_used = false;
    }
  }

  explicit SbgEkfStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->solution_mode = 0;
      this->attitude_valid = false;
      this->heading_valid = false;
      this->velocity_valid = false;
      this->position_valid = false;
      this->vert_ref_used = false;
      this->mag_ref_used = false;
      this->gps1_vel_used = false;
      this->gps1_pos_used = false;
      this->gps1_hdt_used = false;
      this->gps2_vel_used = false;
      this->gps2_pos_used = false;
      this->gps2_hdt_used = false;
      this->odo_used = false;
      this->dvl_bt_used = false;
      this->dvl_wt_used = false;
      this->user_pos_used = false;
      this->user_vel_used = false;
      this->user_heading_used = false;
      this->usbl_used = false;
      this->air_data_used = false;
      this->zupt_used = false;
      this->align_valid = false;
      this->depth_used = false;
    }
  }

  // field types and members
  using _solution_mode_type =
    uint8_t;
  _solution_mode_type solution_mode;
  using _attitude_valid_type =
    bool;
  _attitude_valid_type attitude_valid;
  using _heading_valid_type =
    bool;
  _heading_valid_type heading_valid;
  using _velocity_valid_type =
    bool;
  _velocity_valid_type velocity_valid;
  using _position_valid_type =
    bool;
  _position_valid_type position_valid;
  using _vert_ref_used_type =
    bool;
  _vert_ref_used_type vert_ref_used;
  using _mag_ref_used_type =
    bool;
  _mag_ref_used_type mag_ref_used;
  using _gps1_vel_used_type =
    bool;
  _gps1_vel_used_type gps1_vel_used;
  using _gps1_pos_used_type =
    bool;
  _gps1_pos_used_type gps1_pos_used;
  using _gps1_hdt_used_type =
    bool;
  _gps1_hdt_used_type gps1_hdt_used;
  using _gps2_vel_used_type =
    bool;
  _gps2_vel_used_type gps2_vel_used;
  using _gps2_pos_used_type =
    bool;
  _gps2_pos_used_type gps2_pos_used;
  using _gps2_hdt_used_type =
    bool;
  _gps2_hdt_used_type gps2_hdt_used;
  using _odo_used_type =
    bool;
  _odo_used_type odo_used;
  using _dvl_bt_used_type =
    bool;
  _dvl_bt_used_type dvl_bt_used;
  using _dvl_wt_used_type =
    bool;
  _dvl_wt_used_type dvl_wt_used;
  using _user_pos_used_type =
    bool;
  _user_pos_used_type user_pos_used;
  using _user_vel_used_type =
    bool;
  _user_vel_used_type user_vel_used;
  using _user_heading_used_type =
    bool;
  _user_heading_used_type user_heading_used;
  using _usbl_used_type =
    bool;
  _usbl_used_type usbl_used;
  using _air_data_used_type =
    bool;
  _air_data_used_type air_data_used;
  using _zupt_used_type =
    bool;
  _zupt_used_type zupt_used;
  using _align_valid_type =
    bool;
  _align_valid_type align_valid;
  using _depth_used_type =
    bool;
  _depth_used_type depth_used;

  // setters for named parameter idiom
  Type & set__solution_mode(
    const uint8_t & _arg)
  {
    this->solution_mode = _arg;
    return *this;
  }
  Type & set__attitude_valid(
    const bool & _arg)
  {
    this->attitude_valid = _arg;
    return *this;
  }
  Type & set__heading_valid(
    const bool & _arg)
  {
    this->heading_valid = _arg;
    return *this;
  }
  Type & set__velocity_valid(
    const bool & _arg)
  {
    this->velocity_valid = _arg;
    return *this;
  }
  Type & set__position_valid(
    const bool & _arg)
  {
    this->position_valid = _arg;
    return *this;
  }
  Type & set__vert_ref_used(
    const bool & _arg)
  {
    this->vert_ref_used = _arg;
    return *this;
  }
  Type & set__mag_ref_used(
    const bool & _arg)
  {
    this->mag_ref_used = _arg;
    return *this;
  }
  Type & set__gps1_vel_used(
    const bool & _arg)
  {
    this->gps1_vel_used = _arg;
    return *this;
  }
  Type & set__gps1_pos_used(
    const bool & _arg)
  {
    this->gps1_pos_used = _arg;
    return *this;
  }
  Type & set__gps1_hdt_used(
    const bool & _arg)
  {
    this->gps1_hdt_used = _arg;
    return *this;
  }
  Type & set__gps2_vel_used(
    const bool & _arg)
  {
    this->gps2_vel_used = _arg;
    return *this;
  }
  Type & set__gps2_pos_used(
    const bool & _arg)
  {
    this->gps2_pos_used = _arg;
    return *this;
  }
  Type & set__gps2_hdt_used(
    const bool & _arg)
  {
    this->gps2_hdt_used = _arg;
    return *this;
  }
  Type & set__odo_used(
    const bool & _arg)
  {
    this->odo_used = _arg;
    return *this;
  }
  Type & set__dvl_bt_used(
    const bool & _arg)
  {
    this->dvl_bt_used = _arg;
    return *this;
  }
  Type & set__dvl_wt_used(
    const bool & _arg)
  {
    this->dvl_wt_used = _arg;
    return *this;
  }
  Type & set__user_pos_used(
    const bool & _arg)
  {
    this->user_pos_used = _arg;
    return *this;
  }
  Type & set__user_vel_used(
    const bool & _arg)
  {
    this->user_vel_used = _arg;
    return *this;
  }
  Type & set__user_heading_used(
    const bool & _arg)
  {
    this->user_heading_used = _arg;
    return *this;
  }
  Type & set__usbl_used(
    const bool & _arg)
  {
    this->usbl_used = _arg;
    return *this;
  }
  Type & set__air_data_used(
    const bool & _arg)
  {
    this->air_data_used = _arg;
    return *this;
  }
  Type & set__zupt_used(
    const bool & _arg)
  {
    this->zupt_used = _arg;
    return *this;
  }
  Type & set__align_valid(
    const bool & _arg)
  {
    this->align_valid = _arg;
    return *this;
  }
  Type & set__depth_used(
    const bool & _arg)
  {
    this->depth_used = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbg_driver::msg::SbgEkfStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbg_driver::msg::SbgEkfStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgEkfStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbg_driver::msg::SbgEkfStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgEkfStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgEkfStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbg_driver::msg::SbgEkfStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbg_driver::msg::SbgEkfStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgEkfStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbg_driver::msg::SbgEkfStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbg_driver__msg__SbgEkfStatus
    std::shared_ptr<sbg_driver::msg::SbgEkfStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbg_driver__msg__SbgEkfStatus
    std::shared_ptr<sbg_driver::msg::SbgEkfStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgEkfStatus_ & other) const
  {
    if (this->solution_mode != other.solution_mode) {
      return false;
    }
    if (this->attitude_valid != other.attitude_valid) {
      return false;
    }
    if (this->heading_valid != other.heading_valid) {
      return false;
    }
    if (this->velocity_valid != other.velocity_valid) {
      return false;
    }
    if (this->position_valid != other.position_valid) {
      return false;
    }
    if (this->vert_ref_used != other.vert_ref_used) {
      return false;
    }
    if (this->mag_ref_used != other.mag_ref_used) {
      return false;
    }
    if (this->gps1_vel_used != other.gps1_vel_used) {
      return false;
    }
    if (this->gps1_pos_used != other.gps1_pos_used) {
      return false;
    }
    if (this->gps1_hdt_used != other.gps1_hdt_used) {
      return false;
    }
    if (this->gps2_vel_used != other.gps2_vel_used) {
      return false;
    }
    if (this->gps2_pos_used != other.gps2_pos_used) {
      return false;
    }
    if (this->gps2_hdt_used != other.gps2_hdt_used) {
      return false;
    }
    if (this->odo_used != other.odo_used) {
      return false;
    }
    if (this->dvl_bt_used != other.dvl_bt_used) {
      return false;
    }
    if (this->dvl_wt_used != other.dvl_wt_used) {
      return false;
    }
    if (this->user_pos_used != other.user_pos_used) {
      return false;
    }
    if (this->user_vel_used != other.user_vel_used) {
      return false;
    }
    if (this->user_heading_used != other.user_heading_used) {
      return false;
    }
    if (this->usbl_used != other.usbl_used) {
      return false;
    }
    if (this->air_data_used != other.air_data_used) {
      return false;
    }
    if (this->zupt_used != other.zupt_used) {
      return false;
    }
    if (this->align_valid != other.align_valid) {
      return false;
    }
    if (this->depth_used != other.depth_used) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgEkfStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgEkfStatus_

// alias to use template instance with default allocator
using SbgEkfStatus =
  sbg_driver::msg::SbgEkfStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sbg_driver

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_EKF_STATUS__STRUCT_HPP_
