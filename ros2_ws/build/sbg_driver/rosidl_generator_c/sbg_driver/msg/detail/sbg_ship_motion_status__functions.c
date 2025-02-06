// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sbg_driver:msg/SbgShipMotionStatus.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_ship_motion_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sbg_driver__msg__SbgShipMotionStatus__init(sbg_driver__msg__SbgShipMotionStatus * msg)
{
  if (!msg) {
    return false;
  }
  // heave_valid
  // heave_vel_aided
  // period_available
  // period_valid
  return true;
}

void
sbg_driver__msg__SbgShipMotionStatus__fini(sbg_driver__msg__SbgShipMotionStatus * msg)
{
  if (!msg) {
    return;
  }
  // heave_valid
  // heave_vel_aided
  // period_available
  // period_valid
}

bool
sbg_driver__msg__SbgShipMotionStatus__are_equal(const sbg_driver__msg__SbgShipMotionStatus * lhs, const sbg_driver__msg__SbgShipMotionStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // heave_valid
  if (lhs->heave_valid != rhs->heave_valid) {
    return false;
  }
  // heave_vel_aided
  if (lhs->heave_vel_aided != rhs->heave_vel_aided) {
    return false;
  }
  // period_available
  if (lhs->period_available != rhs->period_available) {
    return false;
  }
  // period_valid
  if (lhs->period_valid != rhs->period_valid) {
    return false;
  }
  return true;
}

bool
sbg_driver__msg__SbgShipMotionStatus__copy(
  const sbg_driver__msg__SbgShipMotionStatus * input,
  sbg_driver__msg__SbgShipMotionStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // heave_valid
  output->heave_valid = input->heave_valid;
  // heave_vel_aided
  output->heave_vel_aided = input->heave_vel_aided;
  // period_available
  output->period_available = input->period_available;
  // period_valid
  output->period_valid = input->period_valid;
  return true;
}

sbg_driver__msg__SbgShipMotionStatus *
sbg_driver__msg__SbgShipMotionStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgShipMotionStatus * msg = (sbg_driver__msg__SbgShipMotionStatus *)allocator.allocate(sizeof(sbg_driver__msg__SbgShipMotionStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sbg_driver__msg__SbgShipMotionStatus));
  bool success = sbg_driver__msg__SbgShipMotionStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sbg_driver__msg__SbgShipMotionStatus__destroy(sbg_driver__msg__SbgShipMotionStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sbg_driver__msg__SbgShipMotionStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sbg_driver__msg__SbgShipMotionStatus__Sequence__init(sbg_driver__msg__SbgShipMotionStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgShipMotionStatus * data = NULL;

  if (size) {
    data = (sbg_driver__msg__SbgShipMotionStatus *)allocator.zero_allocate(size, sizeof(sbg_driver__msg__SbgShipMotionStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sbg_driver__msg__SbgShipMotionStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sbg_driver__msg__SbgShipMotionStatus__fini(&data[i - 1]);
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
sbg_driver__msg__SbgShipMotionStatus__Sequence__fini(sbg_driver__msg__SbgShipMotionStatus__Sequence * array)
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
      sbg_driver__msg__SbgShipMotionStatus__fini(&array->data[i]);
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

sbg_driver__msg__SbgShipMotionStatus__Sequence *
sbg_driver__msg__SbgShipMotionStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgShipMotionStatus__Sequence * array = (sbg_driver__msg__SbgShipMotionStatus__Sequence *)allocator.allocate(sizeof(sbg_driver__msg__SbgShipMotionStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sbg_driver__msg__SbgShipMotionStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sbg_driver__msg__SbgShipMotionStatus__Sequence__destroy(sbg_driver__msg__SbgShipMotionStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sbg_driver__msg__SbgShipMotionStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sbg_driver__msg__SbgShipMotionStatus__Sequence__are_equal(const sbg_driver__msg__SbgShipMotionStatus__Sequence * lhs, const sbg_driver__msg__SbgShipMotionStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sbg_driver__msg__SbgShipMotionStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sbg_driver__msg__SbgShipMotionStatus__Sequence__copy(
  const sbg_driver__msg__SbgShipMotionStatus__Sequence * input,
  sbg_driver__msg__SbgShipMotionStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sbg_driver__msg__SbgShipMotionStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sbg_driver__msg__SbgShipMotionStatus * data =
      (sbg_driver__msg__SbgShipMotionStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sbg_driver__msg__SbgShipMotionStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sbg_driver__msg__SbgShipMotionStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sbg_driver__msg__SbgShipMotionStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
