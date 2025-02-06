// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sbg_driver:msg/SbgImuStatus.idl
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
#include "sbg_driver/msg/detail/sbg_imu_status__struct.h"
#include "sbg_driver/msg/detail/sbg_imu_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool sbg_driver__msg__sbg_imu_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("sbg_driver.msg._sbg_imu_status.SbgImuStatus", full_classname_dest, 43) == 0);
  }
  sbg_driver__msg__SbgImuStatus * ros_message = _ros_message;
  {  // imu_com
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_com");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->imu_com = (Py_True == field);
    Py_DECREF(field);
  }
  {  // imu_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->imu_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // imu_accel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_accel_x");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->imu_accel_x = (Py_True == field);
    Py_DECREF(field);
  }
  {  // imu_accel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_accel_y");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->imu_accel_y = (Py_True == field);
    Py_DECREF(field);
  }
  {  // imu_accel_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_accel_z");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->imu_accel_z = (Py_True == field);
    Py_DECREF(field);
  }
  {  // imu_gyro_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_gyro_x");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->imu_gyro_x = (Py_True == field);
    Py_DECREF(field);
  }
  {  // imu_gyro_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_gyro_y");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->imu_gyro_y = (Py_True == field);
    Py_DECREF(field);
  }
  {  // imu_gyro_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_gyro_z");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->imu_gyro_z = (Py_True == field);
    Py_DECREF(field);
  }
  {  // imu_accels_in_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_accels_in_range");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->imu_accels_in_range = (Py_True == field);
    Py_DECREF(field);
  }
  {  // imu_gyros_in_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_gyros_in_range");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->imu_gyros_in_range = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sbg_driver__msg__sbg_imu_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SbgImuStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sbg_driver.msg._sbg_imu_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SbgImuStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sbg_driver__msg__SbgImuStatus * ros_message = (sbg_driver__msg__SbgImuStatus *)raw_ros_message;
  {  // imu_com
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->imu_com ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_com", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->imu_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_accel_x
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->imu_accel_x ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_accel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_accel_y
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->imu_accel_y ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_accel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_accel_z
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->imu_accel_z ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_accel_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_gyro_x
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->imu_gyro_x ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_gyro_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_gyro_y
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->imu_gyro_y ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_gyro_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_gyro_z
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->imu_gyro_z ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_gyro_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_accels_in_range
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->imu_accels_in_range ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_accels_in_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_gyros_in_range
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->imu_gyros_in_range ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_gyros_in_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
