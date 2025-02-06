// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sbg_driver:msg/SbgMagStatus.idl
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
#include "sbg_driver/msg/detail/sbg_mag_status__struct.h"
#include "sbg_driver/msg/detail/sbg_mag_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool sbg_driver__msg__sbg_mag_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("sbg_driver.msg._sbg_mag_status.SbgMagStatus", full_classname_dest, 43) == 0);
  }
  sbg_driver__msg__SbgMagStatus * ros_message = _ros_message;
  {  // mag_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_x");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mag_x = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mag_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_y");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mag_y = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mag_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_z");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mag_z = (Py_True == field);
    Py_DECREF(field);
  }
  {  // accel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_x");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accel_x = (Py_True == field);
    Py_DECREF(field);
  }
  {  // accel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_y");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accel_y = (Py_True == field);
    Py_DECREF(field);
  }
  {  // accel_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_z");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accel_z = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mags_in_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "mags_in_range");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mags_in_range = (Py_True == field);
    Py_DECREF(field);
  }
  {  // accels_in_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "accels_in_range");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accels_in_range = (Py_True == field);
    Py_DECREF(field);
  }
  {  // calibration
    PyObject * field = PyObject_GetAttrString(_pymsg, "calibration");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->calibration = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sbg_driver__msg__sbg_mag_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SbgMagStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sbg_driver.msg._sbg_mag_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SbgMagStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sbg_driver__msg__SbgMagStatus * ros_message = (sbg_driver__msg__SbgMagStatus *)raw_ros_message;
  {  // mag_x
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mag_x ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_y
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mag_y ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_z
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mag_z ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_x
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accel_x ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_y
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accel_y ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_z
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accel_z ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mags_in_range
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mags_in_range ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mags_in_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accels_in_range
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accels_in_range ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accels_in_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // calibration
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->calibration ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "calibration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
