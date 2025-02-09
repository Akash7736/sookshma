# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sbg_driver:msg/SbgGpsPos.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SbgGpsPos(type):
    """Metaclass of message 'SbgGpsPos'."""

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
                'sbg_driver.msg.SbgGpsPos')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sbg_gps_pos
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sbg_gps_pos
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sbg_gps_pos
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sbg_gps_pos
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sbg_gps_pos

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from sbg_driver.msg import SbgGpsPosStatus
            if SbgGpsPosStatus.__class__._TYPE_SUPPORT is None:
                SbgGpsPosStatus.__class__.__import_type_support__()

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


class SbgGpsPos(metaclass=Metaclass_SbgGpsPos):
    """Message class 'SbgGpsPos'."""

    __slots__ = [
        '_header',
        '_time_stamp',
        '_status',
        '_gps_tow',
        '_latitude',
        '_longitude',
        '_altitude',
        '_undulation',
        '_position_accuracy',
        '_num_sv_used',
        '_base_station_id',
        '_diff_age',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'time_stamp': 'uint32',
        'status': 'sbg_driver/SbgGpsPosStatus',
        'gps_tow': 'uint32',
        'latitude': 'double',
        'longitude': 'double',
        'altitude': 'double',
        'undulation': 'float',
        'position_accuracy': 'geometry_msgs/Vector3',
        'num_sv_used': 'uint8',
        'base_station_id': 'uint16',
        'diff_age': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sbg_driver', 'msg'], 'SbgGpsPosStatus'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.time_stamp = kwargs.get('time_stamp', int())
        from sbg_driver.msg import SbgGpsPosStatus
        self.status = kwargs.get('status', SbgGpsPosStatus())
        self.gps_tow = kwargs.get('gps_tow', int())
        self.latitude = kwargs.get('latitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.altitude = kwargs.get('altitude', float())
        self.undulation = kwargs.get('undulation', float())
        from geometry_msgs.msg import Vector3
        self.position_accuracy = kwargs.get('position_accuracy', Vector3())
        self.num_sv_used = kwargs.get('num_sv_used', int())
        self.base_station_id = kwargs.get('base_station_id', int())
        self.diff_age = kwargs.get('diff_age', int())

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
        if self.gps_tow != other.gps_tow:
            return False
        if self.latitude != other.latitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.altitude != other.altitude:
            return False
        if self.undulation != other.undulation:
            return False
        if self.position_accuracy != other.position_accuracy:
            return False
        if self.num_sv_used != other.num_sv_used:
            return False
        if self.base_station_id != other.base_station_id:
            return False
        if self.diff_age != other.diff_age:
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
            from sbg_driver.msg import SbgGpsPosStatus
            assert \
                isinstance(value, SbgGpsPosStatus), \
                "The 'status' field must be a sub message of type 'SbgGpsPosStatus'"
        self._status = value

    @builtins.property
    def gps_tow(self):
        """Message field 'gps_tow'."""
        return self._gps_tow

    @gps_tow.setter
    def gps_tow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gps_tow' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'gps_tow' field must be an unsigned integer in [0, 4294967295]"
        self._gps_tow = value

    @builtins.property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latitude = value

    @builtins.property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitude = value

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
    def undulation(self):
        """Message field 'undulation'."""
        return self._undulation

    @undulation.setter
    def undulation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'undulation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'undulation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._undulation = value

    @builtins.property
    def position_accuracy(self):
        """Message field 'position_accuracy'."""
        return self._position_accuracy

    @position_accuracy.setter
    def position_accuracy(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'position_accuracy' field must be a sub message of type 'Vector3'"
        self._position_accuracy = value

    @builtins.property
    def num_sv_used(self):
        """Message field 'num_sv_used'."""
        return self._num_sv_used

    @num_sv_used.setter
    def num_sv_used(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_sv_used' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_sv_used' field must be an unsigned integer in [0, 255]"
        self._num_sv_used = value

    @builtins.property
    def base_station_id(self):
        """Message field 'base_station_id'."""
        return self._base_station_id

    @base_station_id.setter
    def base_station_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'base_station_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'base_station_id' field must be an unsigned integer in [0, 65535]"
        self._base_station_id = value

    @builtins.property
    def diff_age(self):
        """Message field 'diff_age'."""
        return self._diff_age

    @diff_age.setter
    def diff_age(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'diff_age' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'diff_age' field must be an unsigned integer in [0, 65535]"
        self._diff_age = value
