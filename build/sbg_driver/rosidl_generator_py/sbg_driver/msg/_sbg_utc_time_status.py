# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sbg_driver:msg/SbgUtcTimeStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SbgUtcTimeStatus(type):
    """Metaclass of message 'SbgUtcTimeStatus'."""

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
                'sbg_driver.msg.SbgUtcTimeStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sbg_utc_time_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sbg_utc_time_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sbg_utc_time_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sbg_utc_time_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sbg_utc_time_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SbgUtcTimeStatus(metaclass=Metaclass_SbgUtcTimeStatus):
    """Message class 'SbgUtcTimeStatus'."""

    __slots__ = [
        '_clock_stable',
        '_clock_status',
        '_clock_utc_sync',
        '_clock_utc_status',
    ]

    _fields_and_field_types = {
        'clock_stable': 'boolean',
        'clock_status': 'uint8',
        'clock_utc_sync': 'boolean',
        'clock_utc_status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.clock_stable = kwargs.get('clock_stable', bool())
        self.clock_status = kwargs.get('clock_status', int())
        self.clock_utc_sync = kwargs.get('clock_utc_sync', bool())
        self.clock_utc_status = kwargs.get('clock_utc_status', int())

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
        if self.clock_stable != other.clock_stable:
            return False
        if self.clock_status != other.clock_status:
            return False
        if self.clock_utc_sync != other.clock_utc_sync:
            return False
        if self.clock_utc_status != other.clock_utc_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def clock_stable(self):
        """Message field 'clock_stable'."""
        return self._clock_stable

    @clock_stable.setter
    def clock_stable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'clock_stable' field must be of type 'bool'"
        self._clock_stable = value

    @builtins.property
    def clock_status(self):
        """Message field 'clock_status'."""
        return self._clock_status

    @clock_status.setter
    def clock_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'clock_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'clock_status' field must be an unsigned integer in [0, 255]"
        self._clock_status = value

    @builtins.property
    def clock_utc_sync(self):
        """Message field 'clock_utc_sync'."""
        return self._clock_utc_sync

    @clock_utc_sync.setter
    def clock_utc_sync(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'clock_utc_sync' field must be of type 'bool'"
        self._clock_utc_sync = value

    @builtins.property
    def clock_utc_status(self):
        """Message field 'clock_utc_status'."""
        return self._clock_utc_status

    @clock_utc_status.setter
    def clock_utc_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'clock_utc_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'clock_utc_status' field must be an unsigned integer in [0, 255]"
        self._clock_utc_status = value
