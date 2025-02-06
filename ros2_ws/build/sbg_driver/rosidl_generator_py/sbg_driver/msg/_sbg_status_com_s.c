// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sbg_driver:msg/SbgStatusCom.idl
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
#include "sbg_driver/msg/detail/sbg_status_com__struct.h"
#include "sbg_driver/msg/detail/sbg_status_com__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool sbg_driver__msg__sbg_status_com__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("sbg_driver.msg._sbg_status_com.SbgStatusCom", full_classname_dest, 43) == 0);
  }
  sbg_driver__msg__SbgStatusCom * ros_message = _ros_message;
  {  // port_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "port_a");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->port_a = (Py_True == field);
    Py_DECREF(field);
  }
  {  // port_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "port_b");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->port_b = (Py_True == field);
    Py_DECREF(field);
  }
  {  // port_c
    PyObject * field = PyObject_GetAttrString(_pymsg, "port_c");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->port_c = (Py_True == field);
    Py_DECREF(field);
  }
  {  // port_d
    PyObject * field = PyObject_GetAttrString(_pymsg, "port_d");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->port_d = (Py_True == field);
    Py_DECREF(field);
  }
  {  // port_e
    PyObject * field = PyObject_GetAttrString(_pymsg, "port_e");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->port_e = (Py_True == field);
    Py_DECREF(field);
  }
  {  // port_a_rx
    PyObject * field = PyObject_GetAttrString(_pymsg, "port_a_rx");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->port_a_rx = (Py_True == field);
    Py_DECREF(field);
  }
  {  // port_a_tx
    PyObject * field = PyObject_GetAttrString(_pymsg, "port_a_tx");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->port_a_tx = (Py_True == field);
    Py_DECREF(field);
  }
  {  // port_b_rx
    PyObject * field = PyObject_GetAttrString(_pymsg, "port_b_rx");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->port_b_rx = (Py_True == field);
    Py_DECREF(field);
  }
  {  // port_b_tx
    PyObject * field = PyObject_GetAttrString(_pymsg, "port_b_tx");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->port_b_tx = (Py_True == field);
    Py_DECREF(field);
  }
  {  // port_c_rx
    PyObject * field = PyObject_GetAttrString(_pymsg, "port_c_rx");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->port_c_rx = (Py_True == field);
    Py_DECREF(field);
  }
  {  // port_c_tx
    PyObject * field = PyObject_GetAttrString(_pymsg, "port_c_tx");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->port_c_tx = (Py_True == field);
    Py_DECREF(field);
  }
  {  // port_d_rx
    PyObject * field = PyObject_GetAttrString(_pymsg, "port_d_rx");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->port_d_rx = (Py_True == field);
    Py_DECREF(field);
  }
  {  // port_d_tx
    PyObject * field = PyObject_GetAttrString(_pymsg, "port_d_tx");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->port_d_tx = (Py_True == field);
    Py_DECREF(field);
  }
  {  // port_e_rx
    PyObject * field = PyObject_GetAttrString(_pymsg, "port_e_rx");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->port_e_rx = (Py_True == field);
    Py_DECREF(field);
  }
  {  // port_e_tx
    PyObject * field = PyObject_GetAttrString(_pymsg, "port_e_tx");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->port_e_tx = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_rx
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_rx");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_rx = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_tx
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_tx = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sbg_driver__msg__sbg_status_com__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SbgStatusCom */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sbg_driver.msg._sbg_status_com");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SbgStatusCom");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sbg_driver__msg__SbgStatusCom * ros_message = (sbg_driver__msg__SbgStatusCom *)raw_ros_message;
  {  // port_a
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->port_a ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "port_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // port_b
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->port_b ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "port_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // port_c
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->port_c ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "port_c", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // port_d
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->port_d ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "port_d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // port_e
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->port_e ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "port_e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // port_a_rx
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->port_a_rx ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "port_a_rx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // port_a_tx
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->port_a_tx ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "port_a_tx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // port_b_rx
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->port_b_rx ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "port_b_rx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // port_b_tx
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->port_b_tx ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "port_b_tx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // port_c_rx
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->port_c_rx ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "port_c_rx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // port_c_tx
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->port_c_tx ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "port_c_tx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // port_d_rx
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->port_d_rx ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "port_d_rx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // port_d_tx
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->port_d_tx ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "port_d_tx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // port_e_rx
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->port_e_rx ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "port_e_rx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // port_e_tx
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->port_e_tx ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "port_e_tx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_rx
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_rx ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_rx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_tx ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
