// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sbg_driver:msg/SbgStatusGeneral.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_status_general__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sbg_driver__msg__SbgStatusGeneral__init(sbg_driver__msg__SbgStatusGeneral * msg)
{
  if (!msg) {
    return false;
  }
  // main_power
  // imu_power
  // gps_power
  // settings
  // temperature
  return true;
}

void
sbg_driver__msg__SbgStatusGeneral__fini(sbg_driver__msg__SbgStatusGeneral * msg)
{
  if (!msg) {
    return;
  }
  // main_power
  // imu_power
  // gps_power
  // settings
  // temperature
}

bool
sbg_driver__msg__SbgStatusGeneral__are_equal(const sbg_driver__msg__SbgStatusGeneral * lhs, const sbg_driver__msg__SbgStatusGeneral * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // main_power
  if (lhs->main_power != rhs->main_power) {
    return false;
  }
  // imu_power
  if (lhs->imu_power != rhs->imu_power) {
    return false;
  }
  // gps_power
  if (lhs->gps_power != rhs->gps_power) {
    return false;
  }
  // settings
  if (lhs->settings != rhs->settings) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  return true;
}

bool
sbg_driver__msg__SbgStatusGeneral__copy(
  const sbg_driver__msg__SbgStatusGeneral * input,
  sbg_driver__msg__SbgStatusGeneral * output)
{
  if (!input || !output) {
    return false;
  }
  // main_power
  output->main_power = input->main_power;
  // imu_power
  output->imu_power = input->imu_power;
  // gps_power
  output->gps_power = input->gps_power;
  // settings
  output->settings = input->settings;
  // temperature
  output->temperature = input->temperature;
  return true;
}

sbg_driver__msg__SbgStatusGeneral *
sbg_driver__msg__SbgStatusGeneral__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgStatusGeneral * msg = (sbg_driver__msg__SbgStatusGeneral *)allocator.allocate(sizeof(sbg_driver__msg__SbgStatusGeneral), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sbg_driver__msg__SbgStatusGeneral));
  bool success = sbg_driver__msg__SbgStatusGeneral__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sbg_driver__msg__SbgStatusGeneral__destroy(sbg_driver__msg__SbgStatusGeneral * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sbg_driver__msg__SbgStatusGeneral__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sbg_driver__msg__SbgStatusGeneral__Sequence__init(sbg_driver__msg__SbgStatusGeneral__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgStatusGeneral * data = NULL;

  if (size) {
    data = (sbg_driver__msg__SbgStatusGeneral *)allocator.zero_allocate(size, sizeof(sbg_driver__msg__SbgStatusGeneral), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sbg_driver__msg__SbgStatusGeneral__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sbg_driver__msg__SbgStatusGeneral__fini(&data[i - 1]);
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
sbg_driver__msg__SbgStatusGeneral__Sequence__fini(sbg_driver__msg__SbgStatusGeneral__Sequence * array)
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
      sbg_driver__msg__SbgStatusGeneral__fini(&array->data[i]);
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

sbg_driver__msg__SbgStatusGeneral__Sequence *
sbg_driver__msg__SbgStatusGeneral__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgStatusGeneral__Sequence * array = (sbg_driver__msg__SbgStatusGeneral__Sequence *)allocator.allocate(sizeof(sbg_driver__msg__SbgStatusGeneral__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sbg_driver__msg__SbgStatusGeneral__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sbg_driver__msg__SbgStatusGeneral__Sequence__destroy(sbg_driver__msg__SbgStatusGeneral__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sbg_driver__msg__SbgStatusGeneral__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sbg_driver__msg__SbgStatusGeneral__Sequence__are_equal(const sbg_driver__msg__SbgStatusGeneral__Sequence * lhs, const sbg_driver__msg__SbgStatusGeneral__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sbg_driver__msg__SbgStatusGeneral__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sbg_driver__msg__SbgStatusGeneral__Sequence__copy(
  const sbg_driver__msg__SbgStatusGeneral__Sequence * input,
  sbg_driver__msg__SbgStatusGeneral__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sbg_driver__msg__SbgStatusGeneral);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sbg_driver__msg__SbgStatusGeneral * data =
      (sbg_driver__msg__SbgStatusGeneral *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sbg_driver__msg__SbgStatusGeneral__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sbg_driver__msg__SbgStatusGeneral__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sbg_driver__msg__SbgStatusGeneral__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
