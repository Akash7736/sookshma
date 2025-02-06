// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sbg_driver:msg/SbgImuStatus.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_imu_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sbg_driver__msg__SbgImuStatus__init(sbg_driver__msg__SbgImuStatus * msg)
{
  if (!msg) {
    return false;
  }
  // imu_com
  // imu_status
  // imu_accel_x
  // imu_accel_y
  // imu_accel_z
  // imu_gyro_x
  // imu_gyro_y
  // imu_gyro_z
  // imu_accels_in_range
  // imu_gyros_in_range
  return true;
}

void
sbg_driver__msg__SbgImuStatus__fini(sbg_driver__msg__SbgImuStatus * msg)
{
  if (!msg) {
    return;
  }
  // imu_com
  // imu_status
  // imu_accel_x
  // imu_accel_y
  // imu_accel_z
  // imu_gyro_x
  // imu_gyro_y
  // imu_gyro_z
  // imu_accels_in_range
  // imu_gyros_in_range
}

bool
sbg_driver__msg__SbgImuStatus__are_equal(const sbg_driver__msg__SbgImuStatus * lhs, const sbg_driver__msg__SbgImuStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // imu_com
  if (lhs->imu_com != rhs->imu_com) {
    return false;
  }
  // imu_status
  if (lhs->imu_status != rhs->imu_status) {
    return false;
  }
  // imu_accel_x
  if (lhs->imu_accel_x != rhs->imu_accel_x) {
    return false;
  }
  // imu_accel_y
  if (lhs->imu_accel_y != rhs->imu_accel_y) {
    return false;
  }
  // imu_accel_z
  if (lhs->imu_accel_z != rhs->imu_accel_z) {
    return false;
  }
  // imu_gyro_x
  if (lhs->imu_gyro_x != rhs->imu_gyro_x) {
    return false;
  }
  // imu_gyro_y
  if (lhs->imu_gyro_y != rhs->imu_gyro_y) {
    return false;
  }
  // imu_gyro_z
  if (lhs->imu_gyro_z != rhs->imu_gyro_z) {
    return false;
  }
  // imu_accels_in_range
  if (lhs->imu_accels_in_range != rhs->imu_accels_in_range) {
    return false;
  }
  // imu_gyros_in_range
  if (lhs->imu_gyros_in_range != rhs->imu_gyros_in_range) {
    return false;
  }
  return true;
}

bool
sbg_driver__msg__SbgImuStatus__copy(
  const sbg_driver__msg__SbgImuStatus * input,
  sbg_driver__msg__SbgImuStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // imu_com
  output->imu_com = input->imu_com;
  // imu_status
  output->imu_status = input->imu_status;
  // imu_accel_x
  output->imu_accel_x = input->imu_accel_x;
  // imu_accel_y
  output->imu_accel_y = input->imu_accel_y;
  // imu_accel_z
  output->imu_accel_z = input->imu_accel_z;
  // imu_gyro_x
  output->imu_gyro_x = input->imu_gyro_x;
  // imu_gyro_y
  output->imu_gyro_y = input->imu_gyro_y;
  // imu_gyro_z
  output->imu_gyro_z = input->imu_gyro_z;
  // imu_accels_in_range
  output->imu_accels_in_range = input->imu_accels_in_range;
  // imu_gyros_in_range
  output->imu_gyros_in_range = input->imu_gyros_in_range;
  return true;
}

sbg_driver__msg__SbgImuStatus *
sbg_driver__msg__SbgImuStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgImuStatus * msg = (sbg_driver__msg__SbgImuStatus *)allocator.allocate(sizeof(sbg_driver__msg__SbgImuStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sbg_driver__msg__SbgImuStatus));
  bool success = sbg_driver__msg__SbgImuStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sbg_driver__msg__SbgImuStatus__destroy(sbg_driver__msg__SbgImuStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sbg_driver__msg__SbgImuStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sbg_driver__msg__SbgImuStatus__Sequence__init(sbg_driver__msg__SbgImuStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgImuStatus * data = NULL;

  if (size) {
    data = (sbg_driver__msg__SbgImuStatus *)allocator.zero_allocate(size, sizeof(sbg_driver__msg__SbgImuStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sbg_driver__msg__SbgImuStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sbg_driver__msg__SbgImuStatus__fini(&data[i - 1]);
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
sbg_driver__msg__SbgImuStatus__Sequence__fini(sbg_driver__msg__SbgImuStatus__Sequence * array)
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
      sbg_driver__msg__SbgImuStatus__fini(&array->data[i]);
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

sbg_driver__msg__SbgImuStatus__Sequence *
sbg_driver__msg__SbgImuStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgImuStatus__Sequence * array = (sbg_driver__msg__SbgImuStatus__Sequence *)allocator.allocate(sizeof(sbg_driver__msg__SbgImuStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sbg_driver__msg__SbgImuStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sbg_driver__msg__SbgImuStatus__Sequence__destroy(sbg_driver__msg__SbgImuStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sbg_driver__msg__SbgImuStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sbg_driver__msg__SbgImuStatus__Sequence__are_equal(const sbg_driver__msg__SbgImuStatus__Sequence * lhs, const sbg_driver__msg__SbgImuStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sbg_driver__msg__SbgImuStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sbg_driver__msg__SbgImuStatus__Sequence__copy(
  const sbg_driver__msg__SbgImuStatus__Sequence * input,
  sbg_driver__msg__SbgImuStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sbg_driver__msg__SbgImuStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sbg_driver__msg__SbgImuStatus * data =
      (sbg_driver__msg__SbgImuStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sbg_driver__msg__SbgImuStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sbg_driver__msg__SbgImuStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sbg_driver__msg__SbgImuStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
