// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sbg_driver:msg/SbgStatusCom.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_status_com__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sbg_driver__msg__SbgStatusCom__init(sbg_driver__msg__SbgStatusCom * msg)
{
  if (!msg) {
    return false;
  }
  // port_a
  // port_b
  // port_c
  // port_d
  // port_e
  // port_a_rx
  // port_a_tx
  // port_b_rx
  // port_b_tx
  // port_c_rx
  // port_c_tx
  // port_d_rx
  // port_d_tx
  // port_e_rx
  // port_e_tx
  // can_rx
  // can_tx
  // can_status
  return true;
}

void
sbg_driver__msg__SbgStatusCom__fini(sbg_driver__msg__SbgStatusCom * msg)
{
  if (!msg) {
    return;
  }
  // port_a
  // port_b
  // port_c
  // port_d
  // port_e
  // port_a_rx
  // port_a_tx
  // port_b_rx
  // port_b_tx
  // port_c_rx
  // port_c_tx
  // port_d_rx
  // port_d_tx
  // port_e_rx
  // port_e_tx
  // can_rx
  // can_tx
  // can_status
}

bool
sbg_driver__msg__SbgStatusCom__are_equal(const sbg_driver__msg__SbgStatusCom * lhs, const sbg_driver__msg__SbgStatusCom * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // port_a
  if (lhs->port_a != rhs->port_a) {
    return false;
  }
  // port_b
  if (lhs->port_b != rhs->port_b) {
    return false;
  }
  // port_c
  if (lhs->port_c != rhs->port_c) {
    return false;
  }
  // port_d
  if (lhs->port_d != rhs->port_d) {
    return false;
  }
  // port_e
  if (lhs->port_e != rhs->port_e) {
    return false;
  }
  // port_a_rx
  if (lhs->port_a_rx != rhs->port_a_rx) {
    return false;
  }
  // port_a_tx
  if (lhs->port_a_tx != rhs->port_a_tx) {
    return false;
  }
  // port_b_rx
  if (lhs->port_b_rx != rhs->port_b_rx) {
    return false;
  }
  // port_b_tx
  if (lhs->port_b_tx != rhs->port_b_tx) {
    return false;
  }
  // port_c_rx
  if (lhs->port_c_rx != rhs->port_c_rx) {
    return false;
  }
  // port_c_tx
  if (lhs->port_c_tx != rhs->port_c_tx) {
    return false;
  }
  // port_d_rx
  if (lhs->port_d_rx != rhs->port_d_rx) {
    return false;
  }
  // port_d_tx
  if (lhs->port_d_tx != rhs->port_d_tx) {
    return false;
  }
  // port_e_rx
  if (lhs->port_e_rx != rhs->port_e_rx) {
    return false;
  }
  // port_e_tx
  if (lhs->port_e_tx != rhs->port_e_tx) {
    return false;
  }
  // can_rx
  if (lhs->can_rx != rhs->can_rx) {
    return false;
  }
  // can_tx
  if (lhs->can_tx != rhs->can_tx) {
    return false;
  }
  // can_status
  if (lhs->can_status != rhs->can_status) {
    return false;
  }
  return true;
}

bool
sbg_driver__msg__SbgStatusCom__copy(
  const sbg_driver__msg__SbgStatusCom * input,
  sbg_driver__msg__SbgStatusCom * output)
{
  if (!input || !output) {
    return false;
  }
  // port_a
  output->port_a = input->port_a;
  // port_b
  output->port_b = input->port_b;
  // port_c
  output->port_c = input->port_c;
  // port_d
  output->port_d = input->port_d;
  // port_e
  output->port_e = input->port_e;
  // port_a_rx
  output->port_a_rx = input->port_a_rx;
  // port_a_tx
  output->port_a_tx = input->port_a_tx;
  // port_b_rx
  output->port_b_rx = input->port_b_rx;
  // port_b_tx
  output->port_b_tx = input->port_b_tx;
  // port_c_rx
  output->port_c_rx = input->port_c_rx;
  // port_c_tx
  output->port_c_tx = input->port_c_tx;
  // port_d_rx
  output->port_d_rx = input->port_d_rx;
  // port_d_tx
  output->port_d_tx = input->port_d_tx;
  // port_e_rx
  output->port_e_rx = input->port_e_rx;
  // port_e_tx
  output->port_e_tx = input->port_e_tx;
  // can_rx
  output->can_rx = input->can_rx;
  // can_tx
  output->can_tx = input->can_tx;
  // can_status
  output->can_status = input->can_status;
  return true;
}

sbg_driver__msg__SbgStatusCom *
sbg_driver__msg__SbgStatusCom__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgStatusCom * msg = (sbg_driver__msg__SbgStatusCom *)allocator.allocate(sizeof(sbg_driver__msg__SbgStatusCom), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sbg_driver__msg__SbgStatusCom));
  bool success = sbg_driver__msg__SbgStatusCom__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sbg_driver__msg__SbgStatusCom__destroy(sbg_driver__msg__SbgStatusCom * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sbg_driver__msg__SbgStatusCom__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sbg_driver__msg__SbgStatusCom__Sequence__init(sbg_driver__msg__SbgStatusCom__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgStatusCom * data = NULL;

  if (size) {
    data = (sbg_driver__msg__SbgStatusCom *)allocator.zero_allocate(size, sizeof(sbg_driver__msg__SbgStatusCom), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sbg_driver__msg__SbgStatusCom__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sbg_driver__msg__SbgStatusCom__fini(&data[i - 1]);
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
sbg_driver__msg__SbgStatusCom__Sequence__fini(sbg_driver__msg__SbgStatusCom__Sequence * array)
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
      sbg_driver__msg__SbgStatusCom__fini(&array->data[i]);
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

sbg_driver__msg__SbgStatusCom__Sequence *
sbg_driver__msg__SbgStatusCom__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgStatusCom__Sequence * array = (sbg_driver__msg__SbgStatusCom__Sequence *)allocator.allocate(sizeof(sbg_driver__msg__SbgStatusCom__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sbg_driver__msg__SbgStatusCom__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sbg_driver__msg__SbgStatusCom__Sequence__destroy(sbg_driver__msg__SbgStatusCom__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sbg_driver__msg__SbgStatusCom__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sbg_driver__msg__SbgStatusCom__Sequence__are_equal(const sbg_driver__msg__SbgStatusCom__Sequence * lhs, const sbg_driver__msg__SbgStatusCom__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sbg_driver__msg__SbgStatusCom__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sbg_driver__msg__SbgStatusCom__Sequence__copy(
  const sbg_driver__msg__SbgStatusCom__Sequence * input,
  sbg_driver__msg__SbgStatusCom__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sbg_driver__msg__SbgStatusCom);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sbg_driver__msg__SbgStatusCom * data =
      (sbg_driver__msg__SbgStatusCom *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sbg_driver__msg__SbgStatusCom__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sbg_driver__msg__SbgStatusCom__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sbg_driver__msg__SbgStatusCom__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
