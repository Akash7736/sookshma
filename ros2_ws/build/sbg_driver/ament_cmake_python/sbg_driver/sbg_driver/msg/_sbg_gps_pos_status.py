# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sbg_driver:msg/SbgGpsPosStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SbgGpsPosStatus(type):
    """Metaclass of message 'SbgGpsPosStatus'."""

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
                'sbg_driver.msg.SbgGpsPosStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sbg_gps_pos_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sbg_gps_pos_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sbg_gps_pos_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sbg_gps_pos_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sbg_gps_pos_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SbgGpsPosStatus(metaclass=Metaclass_SbgGpsPosStatus):
    """Message class 'SbgGpsPosStatus'."""

    __slots__ = [
        '_status',
        '_type',
        '_ifm',
        '_spoofing',
        '_osnma',
        '_gps_l1_used',
        '_gps_l2_used',
        '_gps_l5_used',
        '_glo_l1_used',
        '_glo_l2_used',
        '_glo_l3_used',
        '_gal_e1_used',
        '_gal_e5a_used',
        '_gal_e5b_used',
        '_gal_e5alt_used',
        '_gal_e6_used',
        '_bds_b1_used',
        '_bds_b2_used',
        '_bds_b3_used',
        '_qzss_l1_used',
        '_qzss_l2_used',
        '_qzss_l5_used',
    ]

    _fields_and_field_types = {
        'status': 'uint8',
        'type': 'uint8',
        'ifm': 'uint8',
        'spoofing': 'uint8',
        'osnma': 'uint8',
        'gps_l1_used': 'boolean',
        'gps_l2_used': 'boolean',
        'gps_l5_used': 'boolean',
        'glo_l1_used': 'boolean',
        'glo_l2_used': 'boolean',
        'glo_l3_used': 'boolean',
        'gal_e1_used': 'boolean',
        'gal_e5a_used': 'boolean',
        'gal_e5b_used': 'boolean',
        'gal_e5alt_used': 'boolean',
        'gal_e6_used': 'boolean',
        'bds_b1_used': 'boolean',
        'bds_b2_used': 'boolean',
        'bds_b3_used': 'boolean',
        'qzss_l1_used': 'boolean',
        'qzss_l2_used': 'boolean',
        'qzss_l5_used': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.status = kwargs.get('status', int())
        self.type = kwargs.get('type', int())
        self.ifm = kwargs.get('ifm', int())
        self.spoofing = kwargs.get('spoofing', int())
        self.osnma = kwargs.get('osnma', int())
        self.gps_l1_used = kwargs.get('gps_l1_used', bool())
        self.gps_l2_used = kwargs.get('gps_l2_used', bool())
        self.gps_l5_used = kwargs.get('gps_l5_used', bool())
        self.glo_l1_used = kwargs.get('glo_l1_used', bool())
        self.glo_l2_used = kwargs.get('glo_l2_used', bool())
        self.glo_l3_used = kwargs.get('glo_l3_used', bool())
        self.gal_e1_used = kwargs.get('gal_e1_used', bool())
        self.gal_e5a_used = kwargs.get('gal_e5a_used', bool())
        self.gal_e5b_used = kwargs.get('gal_e5b_used', bool())
        self.gal_e5alt_used = kwargs.get('gal_e5alt_used', bool())
        self.gal_e6_used = kwargs.get('gal_e6_used', bool())
        self.bds_b1_used = kwargs.get('bds_b1_used', bool())
        self.bds_b2_used = kwargs.get('bds_b2_used', bool())
        self.bds_b3_used = kwargs.get('bds_b3_used', bool())
        self.qzss_l1_used = kwargs.get('qzss_l1_used', bool())
        self.qzss_l2_used = kwargs.get('qzss_l2_used', bool())
        self.qzss_l5_used = kwargs.get('qzss_l5_used', bool())

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
        if self.status != other.status:
            return False
        if self.type != other.type:
            return False
        if self.ifm != other.ifm:
            return False
        if self.spoofing != other.spoofing:
            return False
        if self.osnma != other.osnma:
            return False
        if self.gps_l1_used != other.gps_l1_used:
            return False
        if self.gps_l2_used != other.gps_l2_used:
            return False
        if self.gps_l5_used != other.gps_l5_used:
            return False
        if self.glo_l1_used != other.glo_l1_used:
            return False
        if self.glo_l2_used != other.glo_l2_used:
            return False
        if self.glo_l3_used != other.glo_l3_used:
            return False
        if self.gal_e1_used != other.gal_e1_used:
            return False
        if self.gal_e5a_used != other.gal_e5a_used:
            return False
        if self.gal_e5b_used != other.gal_e5b_used:
            return False
        if self.gal_e5alt_used != other.gal_e5alt_used:
            return False
        if self.gal_e6_used != other.gal_e6_used:
            return False
        if self.bds_b1_used != other.bds_b1_used:
            return False
        if self.bds_b2_used != other.bds_b2_used:
            return False
        if self.bds_b3_used != other.bds_b3_used:
            return False
        if self.qzss_l1_used != other.qzss_l1_used:
            return False
        if self.qzss_l2_used != other.qzss_l2_used:
            return False
        if self.qzss_l5_used != other.qzss_l5_used:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def ifm(self):
        """Message field 'ifm'."""
        return self._ifm

    @ifm.setter
    def ifm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ifm' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ifm' field must be an unsigned integer in [0, 255]"
        self._ifm = value

    @builtins.property
    def spoofing(self):
        """Message field 'spoofing'."""
        return self._spoofing

    @spoofing.setter
    def spoofing(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'spoofing' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'spoofing' field must be an unsigned integer in [0, 255]"
        self._spoofing = value

    @builtins.property
    def osnma(self):
        """Message field 'osnma'."""
        return self._osnma

    @osnma.setter
    def osnma(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'osnma' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'osnma' field must be an unsigned integer in [0, 255]"
        self._osnma = value

    @builtins.property
    def gps_l1_used(self):
        """Message field 'gps_l1_used'."""
        return self._gps_l1_used

    @gps_l1_used.setter
    def gps_l1_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps_l1_used' field must be of type 'bool'"
        self._gps_l1_used = value

    @builtins.property
    def gps_l2_used(self):
        """Message field 'gps_l2_used'."""
        return self._gps_l2_used

    @gps_l2_used.setter
    def gps_l2_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps_l2_used' field must be of type 'bool'"
        self._gps_l2_used = value

    @builtins.property
    def gps_l5_used(self):
        """Message field 'gps_l5_used'."""
        return self._gps_l5_used

    @gps_l5_used.setter
    def gps_l5_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps_l5_used' field must be of type 'bool'"
        self._gps_l5_used = value

    @builtins.property
    def glo_l1_used(self):
        """Message field 'glo_l1_used'."""
        return self._glo_l1_used

    @glo_l1_used.setter
    def glo_l1_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'glo_l1_used' field must be of type 'bool'"
        self._glo_l1_used = value

    @builtins.property
    def glo_l2_used(self):
        """Message field 'glo_l2_used'."""
        return self._glo_l2_used

    @glo_l2_used.setter
    def glo_l2_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'glo_l2_used' field must be of type 'bool'"
        self._glo_l2_used = value

    @builtins.property
    def glo_l3_used(self):
        """Message field 'glo_l3_used'."""
        return self._glo_l3_used

    @glo_l3_used.setter
    def glo_l3_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'glo_l3_used' field must be of type 'bool'"
        self._glo_l3_used = value

    @builtins.property
    def gal_e1_used(self):
        """Message field 'gal_e1_used'."""
        return self._gal_e1_used

    @gal_e1_used.setter
    def gal_e1_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gal_e1_used' field must be of type 'bool'"
        self._gal_e1_used = value

    @builtins.property
    def gal_e5a_used(self):
        """Message field 'gal_e5a_used'."""
        return self._gal_e5a_used

    @gal_e5a_used.setter
    def gal_e5a_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gal_e5a_used' field must be of type 'bool'"
        self._gal_e5a_used = value

    @builtins.property
    def gal_e5b_used(self):
        """Message field 'gal_e5b_used'."""
        return self._gal_e5b_used

    @gal_e5b_used.setter
    def gal_e5b_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gal_e5b_used' field must be of type 'bool'"
        self._gal_e5b_used = value

    @builtins.property
    def gal_e5alt_used(self):
        """Message field 'gal_e5alt_used'."""
        return self._gal_e5alt_used

    @gal_e5alt_used.setter
    def gal_e5alt_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gal_e5alt_used' field must be of type 'bool'"
        self._gal_e5alt_used = value

    @builtins.property
    def gal_e6_used(self):
        """Message field 'gal_e6_used'."""
        return self._gal_e6_used

    @gal_e6_used.setter
    def gal_e6_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gal_e6_used' field must be of type 'bool'"
        self._gal_e6_used = value

    @builtins.property
    def bds_b1_used(self):
        """Message field 'bds_b1_used'."""
        return self._bds_b1_used

    @bds_b1_used.setter
    def bds_b1_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bds_b1_used' field must be of type 'bool'"
        self._bds_b1_used = value

    @builtins.property
    def bds_b2_used(self):
        """Message field 'bds_b2_used'."""
        return self._bds_b2_used

    @bds_b2_used.setter
    def bds_b2_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bds_b2_used' field must be of type 'bool'"
        self._bds_b2_used = value

    @builtins.property
    def bds_b3_used(self):
        """Message field 'bds_b3_used'."""
        return self._bds_b3_used

    @bds_b3_used.setter
    def bds_b3_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bds_b3_used' field must be of type 'bool'"
        self._bds_b3_used = value

    @builtins.property
    def qzss_l1_used(self):
        """Message field 'qzss_l1_used'."""
        return self._qzss_l1_used

    @qzss_l1_used.setter
    def qzss_l1_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'qzss_l1_used' field must be of type 'bool'"
        self._qzss_l1_used = value

    @builtins.property
    def qzss_l2_used(self):
        """Message field 'qzss_l2_used'."""
        return self._qzss_l2_used

    @qzss_l2_used.setter
    def qzss_l2_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'qzss_l2_used' field must be of type 'bool'"
        self._qzss_l2_used = value

    @builtins.property
    def qzss_l5_used(self):
        """Message field 'qzss_l5_used'."""
        return self._qzss_l5_used

    @qzss_l5_used.setter
    def qzss_l5_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'qzss_l5_used' field must be of type 'bool'"
        self._qzss_l5_used = value
