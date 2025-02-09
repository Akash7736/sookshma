// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sbg_driver:msg/SbgUtcTimeStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "sbg_driver/msg/detail/sbg_utc_time_status__struct.h"
#include "sbg_driver/msg/detail/sbg_utc_time_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool sbg_driver__msg__sbg_utc_time_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("sbg_driver.msg._sbg_utc_time_status.SbgUtcTimeStatus", full_classname_dest, 52) == 0);
  }
  sbg_driver__msg__SbgUtcTimeStatus * ros_message = _ros_message;
  {  // clock_stable
    PyObject * field = PyObject_GetAttrString(_pymsg, "clock_stable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->clock_stable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // clock_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "clock_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->clock_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // clock_utc_sync
    PyObject * field = PyObject_GetAttrString(_pymsg, "clock_utc_sync");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->clock_utc_sync = (Py_True == field);
    Py_DECREF(field);
  }
  {  // clock_utc_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "clock_utc_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->clock_utc_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sbg_driver__msg__sbg_utc_time_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SbgUtcTimeStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sbg_driver.msg._sbg_utc_time_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SbgUtcTimeStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sbg_driver__msg__SbgUtcTimeStatus * ros_message = (sbg_driver__msg__SbgUtcTimeStatus *)raw_ros_message;
  {  // clock_stable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->clock_stable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "clock_stable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // clock_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->clock_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "clock_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // clock_utc_sync
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->clock_utc_sync ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "clock_utc_sync", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // clock_utc_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->clock_utc_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "clock_utc_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
