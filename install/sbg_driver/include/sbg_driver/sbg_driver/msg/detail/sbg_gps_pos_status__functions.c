// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sbg_driver:msg/SbgGpsPosStatus.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_gps_pos_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sbg_driver__msg__SbgGpsPosStatus__init(sbg_driver__msg__SbgGpsPosStatus * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // type
  // ifm
  // spoofing
  // osnma
  // gps_l1_used
  // gps_l2_used
  // gps_l5_used
  // glo_l1_used
  // glo_l2_used
  // glo_l3_used
  // gal_e1_used
  // gal_e5a_used
  // gal_e5b_used
  // gal_e5alt_used
  // gal_e6_used
  // bds_b1_used
  // bds_b2_used
  // bds_b3_used
  // qzss_l1_used
  // qzss_l2_used
  // qzss_l5_used
  return true;
}

void
sbg_driver__msg__SbgGpsPosStatus__fini(sbg_driver__msg__SbgGpsPosStatus * msg)
{
  if (!msg) {
    return;
  }
  // status
  // type
  // ifm
  // spoofing
  // osnma
  // gps_l1_used
  // gps_l2_used
  // gps_l5_used
  // glo_l1_used
  // glo_l2_used
  // glo_l3_used
  // gal_e1_used
  // gal_e5a_used
  // gal_e5b_used
  // gal_e5alt_used
  // gal_e6_used
  // bds_b1_used
  // bds_b2_used
  // bds_b3_used
  // qzss_l1_used
  // qzss_l2_used
  // qzss_l5_used
}

bool
sbg_driver__msg__SbgGpsPosStatus__are_equal(const sbg_driver__msg__SbgGpsPosStatus * lhs, const sbg_driver__msg__SbgGpsPosStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // ifm
  if (lhs->ifm != rhs->ifm) {
    return false;
  }
  // spoofing
  if (lhs->spoofing != rhs->spoofing) {
    return false;
  }
  // osnma
  if (lhs->osnma != rhs->osnma) {
    return false;
  }
  // gps_l1_used
  if (lhs->gps_l1_used != rhs->gps_l1_used) {
    return false;
  }
  // gps_l2_used
  if (lhs->gps_l2_used != rhs->gps_l2_used) {
    return false;
  }
  // gps_l5_used
  if (lhs->gps_l5_used != rhs->gps_l5_used) {
    return false;
  }
  // glo_l1_used
  if (lhs->glo_l1_used != rhs->glo_l1_used) {
    return false;
  }
  // glo_l2_used
  if (lhs->glo_l2_used != rhs->glo_l2_used) {
    return false;
  }
  // glo_l3_used
  if (lhs->glo_l3_used != rhs->glo_l3_used) {
    return false;
  }
  // gal_e1_used
  if (lhs->gal_e1_used != rhs->gal_e1_used) {
    return false;
  }
  // gal_e5a_used
  if (lhs->gal_e5a_used != rhs->gal_e5a_used) {
    return false;
  }
  // gal_e5b_used
  if (lhs->gal_e5b_used != rhs->gal_e5b_used) {
    return false;
  }
  // gal_e5alt_used
  if (lhs->gal_e5alt_used != rhs->gal_e5alt_used) {
    return false;
  }
  // gal_e6_used
  if (lhs->gal_e6_used != rhs->gal_e6_used) {
    return false;
  }
  // bds_b1_used
  if (lhs->bds_b1_used != rhs->bds_b1_used) {
    return false;
  }
  // bds_b2_used
  if (lhs->bds_b2_used != rhs->bds_b2_used) {
    return false;
  }
  // bds_b3_used
  if (lhs->bds_b3_used != rhs->bds_b3_used) {
    return false;
  }
  // qzss_l1_used
  if (lhs->qzss_l1_used != rhs->qzss_l1_used) {
    return false;
  }
  // qzss_l2_used
  if (lhs->qzss_l2_used != rhs->qzss_l2_used) {
    return false;
  }
  // qzss_l5_used
  if (lhs->qzss_l5_used != rhs->qzss_l5_used) {
    return false;
  }
  return true;
}

bool
sbg_driver__msg__SbgGpsPosStatus__copy(
  const sbg_driver__msg__SbgGpsPosStatus * input,
  sbg_driver__msg__SbgGpsPosStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // type
  output->type = input->type;
  // ifm
  output->ifm = input->ifm;
  // spoofing
  output->spoofing = input->spoofing;
  // osnma
  output->osnma = input->osnma;
  // gps_l1_used
  output->gps_l1_used = input->gps_l1_used;
  // gps_l2_used
  output->gps_l2_used = input->gps_l2_used;
  // gps_l5_used
  output->gps_l5_used = input->gps_l5_used;
  // glo_l1_used
  output->glo_l1_used = input->glo_l1_used;
  // glo_l2_used
  output->glo_l2_used = input->glo_l2_used;
  // glo_l3_used
  output->glo_l3_used = input->glo_l3_used;
  // gal_e1_used
  output->gal_e1_used = input->gal_e1_used;
  // gal_e5a_used
  output->gal_e5a_used = input->gal_e5a_used;
  // gal_e5b_used
  output->gal_e5b_used = input->gal_e5b_used;
  // gal_e5alt_used
  output->gal_e5alt_used = input->gal_e5alt_used;
  // gal_e6_used
  output->gal_e6_used = input->gal_e6_used;
  // bds_b1_used
  output->bds_b1_used = input->bds_b1_used;
  // bds_b2_used
  output->bds_b2_used = input->bds_b2_used;
  // bds_b3_used
  output->bds_b3_used = input->bds_b3_used;
  // qzss_l1_used
  output->qzss_l1_used = input->qzss_l1_used;
  // qzss_l2_used
  output->qzss_l2_used = input->qzss_l2_used;
  // qzss_l5_used
  output->qzss_l5_used = input->qzss_l5_used;
  return true;
}

sbg_driver__msg__SbgGpsPosStatus *
sbg_driver__msg__SbgGpsPosStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgGpsPosStatus * msg = (sbg_driver__msg__SbgGpsPosStatus *)allocator.allocate(sizeof(sbg_driver__msg__SbgGpsPosStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sbg_driver__msg__SbgGpsPosStatus));
  bool success = sbg_driver__msg__SbgGpsPosStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sbg_driver__msg__SbgGpsPosStatus__destroy(sbg_driver__msg__SbgGpsPosStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sbg_driver__msg__SbgGpsPosStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sbg_driver__msg__SbgGpsPosStatus__Sequence__init(sbg_driver__msg__SbgGpsPosStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgGpsPosStatus * data = NULL;

  if (size) {
    data = (sbg_driver__msg__SbgGpsPosStatus *)allocator.zero_allocate(size, sizeof(sbg_driver__msg__SbgGpsPosStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sbg_driver__msg__SbgGpsPosStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sbg_driver__msg__SbgGpsPosStatus__fini(&data[i - 1]);
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
sbg_driver__msg__SbgGpsPosStatus__Sequence__fini(sbg_driver__msg__SbgGpsPosStatus__Sequence * array)
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
      sbg_driver__msg__SbgGpsPosStatus__fini(&array->data[i]);
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

sbg_driver__msg__SbgGpsPosStatus__Sequence *
sbg_driver__msg__SbgGpsPosStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgGpsPosStatus__Sequence * array = (sbg_driver__msg__SbgGpsPosStatus__Sequence *)allocator.allocate(sizeof(sbg_driver__msg__SbgGpsPosStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sbg_driver__msg__SbgGpsPosStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sbg_driver__msg__SbgGpsPosStatus__Sequence__destroy(sbg_driver__msg__SbgGpsPosStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sbg_driver__msg__SbgGpsPosStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sbg_driver__msg__SbgGpsPosStatus__Sequence__are_equal(const sbg_driver__msg__SbgGpsPosStatus__Sequence * lhs, const sbg_driver__msg__SbgGpsPosStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sbg_driver__msg__SbgGpsPosStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sbg_driver__msg__SbgGpsPosStatus__Sequence__copy(
  const sbg_driver__msg__SbgGpsPosStatus__Sequence * input,
  sbg_driver__msg__SbgGpsPosStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sbg_driver__msg__SbgGpsPosStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sbg_driver__msg__SbgGpsPosStatus * data =
      (sbg_driver__msg__SbgGpsPosStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sbg_driver__msg__SbgGpsPosStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sbg_driver__msg__SbgGpsPosStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sbg_driver__msg__SbgGpsPosStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
