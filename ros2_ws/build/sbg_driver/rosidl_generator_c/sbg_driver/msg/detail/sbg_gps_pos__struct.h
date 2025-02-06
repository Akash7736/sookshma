// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgGpsPos.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_GPS_POS__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_GPS_POS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'status'
#include "sbg_driver/msg/detail/sbg_gps_pos_status__struct.h"
// Member 'position_accuracy'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/SbgGpsPos in the package sbg_driver.
/**
  * SBG Ellipse Messages
 */
typedef struct sbg_driver__msg__SbgGpsPos
{
  std_msgs__msg__Header header;
  /// Time since sensor is powered up us
  uint32_t time_stamp;
  /// GPS position fix and status bitmask
  sbg_driver__msg__SbgGpsPosStatus status;
  /// GPS Time of Week ms
  uint32_t gps_tow;
  /// Latitude; Positive is north of equator; negative is south
  double latitude;
  /// Longitude; Positive is east of prime meridian; negative is west
  double longitude;
  /// Altitude; Positive is above Mean Sea Level in meters
  double altitude;
  /// Altitude difference between the geoid and the Ellipsoid (WGS-84 Altitude - MSL Altitude)
  /// (Height above Ellipsoid = altitude + undulation)
  float undulation;
  /// Position accuracy (1 sigma).
  /// In NED convention:
  ///   x: North
  ///   y: East
  ///   z: Vertical
  /// In ENU convention:
  ///   x: East
  ///   y: North
  ///   z: Vertical
  geometry_msgs__msg__Vector3 position_accuracy;
  /// Number of space vehicles used in GNSS solution
  uint8_t num_sv_used;
  /// ID of the DGPS/RTK base station in use
  uint16_t base_station_id;
  /// Differential data age 0.01 s
  uint16_t diff_age;
} sbg_driver__msg__SbgGpsPos;

// Struct for a sequence of sbg_driver__msg__SbgGpsPos.
typedef struct sbg_driver__msg__SbgGpsPos__Sequence
{
  sbg_driver__msg__SbgGpsPos * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgGpsPos__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_GPS_POS__STRUCT_H_
