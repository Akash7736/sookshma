# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sbg_driver:msg/SbgAirData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SbgAirData(type):
    """Metaclass of message 'SbgAirData'."""

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
                'sbg_driver.msg.SbgAirData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sbg_air_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sbg_air_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sbg_air_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sbg_air_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sbg_air_data

            from sbg_driver.msg import SbgAirDataStatus
            if SbgAirDataStatus.__class__._TYPE_SUPPORT is None:
                SbgAirDataStatus.__class__.__import_type_support__()

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


class SbgAirData(metaclass=Metaclass_SbgAirData):
    """Message class 'SbgAirData'."""

    __slots__ = [
        '_header',
        '_time_stamp',
        '_status',
        '_pressure_abs',
        '_altitude',
        '_pressure_diff',
        '_true_air_speed',
        '_air_temperature',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'time_stamp': 'uint32',
        'status': 'sbg_driver/SbgAirDataStatus',
        'pressure_abs': 'double',
        'altitude': 'double',
        'pressure_diff': 'double',
        'true_air_speed': 'double',
        'air_temperature': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sbg_driver', 'msg'], 'SbgAirDataStatus'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.time_stamp = kwargs.get('time_stamp', int())
        from sbg_driver.msg import SbgAirDataStatus
        self.status = kwargs.get('status', SbgAirDataStatus())
        self.pressure_abs = kwargs.get('pressure_abs', float())
        self.altitude = kwargs.get('altitude', float())
        self.pressure_diff = kwargs.get('pressure_diff', float())
        self.true_air_speed = kwargs.get('true_air_speed', float())
        self.air_temperature = kwargs.get('air_temperature', float())

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
        if self.status != other.status:
            return False
        if self.pressure_abs != other.pressure_abs:
            return False
        if self.altitude != other.altitude:
            return False
        if self.pressure_diff != other.pressure_diff:
            return False
        if self.true_air_speed != other.true_air_speed:
            return False
        if self.air_temperature != other.air_temperature:
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
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from sbg_driver.msg import SbgAirDataStatus
            assert \
                isinstance(value, SbgAirDataStatus), \
                "The 'status' field must be a sub message of type 'SbgAirDataStatus'"
        self._status = value

    @builtins.property
    def pressure_abs(self):
        """Message field 'pressure_abs'."""
        return self._pressure_abs

    @pressure_abs.setter
    def pressure_abs(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pressure_abs' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pressure_abs' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pressure_abs = value

    @builtins.property
    def altitude(self):
        """Message field 'altitude'."""
        return self._altitude

    @altitude.setter
    def altitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'altitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'altitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._altitude = value

    @builtins.property
    def pressure_diff(self):
        """Message field 'pressure_diff'."""
        return self._pressure_diff

    @pressure_diff.setter
    def pressure_diff(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pressure_diff' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pressure_diff' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pressure_diff = value

    @builtins.property
    def true_air_speed(self):
        """Message field 'true_air_speed'."""
        return self._true_air_speed

    @true_air_speed.setter
    def true_air_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'true_air_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'true_air_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._true_air_speed = value

    @builtins.property
    def air_temperature(self):
        """Message field 'air_temperature'."""
        return self._air_temperature

    @air_temperature.setter
    def air_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'air_temperature' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'air_temperature' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._air_temperature = value
