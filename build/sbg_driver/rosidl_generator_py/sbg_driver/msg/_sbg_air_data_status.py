# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sbg_driver:msg/SbgAirDataStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SbgAirDataStatus(type):
    """Metaclass of message 'SbgAirDataStatus'."""

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
                'sbg_driver.msg.SbgAirDataStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sbg_air_data_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sbg_air_data_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sbg_air_data_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sbg_air_data_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sbg_air_data_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SbgAirDataStatus(metaclass=Metaclass_SbgAirDataStatus):
    """Message class 'SbgAirDataStatus'."""

    __slots__ = [
        '_is_delay_time',
        '_pressure_valid',
        '_altitude_valid',
        '_pressure_diff_valid',
        '_air_speed_valid',
        '_air_temperature_valid',
    ]

    _fields_and_field_types = {
        'is_delay_time': 'boolean',
        'pressure_valid': 'boolean',
        'altitude_valid': 'boolean',
        'pressure_diff_valid': 'boolean',
        'air_speed_valid': 'boolean',
        'air_temperature_valid': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_delay_time = kwargs.get('is_delay_time', bool())
        self.pressure_valid = kwargs.get('pressure_valid', bool())
        self.altitude_valid = kwargs.get('altitude_valid', bool())
        self.pressure_diff_valid = kwargs.get('pressure_diff_valid', bool())
        self.air_speed_valid = kwargs.get('air_speed_valid', bool())
        self.air_temperature_valid = kwargs.get('air_temperature_valid', bool())

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
        if self.is_delay_time != other.is_delay_time:
            return False
        if self.pressure_valid != other.pressure_valid:
            return False
        if self.altitude_valid != other.altitude_valid:
            return False
        if self.pressure_diff_valid != other.pressure_diff_valid:
            return False
        if self.air_speed_valid != other.air_speed_valid:
            return False
        if self.air_temperature_valid != other.air_temperature_valid:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_delay_time(self):
        """Message field 'is_delay_time'."""
        return self._is_delay_time

    @is_delay_time.setter
    def is_delay_time(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_delay_time' field must be of type 'bool'"
        self._is_delay_time = value

    @builtins.property
    def pressure_valid(self):
        """Message field 'pressure_valid'."""
        return self._pressure_valid

    @pressure_valid.setter
    def pressure_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pressure_valid' field must be of type 'bool'"
        self._pressure_valid = value

    @builtins.property
    def altitude_valid(self):
        """Message field 'altitude_valid'."""
        return self._altitude_valid

    @altitude_valid.setter
    def altitude_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'altitude_valid' field must be of type 'bool'"
        self._altitude_valid = value

    @builtins.property
    def pressure_diff_valid(self):
        """Message field 'pressure_diff_valid'."""
        return self._pressure_diff_valid

    @pressure_diff_valid.setter
    def pressure_diff_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pressure_diff_valid' field must be of type 'bool'"
        self._pressure_diff_valid = value

    @builtins.property
    def air_speed_valid(self):
        """Message field 'air_speed_valid'."""
        return self._air_speed_valid

    @air_speed_valid.setter
    def air_speed_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'air_speed_valid' field must be of type 'bool'"
        self._air_speed_valid = value

    @builtins.property
    def air_temperature_valid(self):
        """Message field 'air_temperature_valid'."""
        return self._air_temperature_valid

    @air_temperature_valid.setter
    def air_temperature_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'air_temperature_valid' field must be of type 'bool'"
        self._air_temperature_valid = value
