// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sbg_driver:msg/SbgGpsPosStatus.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_GPS_POS_STATUS__STRUCT_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_GPS_POS_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SbgGpsPosStatus in the package sbg_driver.
/**
  * SBG Ellipse Messages
  * Submessage
 */
typedef struct sbg_driver__msg__SbgGpsPosStatus
{
  /// The raw GPS position status
  /// 0 SOL_COMPUTED  A valid solution has been computed.
  /// 1 INSUFFICIENT_OBS  Not enough valid SV to compute a solution.
  /// 2 INTERNAL_ERROR   An internal error has occurred.
  /// 3 HEIGHT_LIMIT   The height limit has been exceeded.
  uint8_t status;
  /// The raw GPS position type
  /// 0 NO_SOLUTION  No valid solution available.
  /// 1 UNKNOWN_TYPE An unknown solution type has been computed.
  /// 2 SINGLE   Single point solution position.
  /// 3 PSRDIFF   Standard Pseudorange Differential Solution (DGPS).
  /// 4 SBAS   SBAS satellite used for differential corrections.
  /// 5 OMNISTAR  Omnistar VBS Position (L1 sub-meter).
  /// 6 RTK_FLOAT  Floating RTK ambiguity solution (20 cms RTK).
  /// 7 RTK_INT   Integer RTK ambiguity solution (2 cms RTK).
  /// 8 PPP_FLOAT  Precise Point Positioning with float ambiguities
  /// 9 PPP_INT   Precise Point Positioning with fixed ambiguities
  /// 10 FIXED   Fixed location solution position
  uint8_t type;
  /// The ifm status
  /// 0 ERROR      Interference monitoring system is in error and doesn't work.
  /// 1 UNKNOWN      Interference monitoring is either disabled or not available.
  /// 2 CLEAN      Interference are monitored and the environment is clean.
  /// 3 MITIGATED       Interference are detected and mitigated, the PVT is OK.
  /// 4 CRITICAL        Interference are detected and couldn't be mitigated, the PVT is invalid.
  uint8_t ifm;
  /// The spoofing status
  /// 0 ERROR   Spoofing detection system is in error and doesn't work.
  /// 1 UNKNOWN   Spoofing detection is either disabled or not available.
  /// 2 CLEAN   Spoofing detection is enabled and no spoofer is detected.
  /// 3 SINGLE   Probable spoofing identified by one method only.
  /// 4 MULTIPLE  Confirmed spoofing identified by several methods such as Galileo OSNMA + Built In.
  uint8_t spoofing;
  /// The OSNMA status
  /// 0 ERROR      No valid solution available.
  /// 1 DISABLED     An unknown solution type has been computed.
  /// 2 INITIALIZING Single point solution position.
  /// 3 WAITING_NTP  Standard Pseudorange Differential Solution (DGPS).
  /// 4 VALID   SBAS satellite used for differential corrections.
  /// 5 SPOOFED      Omnistar VBS Position (L1 sub-meter).
  uint8_t osnma;
  /// True if GPS L1 is used in the solution
  bool gps_l1_used;
  /// True if GPS L2 is used in the solution
  bool gps_l2_used;
  /// True if GPS L5 is used in the solution
  bool gps_l5_used;
  /// True if GLONASS L1 is used in the solution
  bool glo_l1_used;
  /// True if GLONASS L2 is used in the solution
  bool glo_l2_used;
  /// True if GLONASS L3 is used in the solution
  bool glo_l3_used;
  /// True if GALILEO E1 is used in the solution
  bool gal_e1_used;
  /// True if GALILEO E5a is used in the solution
  bool gal_e5a_used;
  /// True if GALILEO E5b is used in the solution
  bool gal_e5b_used;
  /// True if GALILEO E5 AltBoc is used in the solution
  bool gal_e5alt_used;
  /// True if GALILEO E6 is used in the solution
  bool gal_e6_used;
  /// True if BeiDou B1 is used in the solution
  bool bds_b1_used;
  /// True if BeiDou B2 is used in the solution
  bool bds_b2_used;
  /// True if BeiDou B3 is used in the solution
  bool bds_b3_used;
  /// True if QZSS L1CA is used in the solution
  bool qzss_l1_used;
  /// True if QZSS L2C is used in the solution
  bool qzss_l2_used;
  /// True if QZSS L5 is used in the solution
  bool qzss_l5_used;
} sbg_driver__msg__SbgGpsPosStatus;

// Struct for a sequence of sbg_driver__msg__SbgGpsPosStatus.
typedef struct sbg_driver__msg__SbgGpsPosStatus__Sequence
{
  sbg_driver__msg__SbgGpsPosStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sbg_driver__msg__SbgGpsPosStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_GPS_POS_STATUS__STRUCT_H_
