# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sbg_driver:msg/SbgImuShort.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SbgImuShort(type):
    """Metaclass of message 'SbgImuShort'."""

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
                'sbg_driver.msg.SbgImuShort')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sbg_imu_short
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sbg_imu_short
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sbg_imu_short
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sbg_imu_short
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sbg_imu_short

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from sbg_driver.msg import SbgImuStatus
            if SbgImuStatus.__class__._TYPE_SUPPORT is None:
                SbgImuStatus.__class__.__import_type_support__()

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


class SbgImuShort(metaclass=Metaclass_SbgImuShort):
    """Message class 'SbgImuShort'."""

    __slots__ = [
        '_header',
        '_time_stamp',
        '_imu_status',
        '_delta_velocity',
        '_delta_angle',
        '_temperature',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'time_stamp': 'uint32',
        'imu_status': 'sbg_driver/SbgImuStatus',
        'delta_velocity': 'geometry_msgs/Vector3',
        'delta_angle': 'geometry_msgs/Vector3',
        'temperature': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sbg_driver', 'msg'], 'SbgImuStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.time_stamp = kwargs.get('time_stamp', int())
        from sbg_driver.msg import SbgImuStatus
        self.imu_status = kwargs.get('imu_status', SbgImuStatus())
        from geometry_msgs.msg import Vector3
        self.delta_velocity = kwargs.get('delta_velocity', Vector3())
        from geometry_msgs.msg import Vector3
        self.delta_angle = kwargs.get('delta_angle', Vector3())
        self.temperature = kwargs.get('temperature', int())

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
        if self.imu_status != other.imu_status:
            return False
        if self.delta_velocity != other.delta_velocity:
            return False
        if self.delta_angle != other.delta_angle:
            return False
        if self.temperature != other.temperature:
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
    def imu_status(self):
        """Message field 'imu_status'."""
        return self._imu_status

    @imu_status.setter
    def imu_status(self, value):
        if __debug__:
            from sbg_driver.msg import SbgImuStatus
            assert \
                isinstance(value, SbgImuStatus), \
                "The 'imu_status' field must be a sub message of type 'SbgImuStatus'"
        self._imu_status = value

    @builtins.property
    def delta_velocity(self):
        """Message field 'delta_velocity'."""
        return self._delta_velocity

    @delta_velocity.setter
    def delta_velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'delta_velocity' field must be a sub message of type 'Vector3'"
        self._delta_velocity = value

    @builtins.property
    def delta_angle(self):
        """Message field 'delta_angle'."""
        return self._delta_angle

    @delta_angle.setter
    def delta_angle(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'delta_angle' field must be a sub message of type 'Vector3'"
        self._delta_angle = value

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temperature' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'temperature' field must be an integer in [-32768, 32767]"
        self._temperature = value
