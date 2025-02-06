// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sbg_driver:msg/SbgMagStatus.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_mag_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sbg_driver__msg__SbgMagStatus__init(sbg_driver__msg__SbgMagStatus * msg)
{
  if (!msg) {
    return false;
  }
  // mag_x
  // mag_y
  // mag_z
  // accel_x
  // accel_y
  // accel_z
  // mags_in_range
  // accels_in_range
  // calibration
  return true;
}

void
sbg_driver__msg__SbgMagStatus__fini(sbg_driver__msg__SbgMagStatus * msg)
{
  if (!msg) {
    return;
  }
  // mag_x
  // mag_y
  // mag_z
  // accel_x
  // accel_y
  // accel_z
  // mags_in_range
  // accels_in_range
  // calibration
}

bool
sbg_driver__msg__SbgMagStatus__are_equal(const sbg_driver__msg__SbgMagStatus * lhs, const sbg_driver__msg__SbgMagStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mag_x
  if (lhs->mag_x != rhs->mag_x) {
    return false;
  }
  // mag_y
  if (lhs->mag_y != rhs->mag_y) {
    return false;
  }
  // mag_z
  if (lhs->mag_z != rhs->mag_z) {
    return false;
  }
  // accel_x
  if (lhs->accel_x != rhs->accel_x) {
    return false;
  }
  // accel_y
  if (lhs->accel_y != rhs->accel_y) {
    return false;
  }
  // accel_z
  if (lhs->accel_z != rhs->accel_z) {
    return false;
  }
  // mags_in_range
  if (lhs->mags_in_range != rhs->mags_in_range) {
    return false;
  }
  // accels_in_range
  if (lhs->accels_in_range != rhs->accels_in_range) {
    return false;
  }
  // calibration
  if (lhs->calibration != rhs->calibration) {
    return false;
  }
  return true;
}

bool
sbg_driver__msg__SbgMagStatus__copy(
  const sbg_driver__msg__SbgMagStatus * input,
  sbg_driver__msg__SbgMagStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // mag_x
  output->mag_x = input->mag_x;
  // mag_y
  output->mag_y = input->mag_y;
  // mag_z
  output->mag_z = input->mag_z;
  // accel_x
  output->accel_x = input->accel_x;
  // accel_y
  output->accel_y = input->accel_y;
  // accel_z
  output->accel_z = input->accel_z;
  // mags_in_range
  output->mags_in_range = input->mags_in_range;
  // accels_in_range
  output->accels_in_range = input->accels_in_range;
  // calibration
  output->calibration = input->calibration;
  return true;
}

sbg_driver__msg__SbgMagStatus *
sbg_driver__msg__SbgMagStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgMagStatus * msg = (sbg_driver__msg__SbgMagStatus *)allocator.allocate(sizeof(sbg_driver__msg__SbgMagStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sbg_driver__msg__SbgMagStatus));
  bool success = sbg_driver__msg__SbgMagStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sbg_driver__msg__SbgMagStatus__destroy(sbg_driver__msg__SbgMagStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sbg_driver__msg__SbgMagStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sbg_driver__msg__SbgMagStatus__Sequence__init(sbg_driver__msg__SbgMagStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgMagStatus * data = NULL;

  if (size) {
    data = (sbg_driver__msg__SbgMagStatus *)allocator.zero_allocate(size, sizeof(sbg_driver__msg__SbgMagStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sbg_driver__msg__SbgMagStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sbg_driver__msg__SbgMagStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sbg_driver__msg__SbgMagStatus__Sequence__fini(sbg_driver__msg__SbgMagStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sbg_driver__msg__SbgMagStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sbg_driver__msg__SbgMagStatus__Sequence *
sbg_driver__msg__SbgMagStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgMagStatus__Sequence * array = (sbg_driver__msg__SbgMagStatus__Sequence *)allocator.allocate(sizeof(sbg_driver__msg__SbgMagStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sbg_driver__msg__SbgMagStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sbg_driver__msg__SbgMagStatus__Sequence__destroy(sbg_driver__msg__SbgMagStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sbg_driver__msg__SbgMagStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sbg_driver__msg__SbgMagStatus__Sequence__are_equal(const sbg_driver__msg__SbgMagStatus__Sequence * lhs, const sbg_driver__msg__SbgMagStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sbg_driver__msg__SbgMagStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sbg_driver__msg__SbgMagStatus__Sequence__copy(
  const sbg_driver__msg__SbgMagStatus__Sequence * input,
  sbg_driver__msg__SbgMagStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sbg_driver__msg__SbgMagStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sbg_driver__msg__SbgMagStatus * data =
      (sbg_driver__msg__SbgMagStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sbg_driver__msg__SbgMagStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sbg_driver__msg__SbgMagStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sbg_driver__msg__SbgMagStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
