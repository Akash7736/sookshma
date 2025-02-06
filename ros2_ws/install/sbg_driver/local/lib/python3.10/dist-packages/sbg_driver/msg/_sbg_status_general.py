# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sbg_driver:msg/SbgStatusGeneral.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SbgStatusGeneral(type):
    """Metaclass of message 'SbgStatusGeneral'."""

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
                'sbg_driver.msg.SbgStatusGeneral')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sbg_status_general
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sbg_status_general
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sbg_status_general
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sbg_status_general
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sbg_status_general

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SbgStatusGeneral(metaclass=Metaclass_SbgStatusGeneral):
    """Message class 'SbgStatusGeneral'."""

    __slots__ = [
        '_main_power',
        '_imu_power',
        '_gps_power',
        '_settings',
        '_temperature',
    ]

    _fields_and_field_types = {
        'main_power': 'boolean',
        'imu_power': 'boolean',
        'gps_power': 'boolean',
        'settings': 'boolean',
        'temperature': 'boolean',
    }

    SLOT_TYPES = (
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
        self.main_power = kwargs.get('main_power', bool())
        self.imu_power = kwargs.get('imu_power', bool())
        self.gps_power = kwargs.get('gps_power', bool())
        self.settings = kwargs.get('settings', bool())
        self.temperature = kwargs.get('temperature', bool())

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
        if self.main_power != other.main_power:
            return False
        if self.imu_power != other.imu_power:
            return False
        if self.gps_power != other.gps_power:
            return False
        if self.settings != other.settings:
            return False
        if self.temperature != other.temperature:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def main_power(self):
        """Message field 'main_power'."""
        return self._main_power

    @main_power.setter
    def main_power(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'main_power' field must be of type 'bool'"
        self._main_power = value

    @builtins.property
    def imu_power(self):
        """Message field 'imu_power'."""
        return self._imu_power

    @imu_power.setter
    def imu_power(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'imu_power' field must be of type 'bool'"
        self._imu_power = value

    @builtins.property
    def gps_power(self):
        """Message field 'gps_power'."""
        return self._gps_power

    @gps_power.setter
    def gps_power(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps_power' field must be of type 'bool'"
        self._gps_power = value

    @builtins.property
    def settings(self):
        """Message field 'settings'."""
        return self._settings

    @settings.setter
    def settings(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'settings' field must be of type 'bool'"
        self._settings = value

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'temperature' field must be of type 'bool'"
        self._temperature = value
