// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sbg_driver:msg/SbgGpsHdt.idl
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
#include "sbg_driver/msg/detail/sbg_gps_hdt__struct.h"
#include "sbg_driver/msg/detail/sbg_gps_hdt__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sbg_driver__msg__sbg_gps_hdt__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("sbg_driver.msg._sbg_gps_hdt.SbgGpsHdt", full_classname_dest, 37) == 0);
  }
  sbg_driver__msg__SbgGpsHdt * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // time_stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_stamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_stamp = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tow
    PyObject * field = PyObject_GetAttrString(_pymsg, "tow");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tow = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // true_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "true_heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->true_heading = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // true_heading_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "true_heading_acc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->true_heading_acc = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_acc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_acc = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // baseline
    PyObject * field = PyObject_GetAttrString(_pymsg, "baseline");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->baseline = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sbg_driver__msg__sbg_gps_hdt__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SbgGpsHdt */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sbg_driver.msg._sbg_gps_hdt");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SbgGpsHdt");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sbg_driver__msg__SbgGpsHdt * ros_message = (sbg_driver__msg__SbgGpsHdt *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_stamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->time_stamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tow
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // true_heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->true_heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "true_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // true_heading_acc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->true_heading_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "true_heading_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_acc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // baseline
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->baseline);
    {
      int rc = PyObject_SetAttrString(_pymessage, "baseline", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
