// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sbg_driver:msg/SbgEkfNav.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_EKF_NAV__FUNCTIONS_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_EKF_NAV__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sbg_driver/msg/rosidl_generator_c__visibility_control.h"

#include "sbg_driver/msg/detail/sbg_ekf_nav__struct.h"

/// Initialize msg/SbgEkfNav message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sbg_driver__msg__SbgEkfNav
 * )) before or use
 * sbg_driver__msg__SbgEkfNav__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sbg_driver
bool
sbg_driver__msg__SbgEkfNav__init(sbg_driver__msg__SbgEkfNav * msg);

/// Finalize msg/SbgEkfNav message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbg_driver
void
sbg_driver__msg__SbgEkfNav__fini(sbg_driver__msg__SbgEkfNav * msg);

/// Create msg/SbgEkfNav message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sbg_driver__msg__SbgEkfNav__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sbg_driver
sbg_driver__msg__SbgEkfNav *
sbg_driver__msg__SbgEkfNav__create();

/// Destroy msg/SbgEkfNav message.
/**
 * It calls
 * sbg_driver__msg__SbgEkfNav__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbg_driver
void
sbg_driver__msg__SbgEkfNav__destroy(sbg_driver__msg__SbgEkfNav * msg);

/// Check for msg/SbgEkfNav message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbg_driver
bool
sbg_driver__msg__SbgEkfNav__are_equal(const sbg_driver__msg__SbgEkfNav * lhs, const sbg_driver__msg__SbgEkfNav * rhs);

/// Copy a msg/SbgEkfNav message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbg_driver
bool
sbg_driver__msg__SbgEkfNav__copy(
  const sbg_driver__msg__SbgEkfNav * input,
  sbg_driver__msg__SbgEkfNav * output);

/// Initialize array of msg/SbgEkfNav messages.
/**
 * It allocates the memory for the number of elements and calls
 * sbg_driver__msg__SbgEkfNav__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbg_driver
bool
sbg_driver__msg__SbgEkfNav__Sequence__init(sbg_driver__msg__SbgEkfNav__Sequence * array, size_t size);

/// Finalize array of msg/SbgEkfNav messages.
/**
 * It calls
 * sbg_driver__msg__SbgEkfNav__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbg_driver
void
sbg_driver__msg__SbgEkfNav__Sequence__fini(sbg_driver__msg__SbgEkfNav__Sequence * array);

/// Create array of msg/SbgEkfNav messages.
/**
 * It allocates the memory for the array and calls
 * sbg_driver__msg__SbgEkfNav__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sbg_driver
sbg_driver__msg__SbgEkfNav__Sequence *
sbg_driver__msg__SbgEkfNav__Sequence__create(size_t size);

/// Destroy array of msg/SbgEkfNav messages.
/**
 * It calls
 * sbg_driver__msg__SbgEkfNav__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbg_driver
void
sbg_driver__msg__SbgEkfNav__Sequence__destroy(sbg_driver__msg__SbgEkfNav__Sequence * array);

/// Check for msg/SbgEkfNav message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbg_driver
bool
sbg_driver__msg__SbgEkfNav__Sequence__are_equal(const sbg_driver__msg__SbgEkfNav__Sequence * lhs, const sbg_driver__msg__SbgEkfNav__Sequence * rhs);

/// Copy an array of msg/SbgEkfNav messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbg_driver
bool
sbg_driver__msg__SbgEkfNav__Sequence__copy(
  const sbg_driver__msg__SbgEkfNav__Sequence * input,
  sbg_driver__msg__SbgEkfNav__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_EKF_NAV__FUNCTIONS_H_
