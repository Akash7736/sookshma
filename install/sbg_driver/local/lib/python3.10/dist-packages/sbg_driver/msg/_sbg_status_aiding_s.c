// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sbg_driver:msg/SbgStatusAiding.idl
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
#include "sbg_driver/msg/detail/sbg_status_aiding__struct.h"
#include "sbg_driver/msg/detail/sbg_status_aiding__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool sbg_driver__msg__sbg_status_aiding__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("sbg_driver.msg._sbg_status_aiding.SbgStatusAiding", full_classname_dest, 49) == 0);
  }
  sbg_driver__msg__SbgStatusAiding * ros_message = _ros_message;
  {  // gps1_pos_recv
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps1_pos_recv");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps1_pos_recv = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps1_vel_recv
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps1_vel_recv");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps1_vel_recv = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps1_hdt_recv
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps1_hdt_recv");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps1_hdt_recv = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps1_utc_recv
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps1_utc_recv");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps1_utc_recv = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mag_recv
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_recv");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mag_recv = (Py_True == field);
    Py_DECREF(field);
  }
  {  // odo_recv
    PyObject * field = PyObject_GetAttrString(_pymsg, "odo_recv");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->odo_recv = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dvl_recv
    PyObject * field = PyObject_GetAttrString(_pymsg, "dvl_recv");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dvl_recv = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sbg_driver__msg__sbg_status_aiding__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SbgStatusAiding */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sbg_driver.msg._sbg_status_aiding");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SbgStatusAiding");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sbg_driver__msg__SbgStatusAiding * ros_message = (sbg_driver__msg__SbgStatusAiding *)raw_ros_message;
  {  // gps1_pos_recv
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps1_pos_recv ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps1_pos_recv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps1_vel_recv
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps1_vel_recv ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps1_vel_recv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps1_hdt_recv
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps1_hdt_recv ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps1_hdt_recv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps1_utc_recv
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps1_utc_recv ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps1_utc_recv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_recv
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mag_recv ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_recv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odo_recv
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->odo_recv ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odo_recv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dvl_recv
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dvl_recv ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dvl_recv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
