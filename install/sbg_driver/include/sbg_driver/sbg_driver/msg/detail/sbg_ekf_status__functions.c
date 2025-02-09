// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sbg_driver:msg/SbgEkfStatus.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_ekf_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sbg_driver__msg__SbgEkfStatus__init(sbg_driver__msg__SbgEkfStatus * msg)
{
  if (!msg) {
    return false;
  }
  // solution_mode
  // attitude_valid
  // heading_valid
  // velocity_valid
  // position_valid
  // vert_ref_used
  // mag_ref_used
  // gps1_vel_used
  // gps1_pos_used
  // gps1_course_used
  // gps1_hdt_used
  // gps2_vel_used
  // gps2_pos_used
  // gps2_course_used
  // gps2_hdt_used
  // odo_used
  return true;
}

void
sbg_driver__msg__SbgEkfStatus__fini(sbg_driver__msg__SbgEkfStatus * msg)
{
  if (!msg) {
    return;
  }
  // solution_mode
  // attitude_valid
  // heading_valid
  // velocity_valid
  // position_valid
  // vert_ref_used
  // mag_ref_used
  // gps1_vel_used
  // gps1_pos_used
  // gps1_course_used
  // gps1_hdt_used
  // gps2_vel_used
  // gps2_pos_used
  // gps2_course_used
  // gps2_hdt_used
  // odo_used
}

bool
sbg_driver__msg__SbgEkfStatus__are_equal(const sbg_driver__msg__SbgEkfStatus * lhs, const sbg_driver__msg__SbgEkfStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // solution_mode
  if (lhs->solution_mode != rhs->solution_mode) {
    return false;
  }
  // attitude_valid
  if (lhs->attitude_valid != rhs->attitude_valid) {
    return false;
  }
  // heading_valid
  if (lhs->heading_valid != rhs->heading_valid) {
    return false;
  }
  // velocity_valid
  if (lhs->velocity_valid != rhs->velocity_valid) {
    return false;
  }
  // position_valid
  if (lhs->position_valid != rhs->position_valid) {
    return false;
  }
  // vert_ref_used
  if (lhs->vert_ref_used != rhs->vert_ref_used) {
    return false;
  }
  // mag_ref_used
  if (lhs->mag_ref_used != rhs->mag_ref_used) {
    return false;
  }
  // gps1_vel_used
  if (lhs->gps1_vel_used != rhs->gps1_vel_used) {
    return false;
  }
  // gps1_pos_used
  if (lhs->gps1_pos_used != rhs->gps1_pos_used) {
    return false;
  }
  // gps1_course_used
  if (lhs->gps1_course_used != rhs->gps1_course_used) {
    return false;
  }
  // gps1_hdt_used
  if (lhs->gps1_hdt_used != rhs->gps1_hdt_used) {
    return false;
  }
  // gps2_vel_used
  if (lhs->gps2_vel_used != rhs->gps2_vel_used) {
    return false;
  }
  // gps2_pos_used
  if (lhs->gps2_pos_used != rhs->gps2_pos_used) {
    return false;
  }
  // gps2_course_used
  if (lhs->gps2_course_used != rhs->gps2_course_used) {
    return false;
  }
  // gps2_hdt_used
  if (lhs->gps2_hdt_used != rhs->gps2_hdt_used) {
    return false;
  }
  // odo_used
  if (lhs->odo_used != rhs->odo_used) {
    return false;
  }
  return true;
}

bool
sbg_driver__msg__SbgEkfStatus__copy(
  const sbg_driver__msg__SbgEkfStatus * input,
  sbg_driver__msg__SbgEkfStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // solution_mode
  output->solution_mode = input->solution_mode;
  // attitude_valid
  output->attitude_valid = input->attitude_valid;
  // heading_valid
  output->heading_valid = input->heading_valid;
  // velocity_valid
  output->velocity_valid = input->velocity_valid;
  // position_valid
  output->position_valid = input->position_valid;
  // vert_ref_used
  output->vert_ref_used = input->vert_ref_used;
  // mag_ref_used
  output->mag_ref_used = input->mag_ref_used;
  // gps1_vel_used
  output->gps1_vel_used = input->gps1_vel_used;
  // gps1_pos_used
  output->gps1_pos_used = input->gps1_pos_used;
  // gps1_course_used
  output->gps1_course_used = input->gps1_course_used;
  // gps1_hdt_used
  output->gps1_hdt_used = input->gps1_hdt_used;
  // gps2_vel_used
  output->gps2_vel_used = input->gps2_vel_used;
  // gps2_pos_used
  output->gps2_pos_used = input->gps2_pos_used;
  // gps2_course_used
  output->gps2_course_used = input->gps2_course_used;
  // gps2_hdt_used
  output->gps2_hdt_used = input->gps2_hdt_used;
  // odo_used
  output->odo_used = input->odo_used;
  return true;
}

sbg_driver__msg__SbgEkfStatus *
sbg_driver__msg__SbgEkfStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgEkfStatus * msg = (sbg_driver__msg__SbgEkfStatus *)allocator.allocate(sizeof(sbg_driver__msg__SbgEkfStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sbg_driver__msg__SbgEkfStatus));
  bool success = sbg_driver__msg__SbgEkfStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sbg_driver__msg__SbgEkfStatus__destroy(sbg_driver__msg__SbgEkfStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sbg_driver__msg__SbgEkfStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sbg_driver__msg__SbgEkfStatus__Sequence__init(sbg_driver__msg__SbgEkfStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgEkfStatus * data = NULL;

  if (size) {
    data = (sbg_driver__msg__SbgEkfStatus *)allocator.zero_allocate(size, sizeof(sbg_driver__msg__SbgEkfStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sbg_driver__msg__SbgEkfStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sbg_driver__msg__SbgEkfStatus__fini(&data[i - 1]);
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
sbg_driver__msg__SbgEkfStatus__Sequence__fini(sbg_driver__msg__SbgEkfStatus__Sequence * array)
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
      sbg_driver__msg__SbgEkfStatus__fini(&array->data[i]);
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

sbg_driver__msg__SbgEkfStatus__Sequence *
sbg_driver__msg__SbgEkfStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgEkfStatus__Sequence * array = (sbg_driver__msg__SbgEkfStatus__Sequence *)allocator.allocate(sizeof(sbg_driver__msg__SbgEkfStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sbg_driver__msg__SbgEkfStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sbg_driver__msg__SbgEkfStatus__Sequence__destroy(sbg_driver__msg__SbgEkfStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sbg_driver__msg__SbgEkfStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sbg_driver__msg__SbgEkfStatus__Sequence__are_equal(const sbg_driver__msg__SbgEkfStatus__Sequence * lhs, const sbg_driver__msg__SbgEkfStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sbg_driver__msg__SbgEkfStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sbg_driver__msg__SbgEkfStatus__Sequence__copy(
  const sbg_driver__msg__SbgEkfStatus__Sequence * input,
  sbg_driver__msg__SbgEkfStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sbg_driver__msg__SbgEkfStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sbg_driver__msg__SbgEkfStatus * data =
      (sbg_driver__msg__SbgEkfStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sbg_driver__msg__SbgEkfStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sbg_driver__msg__SbgEkfStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sbg_driver__msg__SbgEkfStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
