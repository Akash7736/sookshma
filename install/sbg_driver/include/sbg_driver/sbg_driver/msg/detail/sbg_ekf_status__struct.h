// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgEkfStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_EKF_STATUS__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_EKF_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SbgEkfStatus in the package sbg_driver.
/**
  * SBG Ellipse Messages
  * Submessage
 */
typedef struct sbg_driver__msg__SbgEkfStatus
{
  /// Defines the Kalman filter computation mode (see the table 4 below)
  /// 0 UNINITIALIZED The Kalman filter is not initialized and the returned data are all invalid.
  /// 1 VERTICAL_GYRO The Kalman filter only rely on a vertical reference to compute roll and pitch angles. Heading and navigation data drift freely.
  /// 2 AHRS   A heading reference is available, the Kalman filter provides full orientation but navigation data drift freely.
  /// 3 NAV_VELOCITY The Kalman filter computes orientation and velocity. Position is freely integrated from velocity estimation.
  /// 4 NAV_POSITION Nominal mode, the Kalman filter computes all parameters (attitude, velocity, position). Absolute position is provided.
  uint8_t solution_mode;
  /// True if Attitude data is reliable (Roll/Pitch error < 0,5 deg)
  bool attitude_valid;
  /// True if Heading data is reliable (Heading error < 1 deg)
  bool heading_valid;
  /// True if Velocity data is reliable (velocity error < 1.5 m/s)
  bool velocity_valid;
  /// True if Position data is reliable (Position error < 10m)
  bool position_valid;
  /// True if vertical reference is used in solution (data used and valid since 3s)
  bool vert_ref_used;
  /// True if magnetometer is used in solution (data used and valid since 3s)
  bool mag_ref_used;
  /// True if GPS velocity is used in solution (data used and valid since 3s)
  bool gps1_vel_used;
  /// True if GPS Position is used in solution (data used and valid since 3s)
  bool gps1_pos_used;
  /// True if GPS Course is used in solution (data used and valid since 3s)
  bool gps1_course_used;
  /// True if GPS True Heading is used in solution (data used and valid since 3s)
  bool gps1_hdt_used;
  /// True if GPS2 velocity is used in solution (data used and valid since 3s)
  bool gps2_vel_used;
  /// True if GPS2 Position is used in solution (data used and valid since 3s)
  bool gps2_pos_used;
  /// True if GPS2 Course is used in solution (data used and valid since 3s)
  bool gps2_course_used;
  /// True if GPS2 True Heading is used in solution (data used and valid since 3s)
  bool gps2_hdt_used;
  /// True if Odometer is used in solution (data used and valid since 3s)
  bool odo_used;
} sbg_driver__msg__SbgEkfStatus;

// Struct for a sequence of sbg_driver__msg__SbgEkfStatus.
typedef struct sbg_driver__msg__SbgEkfStatus__Sequence
{
  sbg_driver__msg__SbgEkfStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgEkfStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_EKF_STATUS__STRUCT_H_
