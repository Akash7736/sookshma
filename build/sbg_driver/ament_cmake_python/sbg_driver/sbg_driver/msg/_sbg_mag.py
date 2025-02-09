# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sbg_driver:msg/SbgMag.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SbgMag(type):
    """Metaclass of message 'SbgMag'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sbg_driver')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sbg_driver.msg.SbgMag')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sbg_mag
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sbg_mag
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sbg_mag
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sbg_mag
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sbg_mag

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from sbg_driver.msg import SbgMagStatus
            if SbgMagStatus.__class__._TYPE_SUPPORT is None:
                SbgMagStatus.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SbgMag(metaclass=Metaclass_SbgMag):
    """Message class 'SbgMag'."""

    __slots__ = [
        '_header',
        '_time_stamp',
        '_mag',
        '_accel',
        '_status',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'time_stamp': 'uint32',
        'mag': 'geometry_msgs/Vector3',
        'accel': 'geometry_msgs/Vector3',
        'status': 'sbg_driver/SbgMagStatus',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sbg_driver', 'msg'], 'SbgMagStatus'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.time_stamp = kwargs.get('time_stamp', int())
        from geometry_msgs.msg import Vector3
        self.mag = kwargs.get('mag', Vector3())
        from geometry_msgs.msg import Vector3
        self.accel = kwargs.get('accel', Vector3())
        from sbg_driver.msg import SbgMagStatus
        self.status = kwargs.get('status', SbgMagStatus())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.time_stamp != other.time_stamp:
            return False
        if self.mag != other.mag:
            return False
        if self.accel != other.accel:
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def time_stamp(self):
        """Message field 'time_stamp'."""
        return self._time_stamp

    @time_stamp.setter
    def time_stamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_stamp' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'time_stamp' field must be an unsigned integer in [0, 4294967295]"
        self._time_stamp = value

    @builtins.property
    def mag(self):
        """Message field 'mag'."""
        return self._mag

    @mag.setter
    def mag(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'mag' field must be a sub message of type 'Vector3'"
        self._mag = value

    @builtins.property
    def accel(self):
        """Message field 'accel'."""
        return self._accel

    @accel.setter
    def accel(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'accel' field must be a sub message of type 'Vector3'"
        self._accel = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from sbg_driver.msg import SbgMagStatus
            assert \
                isinstance(value, SbgMagStatus), \
                "The 'status' field must be a sub message of type 'SbgMagStatus'"
        self._status = value
