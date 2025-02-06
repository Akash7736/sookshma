// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sbg_driver:msg/SbgEkfEuler.idl
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__DETAIL__SBG_EKF_EULER__FUNCTIONS_H_
#define SBG_DRIVER__MSG__DETAIL__SBG_EKF_EULER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sbg_driver/msg/rosidl_generator_c__visibility_control.h"

#include "sbg_driver/msg/detail/sbg_ekf_euler__struct.h"

/// Initialize msg/SbgEkfEuler message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sbg_driver__msg__SbgEkfEuler
 * )) before or use
 * sbg_driver__msg__SbgEkfEuler__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sbg_driver
bool
sbg_driver__msg__SbgEkfEuler__init(sbg_driver__msg__SbgEkfEuler * msg);

/// Finalize msg/SbgEkfEuler message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbg_driver
void
sbg_driver__msg__SbgEkfEuler__fini(sbg_driver__msg__SbgEkfEuler * msg);

/// Create msg/SbgEkfEuler message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sbg_driver__msg__SbgEkfEuler__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sbg_driver
sbg_driver__msg__SbgEkfEuler *
sbg_driver__msg__SbgEkfEuler__create();

/// Destroy msg/SbgEkfEuler message.
/**
 * It calls
 * sbg_driver__msg__SbgEkfEuler__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbg_driver
void
sbg_driver__msg__SbgEkfEuler__destroy(sbg_driver__msg__SbgEkfEuler * msg);

/// Check for msg/SbgEkfEuler message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbg_driver
bool
sbg_driver__msg__SbgEkfEuler__are_equal(const sbg_driver__msg__SbgEkfEuler * lhs, const sbg_driver__msg__SbgEkfEuler * rhs);

/// Copy a msg/SbgEkfEuler message.
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
sbg_driver__msg__SbgEkfEuler__copy(
  const sbg_driver__msg__SbgEkfEuler * input,
  sbg_driver__msg__SbgEkfEuler * output);

/// Initialize array of msg/SbgEkfEuler messages.
/**
 * It allocates the memory for the number of elements and calls
 * sbg_driver__msg__SbgEkfEuler__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbg_driver
bool
sbg_driver__msg__SbgEkfEuler__Sequence__init(sbg_driver__msg__SbgEkfEuler__Sequence * array, size_t size);

/// Finalize array of msg/SbgEkfEuler messages.
/**
 * It calls
 * sbg_driver__msg__SbgEkfEuler__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbg_driver
void
sbg_driver__msg__SbgEkfEuler__Sequence__fini(sbg_driver__msg__SbgEkfEuler__Sequence * array);

/// Create array of msg/SbgEkfEuler messages.
/**
 * It allocates the memory for the array and calls
 * sbg_driver__msg__SbgEkfEuler__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sbg_driver
sbg_driver__msg__SbgEkfEuler__Sequence *
sbg_driver__msg__SbgEkfEuler__Sequence__create(size_t size);

/// Destroy array of msg/SbgEkfEuler messages.
/**
 * It calls
 * sbg_driver__msg__SbgEkfEuler__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbg_driver
void
sbg_driver__msg__SbgEkfEuler__Sequence__destroy(sbg_driver__msg__SbgEkfEuler__Sequence * array);

/// Check for msg/SbgEkfEuler message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sbg_driver
bool
sbg_driver__msg__SbgEkfEuler__Sequence__are_equal(const sbg_driver__msg__SbgEkfEuler__Sequence * lhs, const sbg_driver__msg__SbgEkfEuler__Sequence * rhs);

/// Copy an array of msg/SbgEkfEuler messages.
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
sbg_driver__msg__SbgEkfEuler__Sequence__copy(
  const sbg_driver__msg__SbgEkfEuler__Sequence * input,
  sbg_driver__msg__SbgEkfEuler__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__DETAIL__SBG_EKF_EULER__FUNCTIONS_H_
