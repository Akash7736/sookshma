// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sbg_driver:msg/SbgStatusGeneral.idl
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
#include "sbg_driver/msg/detail/sbg_status_general__struct.h"
#include "sbg_driver/msg/detail/sbg_status_general__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool sbg_driver__msg__sbg_status_general__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("sbg_driver.msg._sbg_status_general.SbgStatusGeneral", full_classname_dest, 51) == 0);
  }
  sbg_driver__msg__SbgStatusGeneral * ros_message = _ros_message;
  {  // main_power
    PyObject * field = PyObject_GetAttrString(_pymsg, "main_power");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->main_power = (Py_True == field);
    Py_DECREF(field);
  }
  {  // imu_power
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_power");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->imu_power = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps_power
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_power");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps_power = (Py_True == field);
    Py_DECREF(field);
  }
  {  // settings
    PyObject * field = PyObject_GetAttrString(_pymsg, "settings");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->settings = (Py_True == field);
    Py_DECREF(field);
  }
  {  // temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->temperature = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sbg_driver__msg__sbg_status_general__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SbgStatusGeneral */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sbg_driver.msg._sbg_status_general");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SbgStatusGeneral");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sbg_driver__msg__SbgStatusGeneral * ros_message = (sbg_driver__msg__SbgStatusGeneral *)raw_ros_message;
  {  // main_power
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->main_power ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "main_power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_power
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->imu_power ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_power
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps_power ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // settings
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->settings ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "settings", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->temperature ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
