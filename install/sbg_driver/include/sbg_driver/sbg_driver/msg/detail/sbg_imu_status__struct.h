// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgImuStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_IMU_STATUS__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_IMU_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SbgImuStatus in the package sbg_driver.
/**
  * SBG Ellipse Messages
  * Submessage SbgImuData
 */
typedef struct sbg_driver__msg__SbgImuStatus
{
  /// True if the communication with the IMU is ok.
  bool imu_com;
  /// True if internal IMU passes Built In Test (Calibration, CPU)
  bool imu_status;
  /// True if accelerometer X passes Built In Test
  bool imu_accel_x;
  /// True if accelerometer Y passes Built In Test
  bool imu_accel_y;
  /// True if accelerometer Z passes Built In Test
  bool imu_accel_z;
  /// True if gyroscope X passes Built In Test
  bool imu_gyro_x;
  /// True if gyroscope Y passes Built In Test
  bool imu_gyro_y;
  /// True if gyroscope Z passes Built In Test
  bool imu_gyro_z;
  /// True if accelerometers are within operating range
  bool imu_accels_in_range;
  /// True if gyroscopes are within operating range
  bool imu_gyros_in_range;
} sbg_driver__msg__SbgImuStatus;

// Struct for a sequence of sbg_driver__msg__SbgImuStatus.
typedef struct sbg_driver__msg__SbgImuStatus__Sequence
{
  sbg_driver__msg__SbgImuStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgImuStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_IMU_STATUS__STRUCT_H_
