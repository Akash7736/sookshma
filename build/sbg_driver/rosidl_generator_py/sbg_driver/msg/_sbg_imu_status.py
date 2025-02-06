# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sbg_driver:msg/SbgImuStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SbgImuStatus(type):
    """Metaclass of message 'SbgImuStatus'."""

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
                'sbg_driver.msg.SbgImuStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sbg_imu_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sbg_imu_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sbg_imu_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sbg_imu_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sbg_imu_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SbgImuStatus(metaclass=Metaclass_SbgImuStatus):
    """Message class 'SbgImuStatus'."""

    __slots__ = [
        '_imu_com',
        '_imu_status',
        '_imu_accel_x',
        '_imu_accel_y',
        '_imu_accel_z',
        '_imu_gyro_x',
        '_imu_gyro_y',
        '_imu_gyro_z',
        '_imu_accels_in_range',
        '_imu_gyros_in_range',
    ]

    _fields_and_field_types = {
        'imu_com': 'boolean',
        'imu_status': 'boolean',
        'imu_accel_x': 'boolean',
        'imu_accel_y': 'boolean',
        'imu_accel_z': 'boolean',
        'imu_gyro_x': 'boolean',
        'imu_gyro_y': 'boolean',
        'imu_gyro_z': 'boolean',
        'imu_accels_in_range': 'boolean',
        'imu_gyros_in_range': 'boolean',
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
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.imu_com = kwargs.get('imu_com', bool())
        self.imu_status = kwargs.get('imu_status', bool())
        self.imu_accel_x = kwargs.get('imu_accel_x', bool())
        self.imu_accel_y = kwargs.get('imu_accel_y', bool())
        self.imu_accel_z = kwargs.get('imu_accel_z', bool())
        self.imu_gyro_x = kwargs.get('imu_gyro_x', bool())
        self.imu_gyro_y = kwargs.get('imu_gyro_y', bool())
        self.imu_gyro_z = kwargs.get('imu_gyro_z', bool())
        self.imu_accels_in_range = kwargs.get('imu_accels_in_range', bool())
        self.imu_gyros_in_range = kwargs.get('imu_gyros_in_range', bool())

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
        if self.imu_com != other.imu_com:
            return False
        if self.imu_status != other.imu_status:
            return False
        if self.imu_accel_x != other.imu_accel_x:
            return False
        if self.imu_accel_y != other.imu_accel_y:
            return False
        if self.imu_accel_z != other.imu_accel_z:
            return False
        if self.imu_gyro_x != other.imu_gyro_x:
            return False
        if self.imu_gyro_y != other.imu_gyro_y:
            return False
        if self.imu_gyro_z != other.imu_gyro_z:
            return False
        if self.imu_accels_in_range != other.imu_accels_in_range:
            return False
        if self.imu_gyros_in_range != other.imu_gyros_in_range:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def imu_com(self):
        """Message field 'imu_com'."""
        return self._imu_com

    @imu_com.setter
    def imu_com(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'imu_com' field must be of type 'bool'"
        self._imu_com = value

    @builtins.property
    def imu_status(self):
        """Message field 'imu_status'."""
        return self._imu_status

    @imu_status.setter
    def imu_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'imu_status' field must be of type 'bool'"
        self._imu_status = value

    @builtins.property
    def imu_accel_x(self):
        """Message field 'imu_accel_x'."""
        return self._imu_accel_x

    @imu_accel_x.setter
    def imu_accel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'imu_accel_x' field must be of type 'bool'"
        self._imu_accel_x = value

    @builtins.property
    def imu_accel_y(self):
        """Message field 'imu_accel_y'."""
        return self._imu_accel_y

    @imu_accel_y.setter
    def imu_accel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'imu_accel_y' field must be of type 'bool'"
        self._imu_accel_y = value

    @builtins.property
    def imu_accel_z(self):
        """Message field 'imu_accel_z'."""
        return self._imu_accel_z

    @imu_accel_z.setter
    def imu_accel_z(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'imu_accel_z' field must be of type 'bool'"
        self._imu_accel_z = value

    @builtins.property
    def imu_gyro_x(self):
        """Message field 'imu_gyro_x'."""
        return self._imu_gyro_x

    @imu_gyro_x.setter
    def imu_gyro_x(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'imu_gyro_x' field must be of type 'bool'"
        self._imu_gyro_x = value

    @builtins.property
    def imu_gyro_y(self):
        """Message field 'imu_gyro_y'."""
        return self._imu_gyro_y

    @imu_gyro_y.setter
    def imu_gyro_y(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'imu_gyro_y' field must be of type 'bool'"
        self._imu_gyro_y = value

    @builtins.property
    def imu_gyro_z(self):
        """Message field 'imu_gyro_z'."""
        return self._imu_gyro_z

    @imu_gyro_z.setter
    def imu_gyro_z(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'imu_gyro_z' field must be of type 'bool'"
        self._imu_gyro_z = value

    @builtins.property
    def imu_accels_in_range(self):
        """Message field 'imu_accels_in_range'."""
        return self._imu_accels_in_range

    @imu_accels_in_range.setter
    def imu_accels_in_range(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'imu_accels_in_range' field must be of type 'bool'"
        self._imu_accels_in_range = value

    @builtins.property
    def imu_gyros_in_range(self):
        """Message field 'imu_gyros_in_range'."""
        return self._imu_gyros_in_range

    @imu_gyros_in_range.setter
    def imu_gyros_in_range(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'imu_gyros_in_range' field must be of type 'bool'"
        self._imu_gyros_in_range = value
