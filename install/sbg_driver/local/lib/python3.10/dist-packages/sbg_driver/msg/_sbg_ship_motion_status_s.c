// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sbg_driver:msg/SbgShipMotionStatus.idl
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
#include "sbg_driver/msg/detail/sbg_ship_motion_status__struct.h"
#include "sbg_driver/msg/detail/sbg_ship_motion_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool sbg_driver__msg__sbg_ship_motion_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("sbg_driver.msg._sbg_ship_motion_status.SbgShipMotionStatus", full_classname_dest, 58) == 0);
  }
  sbg_driver__msg__SbgShipMotionStatus * ros_message = _ros_message;
  {  // heave_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "heave_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heave_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // heave_vel_aided
    PyObject * field = PyObject_GetAttrString(_pymsg, "heave_vel_aided");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heave_vel_aided = (Py_True == field);
    Py_DECREF(field);
  }
  {  // period_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "period_available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->period_available = (Py_True == field);
    Py_DECREF(field);
  }
  {  // period_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "period_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->period_valid = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sbg_driver__msg__sbg_ship_motion_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SbgShipMotionStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sbg_driver.msg._sbg_ship_motion_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SbgShipMotionStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sbg_driver__msg__SbgShipMotionStatus * ros_message = (sbg_driver__msg__SbgShipMotionStatus *)raw_ros_message;
  {  // heave_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heave_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heave_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heave_vel_aided
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heave_vel_aided ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heave_vel_aided", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // period_available
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->period_available ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "period_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // period_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->period_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "period_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
