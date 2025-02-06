// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sbg_driver:msg/SbgEvent.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sbg_driver__msg__SbgEvent__init(sbg_driver__msg__SbgEvent * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sbg_driver__msg__SbgEvent__fini(msg);
    return false;
  }
  // time_stamp
  // overflow
  // offset_0_valid
  // offset_1_valid
  // offset_2_valid
  // offset_3_valid
  // time_offset_0
  // time_offset_1
  // time_offset_2
  // time_offset_3
  return true;
}

void
sbg_driver__msg__SbgEvent__fini(sbg_driver__msg__SbgEvent * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // time_stamp
  // overflow
  // offset_0_valid
  // offset_1_valid
  // offset_2_valid
  // offset_3_valid
  // time_offset_0
  // time_offset_1
  // time_offset_2
  // time_offset_3
}

bool
sbg_driver__msg__SbgEvent__are_equal(const sbg_driver__msg__SbgEvent * lhs, const sbg_driver__msg__SbgEvent * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // time_stamp
  if (lhs->time_stamp != rhs->time_stamp) {
    return false;
  }
  // overflow
  if (lhs->overflow != rhs->overflow) {
    return false;
  }
  // offset_0_valid
  if (lhs->offset_0_valid != rhs->offset_0_valid) {
    return false;
  }
  // offset_1_valid
  if (lhs->offset_1_valid != rhs->offset_1_valid) {
    return false;
  }
  // offset_2_valid
  if (lhs->offset_2_valid != rhs->offset_2_valid) {
    return false;
  }
  // offset_3_valid
  if (lhs->offset_3_valid != rhs->offset_3_valid) {
    return false;
  }
  // time_offset_0
  if (lhs->time_offset_0 != rhs->time_offset_0) {
    return false;
  }
  // time_offset_1
  if (lhs->time_offset_1 != rhs->time_offset_1) {
    return false;
  }
  // time_offset_2
  if (lhs->time_offset_2 != rhs->time_offset_2) {
    return false;
  }
  // time_offset_3
  if (lhs->time_offset_3 != rhs->time_offset_3) {
    return false;
  }
  return true;
}

bool
sbg_driver__msg__SbgEvent__copy(
  const sbg_driver__msg__SbgEvent * input,
  sbg_driver__msg__SbgEvent * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // time_stamp
  output->time_stamp = input->time_stamp;
  // overflow
  output->overflow = input->overflow;
  // offset_0_valid
  output->offset_0_valid = input->offset_0_valid;
  // offset_1_valid
  output->offset_1_valid = input->offset_1_valid;
  // offset_2_valid
  output->offset_2_valid = input->offset_2_valid;
  // offset_3_valid
  output->offset_3_valid = input->offset_3_valid;
  // time_offset_0
  output->time_offset_0 = input->time_offset_0;
  // time_offset_1
  output->time_offset_1 = input->time_offset_1;
  // time_offset_2
  output->time_offset_2 = input->time_offset_2;
  // time_offset_3
  output->time_offset_3 = input->time_offset_3;
  return true;
}

sbg_driver__msg__SbgEvent *
sbg_driver__msg__SbgEvent__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgEvent * msg = (sbg_driver__msg__SbgEvent *)allocator.allocate(sizeof(sbg_driver__msg__SbgEvent), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sbg_driver__msg__SbgEvent));
  bool success = sbg_driver__msg__SbgEvent__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sbg_driver__msg__SbgEvent__destroy(sbg_driver__msg__SbgEvent * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sbg_driver__msg__SbgEvent__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sbg_driver__msg__SbgEvent__Sequence__init(sbg_driver__msg__SbgEvent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgEvent * data = NULL;

  if (size) {
    data = (sbg_driver__msg__SbgEvent *)allocator.zero_allocate(size, sizeof(sbg_driver__msg__SbgEvent), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sbg_driver__msg__SbgEvent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sbg_driver__msg__SbgEvent__fini(&data[i - 1]);
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
sbg_driver__msg__SbgEvent__Sequence__fini(sbg_driver__msg__SbgEvent__Sequence * array)
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
      sbg_driver__msg__SbgEvent__fini(&array->data[i]);
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

sbg_driver__msg__SbgEvent__Sequence *
sbg_driver__msg__SbgEvent__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgEvent__Sequence * array = (sbg_driver__msg__SbgEvent__Sequence *)allocator.allocate(sizeof(sbg_driver__msg__SbgEvent__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sbg_driver__msg__SbgEvent__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sbg_driver__msg__SbgEvent__Sequence__destroy(sbg_driver__msg__SbgEvent__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sbg_driver__msg__SbgEvent__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sbg_driver__msg__SbgEvent__Sequence__are_equal(const sbg_driver__msg__SbgEvent__Sequence * lhs, const sbg_driver__msg__SbgEvent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sbg_driver__msg__SbgEvent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sbg_driver__msg__SbgEvent__Sequence__copy(
  const sbg_driver__msg__SbgEvent__Sequence * input,
  sbg_driver__msg__SbgEvent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sbg_driver__msg__SbgEvent);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sbg_driver__msg__SbgEvent * data =
      (sbg_driver__msg__SbgEvent *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sbg_driver__msg__SbgEvent__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sbg_driver__msg__SbgEvent__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sbg_driver__msg__SbgEvent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
