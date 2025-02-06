# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sbg_driver:msg/SbgShipMotionStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SbgShipMotionStatus(type):
    """Metaclass of message 'SbgShipMotionStatus'."""

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
                'sbg_driver.msg.SbgShipMotionStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sbg_ship_motion_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sbg_ship_motion_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sbg_ship_motion_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sbg_ship_motion_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sbg_ship_motion_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SbgShipMotionStatus(metaclass=Metaclass_SbgShipMotionStatus):
    """Message class 'SbgShipMotionStatus'."""

    __slots__ = [
        '_heave_valid',
        '_heave_vel_aided',
        '_period_available',
        '_period_valid',
    ]

    _fields_and_field_types = {
        'heave_valid': 'boolean',
        'heave_vel_aided': 'boolean',
        'period_available': 'boolean',
        'period_valid': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.heave_valid = kwargs.get('heave_valid', bool())
        self.heave_vel_aided = kwargs.get('heave_vel_aided', bool())
        self.period_available = kwargs.get('period_available', bool())
        self.period_valid = kwargs.get('period_valid', bool())

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
        if self.heave_valid != other.heave_valid:
            return False
        if self.heave_vel_aided != other.heave_vel_aided:
            return False
        if self.period_available != other.period_available:
            return False
        if self.period_valid != other.period_valid:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def heave_valid(self):
        """Message field 'heave_valid'."""
        return self._heave_valid

    @heave_valid.setter
    def heave_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heave_valid' field must be of type 'bool'"
        self._heave_valid = value

    @builtins.property
    def heave_vel_aided(self):
        """Message field 'heave_vel_aided'."""
        return self._heave_vel_aided

    @heave_vel_aided.setter
    def heave_vel_aided(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heave_vel_aided' field must be of type 'bool'"
        self._heave_vel_aided = value

    @builtins.property
    def period_available(self):
        """Message field 'period_available'."""
        return self._period_available

    @period_available.setter
    def period_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'period_available' field must be of type 'bool'"
        self._period_available = value

    @builtins.property
    def period_valid(self):
        """Message field 'period_valid'."""
        return self._period_valid

    @period_valid.setter
    def period_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'period_valid' field must be of type 'bool'"
        self._period_valid = value
