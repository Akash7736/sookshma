// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sbg_driver:msg/SbgImuData.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_imu_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `imu_status`
#include "sbg_driver/msg/detail/sbg_imu_status__functions.h"
// Member `accel`
// Member `gyro`
// Member `delta_vel`
// Member `delta_angle`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
sbg_driver__msg__SbgImuData__init(sbg_driver__msg__SbgImuData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sbg_driver__msg__SbgImuData__fini(msg);
    return false;
  }
  // time_stamp
  // imu_status
  if (!sbg_driver__msg__SbgImuStatus__init(&msg->imu_status)) {
    sbg_driver__msg__SbgImuData__fini(msg);
    return false;
  }
  // accel
  if (!geometry_msgs__msg__Vector3__init(&msg->accel)) {
    sbg_driver__msg__SbgImuData__fini(msg);
    return false;
  }
  // gyro
  if (!geometry_msgs__msg__Vector3__init(&msg->gyro)) {
    sbg_driver__msg__SbgImuData__fini(msg);
    return false;
  }
  // temp
  // delta_vel
  if (!geometry_msgs__msg__Vector3__init(&msg->delta_vel)) {
    sbg_driver__msg__SbgImuData__fini(msg);
    return false;
  }
  // delta_angle
  if (!geometry_msgs__msg__Vector3__init(&msg->delta_angle)) {
    sbg_driver__msg__SbgImuData__fini(msg);
    return false;
  }
  return true;
}

void
sbg_driver__msg__SbgImuData__fini(sbg_driver__msg__SbgImuData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // time_stamp
  // imu_status
  sbg_driver__msg__SbgImuStatus__fini(&msg->imu_status);
  // accel
  geometry_msgs__msg__Vector3__fini(&msg->accel);
  // gyro
  geometry_msgs__msg__Vector3__fini(&msg->gyro);
  // temp
  // delta_vel
  geometry_msgs__msg__Vector3__fini(&msg->delta_vel);
  // delta_angle
  geometry_msgs__msg__Vector3__fini(&msg->delta_angle);
}

bool
sbg_driver__msg__SbgImuData__are_equal(const sbg_driver__msg__SbgImuData * lhs, const sbg_driver__msg__SbgImuData * rhs)
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
  // imu_status
  if (!sbg_driver__msg__SbgImuStatus__are_equal(
      &(lhs->imu_status), &(rhs->imu_status)))
  {
    return false;
  }
  // accel
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->accel), &(rhs->accel)))
  {
    return false;
  }
  // gyro
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->gyro), &(rhs->gyro)))
  {
    return false;
  }
  // temp
  if (lhs->temp != rhs->temp) {
    return false;
  }
  // delta_vel
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->delta_vel), &(rhs->delta_vel)))
  {
    return false;
  }
  // delta_angle
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->delta_angle), &(rhs->delta_angle)))
  {
    return false;
  }
  return true;
}

bool
sbg_driver__msg__SbgImuData__copy(
  const sbg_driver__msg__SbgImuData * input,
  sbg_driver__msg__SbgImuData * output)
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
  // imu_status
  if (!sbg_driver__msg__SbgImuStatus__copy(
      &(input->imu_status), &(output->imu_status)))
  {
    return false;
  }
  // accel
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->accel), &(output->accel)))
  {
    return false;
  }
  // gyro
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->gyro), &(output->gyro)))
  {
    return false;
  }
  // temp
  output->temp = input->temp;
  // delta_vel
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->delta_vel), &(output->delta_vel)))
  {
    return false;
  }
  // delta_angle
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->delta_angle), &(output->delta_angle)))
  {
    return false;
  }
  return true;
}

sbg_driver__msg__SbgImuData *
sbg_driver__msg__SbgImuData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgImuData * msg = (sbg_driver__msg__SbgImuData *)allocator.allocate(sizeof(sbg_driver__msg__SbgImuData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sbg_driver__msg__SbgImuData));
  bool success = sbg_driver__msg__SbgImuData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sbg_driver__msg__SbgImuData__destroy(sbg_driver__msg__SbgImuData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sbg_driver__msg__SbgImuData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sbg_driver__msg__SbgImuData__Sequence__init(sbg_driver__msg__SbgImuData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgImuData * data = NULL;

  if (size) {
    data = (sbg_driver__msg__SbgImuData *)allocator.zero_allocate(size, sizeof(sbg_driver__msg__SbgImuData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sbg_driver__msg__SbgImuData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sbg_driver__msg__SbgImuData__fini(&data[i - 1]);
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
sbg_driver__msg__SbgImuData__Sequence__fini(sbg_driver__msg__SbgImuData__Sequence * array)
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
      sbg_driver__msg__SbgImuData__fini(&array->data[i]);
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

sbg_driver__msg__SbgImuData__Sequence *
sbg_driver__msg__SbgImuData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgImuData__Sequence * array = (sbg_driver__msg__SbgImuData__Sequence *)allocator.allocate(sizeof(sbg_driver__msg__SbgImuData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sbg_driver__msg__SbgImuData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sbg_driver__msg__SbgImuData__Sequence__destroy(sbg_driver__msg__SbgImuData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sbg_driver__msg__SbgImuData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sbg_driver__msg__SbgImuData__Sequence__are_equal(const sbg_driver__msg__SbgImuData__Sequence * lhs, const sbg_driver__msg__SbgImuData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sbg_driver__msg__SbgImuData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sbg_driver__msg__SbgImuData__Sequence__copy(
  const sbg_driver__msg__SbgImuData__Sequence * input,
  sbg_driver__msg__SbgImuData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sbg_driver__msg__SbgImuData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sbg_driver__msg__SbgImuData * data =
      (sbg_driver__msg__SbgImuData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sbg_driver__msg__SbgImuData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sbg_driver__msg__SbgImuData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sbg_driver__msg__SbgImuData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
