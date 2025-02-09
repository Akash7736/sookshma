// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sbg_driver:msg/SbgGpsVelStatus.idl
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
#include "sbg_driver/msg/detail/sbg_gps_vel_status__struct.h"
#include "sbg_driver/msg/detail/sbg_gps_vel_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool sbg_driver__msg__sbg_gps_vel_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("sbg_driver.msg._sbg_gps_vel_status.SbgGpsVelStatus", full_classname_dest, 50) == 0);
  }
  sbg_driver__msg__SbgGpsVelStatus * ros_message = _ros_message;
  {  // vel_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vel_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vel_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vel_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sbg_driver__msg__sbg_gps_vel_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SbgGpsVelStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sbg_driver.msg._sbg_gps_vel_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SbgGpsVelStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sbg_driver__msg__SbgGpsVelStatus * ros_message = (sbg_driver__msg__SbgGpsVelStatus *)raw_ros_message;
  {  // vel_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vel_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vel_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
