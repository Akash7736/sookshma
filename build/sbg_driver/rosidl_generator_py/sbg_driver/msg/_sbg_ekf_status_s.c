// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sbg_driver:msg/SbgEkfStatus.idl
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
#include "sbg_driver/msg/detail/sbg_ekf_status__struct.h"
#include "sbg_driver/msg/detail/sbg_ekf_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool sbg_driver__msg__sbg_ekf_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("sbg_driver.msg._sbg_ekf_status.SbgEkfStatus", full_classname_dest, 43) == 0);
  }
  sbg_driver__msg__SbgEkfStatus * ros_message = _ros_message;
  {  // solution_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "solution_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->solution_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // attitude_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "attitude_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->attitude_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // heading_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heading_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // velocity_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->velocity_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // position_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->position_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vert_ref_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "vert_ref_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vert_ref_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mag_ref_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_ref_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mag_ref_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps1_vel_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps1_vel_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps1_vel_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps1_pos_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps1_pos_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps1_pos_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps1_course_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps1_course_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps1_course_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps1_hdt_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps1_hdt_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps1_hdt_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps2_vel_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps2_vel_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps2_vel_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps2_pos_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps2_pos_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps2_pos_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps2_course_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps2_course_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps2_course_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps2_hdt_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps2_hdt_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps2_hdt_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // odo_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "odo_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->odo_used = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sbg_driver__msg__sbg_ekf_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SbgEkfStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sbg_driver.msg._sbg_ekf_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SbgEkfStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sbg_driver__msg__SbgEkfStatus * ros_message = (sbg_driver__msg__SbgEkfStatus *)raw_ros_message;
  {  // solution_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->solution_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "solution_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // attitude_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->attitude_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "attitude_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heading_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->velocity_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->position_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vert_ref_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vert_ref_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vert_ref_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_ref_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mag_ref_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_ref_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps1_vel_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps1_vel_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps1_vel_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps1_pos_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps1_pos_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps1_pos_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps1_course_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps1_course_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps1_course_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps1_hdt_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps1_hdt_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps1_hdt_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps2_vel_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps2_vel_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps2_vel_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps2_pos_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps2_pos_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps2_pos_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps2_course_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps2_course_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps2_course_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps2_hdt_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps2_hdt_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps2_hdt_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odo_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->odo_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odo_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
