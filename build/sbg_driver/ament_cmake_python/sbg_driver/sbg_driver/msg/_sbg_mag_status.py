# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sbg_driver:msg/SbgMagStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SbgMagStatus(type):
    """Metaclass of message 'SbgMagStatus'."""

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
                'sbg_driver.msg.SbgMagStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sbg_mag_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sbg_mag_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sbg_mag_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sbg_mag_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sbg_mag_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SbgMagStatus(metaclass=Metaclass_SbgMagStatus):
    """Message class 'SbgMagStatus'."""

    __slots__ = [
        '_mag_x',
        '_mag_y',
        '_mag_z',
        '_accel_x',
        '_accel_y',
        '_accel_z',
        '_mags_in_range',
        '_accels_in_range',
        '_calibration',
    ]

    _fields_and_field_types = {
        'mag_x': 'boolean',
        'mag_y': 'boolean',
        'mag_z': 'boolean',
        'accel_x': 'boolean',
        'accel_y': 'boolean',
        'accel_z': 'boolean',
        'mags_in_range': 'boolean',
        'accels_in_range': 'boolean',
        'calibration': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.mag_x = kwargs.get('mag_x', bool())
        self.mag_y = kwargs.get('mag_y', bool())
        self.mag_z = kwargs.get('mag_z', bool())
        self.accel_x = kwargs.get('accel_x', bool())
        self.accel_y = kwargs.get('accel_y', bool())
        self.accel_z = kwargs.get('accel_z', bool())
        self.mags_in_range = kwargs.get('mags_in_range', bool())
        self.accels_in_range = kwargs.get('accels_in_range', bool())
        self.calibration = kwargs.get('calibration', bool())

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
        if self.mag_x != other.mag_x:
            return False
        if self.mag_y != other.mag_y:
            return False
        if self.mag_z != other.mag_z:
            return False
        if self.accel_x != other.accel_x:
            return False
        if self.accel_y != other.accel_y:
            return False
        if self.accel_z != other.accel_z:
            return False
        if self.mags_in_range != other.mags_in_range:
            return False
        if self.accels_in_range != other.accels_in_range:
            return False
        if self.calibration != other.calibration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mag_x(self):
        """Message field 'mag_x'."""
        return self._mag_x

    @mag_x.setter
    def mag_x(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mag_x' field must be of type 'bool'"
        self._mag_x = value

    @builtins.property
    def mag_y(self):
        """Message field 'mag_y'."""
        return self._mag_y

    @mag_y.setter
    def mag_y(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mag_y' field must be of type 'bool'"
        self._mag_y = value

    @builtins.property
    def mag_z(self):
        """Message field 'mag_z'."""
        return self._mag_z

    @mag_z.setter
    def mag_z(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mag_z' field must be of type 'bool'"
        self._mag_z = value

    @builtins.property
    def accel_x(self):
        """Message field 'accel_x'."""
        return self._accel_x

    @accel_x.setter
    def accel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accel_x' field must be of type 'bool'"
        self._accel_x = value

    @builtins.property
    def accel_y(self):
        """Message field 'accel_y'."""
        return self._accel_y

    @accel_y.setter
    def accel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accel_y' field must be of type 'bool'"
        self._accel_y = value

    @builtins.property
    def accel_z(self):
        """Message field 'accel_z'."""
        return self._accel_z

    @accel_z.setter
    def accel_z(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accel_z' field must be of type 'bool'"
        self._accel_z = value

    @builtins.property
    def mags_in_range(self):
        """Message field 'mags_in_range'."""
        return self._mags_in_range

    @mags_in_range.setter
    def mags_in_range(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mags_in_range' field must be of type 'bool'"
        self._mags_in_range = value

    @builtins.property
    def accels_in_range(self):
        """Message field 'accels_in_range'."""
        return self._accels_in_range

    @accels_in_range.setter
    def accels_in_range(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accels_in_range' field must be of type 'bool'"
        self._accels_in_range = value

    @builtins.property
    def calibration(self):
        """Message field 'calibration'."""
        return self._calibration

    @calibration.setter
    def calibration(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'calibration' field must be of type 'bool'"
        self._calibration = value
