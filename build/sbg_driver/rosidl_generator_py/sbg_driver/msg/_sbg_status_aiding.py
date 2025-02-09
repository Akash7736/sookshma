# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sbg_driver:msg/SbgStatusAiding.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SbgStatusAiding(type):
    """Metaclass of message 'SbgStatusAiding'."""

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
                'sbg_driver.msg.SbgStatusAiding')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sbg_status_aiding
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sbg_status_aiding
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sbg_status_aiding
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sbg_status_aiding
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sbg_status_aiding

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SbgStatusAiding(metaclass=Metaclass_SbgStatusAiding):
    """Message class 'SbgStatusAiding'."""

    __slots__ = [
        '_gps1_pos_recv',
        '_gps1_vel_recv',
        '_gps1_hdt_recv',
        '_gps1_utc_recv',
        '_mag_recv',
        '_odo_recv',
        '_dvl_recv',
    ]

    _fields_and_field_types = {
        'gps1_pos_recv': 'boolean',
        'gps1_vel_recv': 'boolean',
        'gps1_hdt_recv': 'boolean',
        'gps1_utc_recv': 'boolean',
        'mag_recv': 'boolean',
        'odo_recv': 'boolean',
        'dvl_recv': 'boolean',
    }

    SLOT_TYPES = (
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
        self.gps1_pos_recv = kwargs.get('gps1_pos_recv', bool())
        self.gps1_vel_recv = kwargs.get('gps1_vel_recv', bool())
        self.gps1_hdt_recv = kwargs.get('gps1_hdt_recv', bool())
        self.gps1_utc_recv = kwargs.get('gps1_utc_recv', bool())
        self.mag_recv = kwargs.get('mag_recv', bool())
        self.odo_recv = kwargs.get('odo_recv', bool())
        self.dvl_recv = kwargs.get('dvl_recv', bool())

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
        if self.gps1_pos_recv != other.gps1_pos_recv:
            return False
        if self.gps1_vel_recv != other.gps1_vel_recv:
            return False
        if self.gps1_hdt_recv != other.gps1_hdt_recv:
            return False
        if self.gps1_utc_recv != other.gps1_utc_recv:
            return False
        if self.mag_recv != other.mag_recv:
            return False
        if self.odo_recv != other.odo_recv:
            return False
        if self.dvl_recv != other.dvl_recv:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def gps1_pos_recv(self):
        """Message field 'gps1_pos_recv'."""
        return self._gps1_pos_recv

    @gps1_pos_recv.setter
    def gps1_pos_recv(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps1_pos_recv' field must be of type 'bool'"
        self._gps1_pos_recv = value

    @builtins.property
    def gps1_vel_recv(self):
        """Message field 'gps1_vel_recv'."""
        return self._gps1_vel_recv

    @gps1_vel_recv.setter
    def gps1_vel_recv(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps1_vel_recv' field must be of type 'bool'"
        self._gps1_vel_recv = value

    @builtins.property
    def gps1_hdt_recv(self):
        """Message field 'gps1_hdt_recv'."""
        return self._gps1_hdt_recv

    @gps1_hdt_recv.setter
    def gps1_hdt_recv(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps1_hdt_recv' field must be of type 'bool'"
        self._gps1_hdt_recv = value

    @builtins.property
    def gps1_utc_recv(self):
        """Message field 'gps1_utc_recv'."""
        return self._gps1_utc_recv

    @gps1_utc_recv.setter
    def gps1_utc_recv(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps1_utc_recv' field must be of type 'bool'"
        self._gps1_utc_recv = value

    @builtins.property
    def mag_recv(self):
        """Message field 'mag_recv'."""
        return self._mag_recv

    @mag_recv.setter
    def mag_recv(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mag_recv' field must be of type 'bool'"
        self._mag_recv = value

    @builtins.property
    def odo_recv(self):
        """Message field 'odo_recv'."""
        return self._odo_recv

    @odo_recv.setter
    def odo_recv(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'odo_recv' field must be of type 'bool'"
        self._odo_recv = value

    @builtins.property
    def dvl_recv(self):
        """Message field 'dvl_recv'."""
        return self._dvl_recv

    @dvl_recv.setter
    def dvl_recv(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dvl_recv' field must be of type 'bool'"
        self._dvl_recv = value
