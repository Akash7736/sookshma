// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sbg_driver:msg/SbgUtcTimeStatus.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_utc_time_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sbg_driver__msg__SbgUtcTimeStatus__init(sbg_driver__msg__SbgUtcTimeStatus * msg)
{
  if (!msg) {
    return false;
  }
  // clock_stable
  // clock_status
  // clock_utc_sync
  // clock_utc_status
  return true;
}

void
sbg_driver__msg__SbgUtcTimeStatus__fini(sbg_driver__msg__SbgUtcTimeStatus * msg)
{
  if (!msg) {
    return;
  }
  // clock_stable
  // clock_status
  // clock_utc_sync
  // clock_utc_status
}

bool
sbg_driver__msg__SbgUtcTimeStatus__are_equal(const sbg_driver__msg__SbgUtcTimeStatus * lhs, const sbg_driver__msg__SbgUtcTimeStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // clock_stable
  if (lhs->clock_stable != rhs->clock_stable) {
    return false;
  }
  // clock_status
  if (lhs->clock_status != rhs->clock_status) {
    return false;
  }
  // clock_utc_sync
  if (lhs->clock_utc_sync != rhs->clock_utc_sync) {
    return false;
  }
  // clock_utc_status
  if (lhs->clock_utc_status != rhs->clock_utc_status) {
    return false;
  }
  return true;
}

bool
sbg_driver__msg__SbgUtcTimeStatus__copy(
  const sbg_driver__msg__SbgUtcTimeStatus * input,
  sbg_driver__msg__SbgUtcTimeStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // clock_stable
  output->clock_stable = input->clock_stable;
  // clock_status
  output->clock_status = input->clock_status;
  // clock_utc_sync
  output->clock_utc_sync = input->clock_utc_sync;
  // clock_utc_status
  output->clock_utc_status = input->clock_utc_status;
  return true;
}

sbg_driver__msg__SbgUtcTimeStatus *
sbg_driver__msg__SbgUtcTimeStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgUtcTimeStatus * msg = (sbg_driver__msg__SbgUtcTimeStatus *)allocator.allocate(sizeof(sbg_driver__msg__SbgUtcTimeStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sbg_driver__msg__SbgUtcTimeStatus));
  bool success = sbg_driver__msg__SbgUtcTimeStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sbg_driver__msg__SbgUtcTimeStatus__destroy(sbg_driver__msg__SbgUtcTimeStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sbg_driver__msg__SbgUtcTimeStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sbg_driver__msg__SbgUtcTimeStatus__Sequence__init(sbg_driver__msg__SbgUtcTimeStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgUtcTimeStatus * data = NULL;

  if (size) {
    data = (sbg_driver__msg__SbgUtcTimeStatus *)allocator.zero_allocate(size, sizeof(sbg_driver__msg__SbgUtcTimeStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sbg_driver__msg__SbgUtcTimeStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sbg_driver__msg__SbgUtcTimeStatus__fini(&data[i - 1]);
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
sbg_driver__msg__SbgUtcTimeStatus__Sequence__fini(sbg_driver__msg__SbgUtcTimeStatus__Sequence * array)
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
      sbg_driver__msg__SbgUtcTimeStatus__fini(&array->data[i]);
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

sbg_driver__msg__SbgUtcTimeStatus__Sequence *
sbg_driver__msg__SbgUtcTimeStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgUtcTimeStatus__Sequence * array = (sbg_driver__msg__SbgUtcTimeStatus__Sequence *)allocator.allocate(sizeof(sbg_driver__msg__SbgUtcTimeStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sbg_driver__msg__SbgUtcTimeStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sbg_driver__msg__SbgUtcTimeStatus__Sequence__destroy(sbg_driver__msg__SbgUtcTimeStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sbg_driver__msg__SbgUtcTimeStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sbg_driver__msg__SbgUtcTimeStatus__Sequence__are_equal(const sbg_driver__msg__SbgUtcTimeStatus__Sequence * lhs, const sbg_driver__msg__SbgUtcTimeStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sbg_driver__msg__SbgUtcTimeStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sbg_driver__msg__SbgUtcTimeStatus__Sequence__copy(
  const sbg_driver__msg__SbgUtcTimeStatus__Sequence * input,
  sbg_driver__msg__SbgUtcTimeStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sbg_driver__msg__SbgUtcTimeStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sbg_driver__msg__SbgUtcTimeStatus * data =
      (sbg_driver__msg__SbgUtcTimeStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sbg_driver__msg__SbgUtcTimeStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sbg_driver__msg__SbgUtcTimeStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sbg_driver__msg__SbgUtcTimeStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
