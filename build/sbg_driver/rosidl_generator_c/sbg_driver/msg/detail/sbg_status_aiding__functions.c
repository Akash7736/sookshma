// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sbg_driver:msg/SbgStatusAiding.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_status_aiding__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sbg_driver__msg__SbgStatusAiding__init(sbg_driver__msg__SbgStatusAiding * msg)
{
  if (!msg) {
    return false;
  }
  // gps1_pos_recv
  // gps1_vel_recv
  // gps1_hdt_recv
  // gps1_utc_recv
  // mag_recv
  // odo_recv
  // dvl_recv
  return true;
}

void
sbg_driver__msg__SbgStatusAiding__fini(sbg_driver__msg__SbgStatusAiding * msg)
{
  if (!msg) {
    return;
  }
  // gps1_pos_recv
  // gps1_vel_recv
  // gps1_hdt_recv
  // gps1_utc_recv
  // mag_recv
  // odo_recv
  // dvl_recv
}

bool
sbg_driver__msg__SbgStatusAiding__are_equal(const sbg_driver__msg__SbgStatusAiding * lhs, const sbg_driver__msg__SbgStatusAiding * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gps1_pos_recv
  if (lhs->gps1_pos_recv != rhs->gps1_pos_recv) {
    return false;
  }
  // gps1_vel_recv
  if (lhs->gps1_vel_recv != rhs->gps1_vel_recv) {
    return false;
  }
  // gps1_hdt_recv
  if (lhs->gps1_hdt_recv != rhs->gps1_hdt_recv) {
    return false;
  }
  // gps1_utc_recv
  if (lhs->gps1_utc_recv != rhs->gps1_utc_recv) {
    return false;
  }
  // mag_recv
  if (lhs->mag_recv != rhs->mag_recv) {
    return false;
  }
  // odo_recv
  if (lhs->odo_recv != rhs->odo_recv) {
    return false;
  }
  // dvl_recv
  if (lhs->dvl_recv != rhs->dvl_recv) {
    return false;
  }
  return true;
}

bool
sbg_driver__msg__SbgStatusAiding__copy(
  const sbg_driver__msg__SbgStatusAiding * input,
  sbg_driver__msg__SbgStatusAiding * output)
{
  if (!input || !output) {
    return false;
  }
  // gps1_pos_recv
  output->gps1_pos_recv = input->gps1_pos_recv;
  // gps1_vel_recv
  output->gps1_vel_recv = input->gps1_vel_recv;
  // gps1_hdt_recv
  output->gps1_hdt_recv = input->gps1_hdt_recv;
  // gps1_utc_recv
  output->gps1_utc_recv = input->gps1_utc_recv;
  // mag_recv
  output->mag_recv = input->mag_recv;
  // odo_recv
  output->odo_recv = input->odo_recv;
  // dvl_recv
  output->dvl_recv = input->dvl_recv;
  return true;
}

sbg_driver__msg__SbgStatusAiding *
sbg_driver__msg__SbgStatusAiding__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgStatusAiding * msg = (sbg_driver__msg__SbgStatusAiding *)allocator.allocate(sizeof(sbg_driver__msg__SbgStatusAiding), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sbg_driver__msg__SbgStatusAiding));
  bool success = sbg_driver__msg__SbgStatusAiding__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sbg_driver__msg__SbgStatusAiding__destroy(sbg_driver__msg__SbgStatusAiding * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sbg_driver__msg__SbgStatusAiding__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sbg_driver__msg__SbgStatusAiding__Sequence__init(sbg_driver__msg__SbgStatusAiding__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgStatusAiding * data = NULL;

  if (size) {
    data = (sbg_driver__msg__SbgStatusAiding *)allocator.zero_allocate(size, sizeof(sbg_driver__msg__SbgStatusAiding), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sbg_driver__msg__SbgStatusAiding__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sbg_driver__msg__SbgStatusAiding__fini(&data[i - 1]);
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
sbg_driver__msg__SbgStatusAiding__Sequence__fini(sbg_driver__msg__SbgStatusAiding__Sequence * array)
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
      sbg_driver__msg__SbgStatusAiding__fini(&array->data[i]);
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

sbg_driver__msg__SbgStatusAiding__Sequence *
sbg_driver__msg__SbgStatusAiding__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgStatusAiding__Sequence * array = (sbg_driver__msg__SbgStatusAiding__Sequence *)allocator.allocate(sizeof(sbg_driver__msg__SbgStatusAiding__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sbg_driver__msg__SbgStatusAiding__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sbg_driver__msg__SbgStatusAiding__Sequence__destroy(sbg_driver__msg__SbgStatusAiding__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sbg_driver__msg__SbgStatusAiding__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sbg_driver__msg__SbgStatusAiding__Sequence__are_equal(const sbg_driver__msg__SbgStatusAiding__Sequence * lhs, const sbg_driver__msg__SbgStatusAiding__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sbg_driver__msg__SbgStatusAiding__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sbg_driver__msg__SbgStatusAiding__Sequence__copy(
  const sbg_driver__msg__SbgStatusAiding__Sequence * input,
  sbg_driver__msg__SbgStatusAiding__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sbg_driver__msg__SbgStatusAiding);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sbg_driver__msg__SbgStatusAiding * data =
      (sbg_driver__msg__SbgStatusAiding *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sbg_driver__msg__SbgStatusAiding__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sbg_driver__msg__SbgStatusAiding__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sbg_driver__msg__SbgStatusAiding__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
