# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sbg_driver:msg/SbgStatusCom.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SbgStatusCom(type):
    """Metaclass of message 'SbgStatusCom'."""

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
                'sbg_driver.msg.SbgStatusCom')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sbg_status_com
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sbg_status_com
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sbg_status_com
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sbg_status_com
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sbg_status_com

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SbgStatusCom(metaclass=Metaclass_SbgStatusCom):
    """Message class 'SbgStatusCom'."""

    __slots__ = [
        '_port_a',
        '_port_b',
        '_port_c',
        '_port_d',
        '_port_e',
        '_port_a_rx',
        '_port_a_tx',
        '_port_b_rx',
        '_port_b_tx',
        '_port_c_rx',
        '_port_c_tx',
        '_port_d_rx',
        '_port_d_tx',
        '_port_e_rx',
        '_port_e_tx',
        '_eth_0',
        '_eth_1',
        '_eth_2',
        '_eth_3',
        '_eth_4',
        '_eth_0_rx',
        '_eth_0_tx',
        '_eth_1_rx',
        '_eth_1_tx',
        '_eth_2_rx',
        '_eth_2_tx',
        '_eth_3_rx',
        '_eth_3_tx',
        '_eth_4_rx',
        '_eth_4_tx',
        '_can_rx',
        '_can_tx',
        '_can_status',
    ]

    _fields_and_field_types = {
        'port_a': 'boolean',
        'port_b': 'boolean',
        'port_c': 'boolean',
        'port_d': 'boolean',
        'port_e': 'boolean',
        'port_a_rx': 'boolean',
        'port_a_tx': 'boolean',
        'port_b_rx': 'boolean',
        'port_b_tx': 'boolean',
        'port_c_rx': 'boolean',
        'port_c_tx': 'boolean',
        'port_d_rx': 'boolean',
        'port_d_tx': 'boolean',
        'port_e_rx': 'boolean',
        'port_e_tx': 'boolean',
        'eth_0': 'boolean',
        'eth_1': 'boolean',
        'eth_2': 'boolean',
        'eth_3': 'boolean',
        'eth_4': 'boolean',
        'eth_0_rx': 'boolean',
        'eth_0_tx': 'boolean',
        'eth_1_rx': 'boolean',
        'eth_1_tx': 'boolean',
        'eth_2_rx': 'boolean',
        'eth_2_tx': 'boolean',
        'eth_3_rx': 'boolean',
        'eth_3_tx': 'boolean',
        'eth_4_rx': 'boolean',
        'eth_4_tx': 'boolean',
        'can_rx': 'boolean',
        'can_tx': 'boolean',
        'can_status': 'uint8',
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
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.port_a = kwargs.get('port_a', bool())
        self.port_b = kwargs.get('port_b', bool())
        self.port_c = kwargs.get('port_c', bool())
        self.port_d = kwargs.get('port_d', bool())
        self.port_e = kwargs.get('port_e', bool())
        self.port_a_rx = kwargs.get('port_a_rx', bool())
        self.port_a_tx = kwargs.get('port_a_tx', bool())
        self.port_b_rx = kwargs.get('port_b_rx', bool())
        self.port_b_tx = kwargs.get('port_b_tx', bool())
        self.port_c_rx = kwargs.get('port_c_rx', bool())
        self.port_c_tx = kwargs.get('port_c_tx', bool())
        self.port_d_rx = kwargs.get('port_d_rx', bool())
        self.port_d_tx = kwargs.get('port_d_tx', bool())
        self.port_e_rx = kwargs.get('port_e_rx', bool())
        self.port_e_tx = kwargs.get('port_e_tx', bool())
        self.eth_0 = kwargs.get('eth_0', bool())
        self.eth_1 = kwargs.get('eth_1', bool())
        self.eth_2 = kwargs.get('eth_2', bool())
        self.eth_3 = kwargs.get('eth_3', bool())
        self.eth_4 = kwargs.get('eth_4', bool())
        self.eth_0_rx = kwargs.get('eth_0_rx', bool())
        self.eth_0_tx = kwargs.get('eth_0_tx', bool())
        self.eth_1_rx = kwargs.get('eth_1_rx', bool())
        self.eth_1_tx = kwargs.get('eth_1_tx', bool())
        self.eth_2_rx = kwargs.get('eth_2_rx', bool())
        self.eth_2_tx = kwargs.get('eth_2_tx', bool())
        self.eth_3_rx = kwargs.get('eth_3_rx', bool())
        self.eth_3_tx = kwargs.get('eth_3_tx', bool())
        self.eth_4_rx = kwargs.get('eth_4_rx', bool())
        self.eth_4_tx = kwargs.get('eth_4_tx', bool())
        self.can_rx = kwargs.get('can_rx', bool())
        self.can_tx = kwargs.get('can_tx', bool())
        self.can_status = kwargs.get('can_status', int())

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
        if self.port_a != other.port_a:
            return False
        if self.port_b != other.port_b:
            return False
        if self.port_c != other.port_c:
            return False
        if self.port_d != other.port_d:
            return False
        if self.port_e != other.port_e:
            return False
        if self.port_a_rx != other.port_a_rx:
            return False
        if self.port_a_tx != other.port_a_tx:
            return False
        if self.port_b_rx != other.port_b_rx:
            return False
        if self.port_b_tx != other.port_b_tx:
            return False
        if self.port_c_rx != other.port_c_rx:
            return False
        if self.port_c_tx != other.port_c_tx:
            return False
        if self.port_d_rx != other.port_d_rx:
            return False
        if self.port_d_tx != other.port_d_tx:
            return False
        if self.port_e_rx != other.port_e_rx:
            return False
        if self.port_e_tx != other.port_e_tx:
            return False
        if self.eth_0 != other.eth_0:
            return False
        if self.eth_1 != other.eth_1:
            return False
        if self.eth_2 != other.eth_2:
            return False
        if self.eth_3 != other.eth_3:
            return False
        if self.eth_4 != other.eth_4:
            return False
        if self.eth_0_rx != other.eth_0_rx:
            return False
        if self.eth_0_tx != other.eth_0_tx:
            return False
        if self.eth_1_rx != other.eth_1_rx:
            return False
        if self.eth_1_tx != other.eth_1_tx:
            return False
        if self.eth_2_rx != other.eth_2_rx:
            return False
        if self.eth_2_tx != other.eth_2_tx:
            return False
        if self.eth_3_rx != other.eth_3_rx:
            return False
        if self.eth_3_tx != other.eth_3_tx:
            return False
        if self.eth_4_rx != other.eth_4_rx:
            return False
        if self.eth_4_tx != other.eth_4_tx:
            return False
        if self.can_rx != other.can_rx:
            return False
        if self.can_tx != other.can_tx:
            return False
        if self.can_status != other.can_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def port_a(self):
        """Message field 'port_a'."""
        return self._port_a

    @port_a.setter
    def port_a(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'port_a' field must be of type 'bool'"
        self._port_a = value

    @builtins.property
    def port_b(self):
        """Message field 'port_b'."""
        return self._port_b

    @port_b.setter
    def port_b(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'port_b' field must be of type 'bool'"
        self._port_b = value

    @builtins.property
    def port_c(self):
        """Message field 'port_c'."""
        return self._port_c

    @port_c.setter
    def port_c(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'port_c' field must be of type 'bool'"
        self._port_c = value

    @builtins.property
    def port_d(self):
        """Message field 'port_d'."""
        return self._port_d

    @port_d.setter
    def port_d(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'port_d' field must be of type 'bool'"
        self._port_d = value

    @builtins.property
    def port_e(self):
        """Message field 'port_e'."""
        return self._port_e

    @port_e.setter
    def port_e(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'port_e' field must be of type 'bool'"
        self._port_e = value

    @builtins.property
    def port_a_rx(self):
        """Message field 'port_a_rx'."""
        return self._port_a_rx

    @port_a_rx.setter
    def port_a_rx(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'port_a_rx' field must be of type 'bool'"
        self._port_a_rx = value

    @builtins.property
    def port_a_tx(self):
        """Message field 'port_a_tx'."""
        return self._port_a_tx

    @port_a_tx.setter
    def port_a_tx(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'port_a_tx' field must be of type 'bool'"
        self._port_a_tx = value

    @builtins.property
    def port_b_rx(self):
        """Message field 'port_b_rx'."""
        return self._port_b_rx

    @port_b_rx.setter
    def port_b_rx(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'port_b_rx' field must be of type 'bool'"
        self._port_b_rx = value

    @builtins.property
    def port_b_tx(self):
        """Message field 'port_b_tx'."""
        return self._port_b_tx

    @port_b_tx.setter
    def port_b_tx(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'port_b_tx' field must be of type 'bool'"
        self._port_b_tx = value

    @builtins.property
    def port_c_rx(self):
        """Message field 'port_c_rx'."""
        return self._port_c_rx

    @port_c_rx.setter
    def port_c_rx(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'port_c_rx' field must be of type 'bool'"
        self._port_c_rx = value

    @builtins.property
    def port_c_tx(self):
        """Message field 'port_c_tx'."""
        return self._port_c_tx

    @port_c_tx.setter
    def port_c_tx(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'port_c_tx' field must be of type 'bool'"
        self._port_c_tx = value

    @builtins.property
    def port_d_rx(self):
        """Message field 'port_d_rx'."""
        return self._port_d_rx

    @port_d_rx.setter
    def port_d_rx(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'port_d_rx' field must be of type 'bool'"
        self._port_d_rx = value

    @builtins.property
    def port_d_tx(self):
        """Message field 'port_d_tx'."""
        return self._port_d_tx

    @port_d_tx.setter
    def port_d_tx(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'port_d_tx' field must be of type 'bool'"
        self._port_d_tx = value

    @builtins.property
    def port_e_rx(self):
        """Message field 'port_e_rx'."""
        return self._port_e_rx

    @port_e_rx.setter
    def port_e_rx(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'port_e_rx' field must be of type 'bool'"
        self._port_e_rx = value

    @builtins.property
    def port_e_tx(self):
        """Message field 'port_e_tx'."""
        return self._port_e_tx

    @port_e_tx.setter
    def port_e_tx(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'port_e_tx' field must be of type 'bool'"
        self._port_e_tx = value

    @builtins.property
    def eth_0(self):
        """Message field 'eth_0'."""
        return self._eth_0

    @eth_0.setter
    def eth_0(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'eth_0' field must be of type 'bool'"
        self._eth_0 = value

    @builtins.property
    def eth_1(self):
        """Message field 'eth_1'."""
        return self._eth_1

    @eth_1.setter
    def eth_1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'eth_1' field must be of type 'bool'"
        self._eth_1 = value

    @builtins.property
    def eth_2(self):
        """Message field 'eth_2'."""
        return self._eth_2

    @eth_2.setter
    def eth_2(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'eth_2' field must be of type 'bool'"
        self._eth_2 = value

    @builtins.property
    def eth_3(self):
        """Message field 'eth_3'."""
        return self._eth_3

    @eth_3.setter
    def eth_3(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'eth_3' field must be of type 'bool'"
        self._eth_3 = value

    @builtins.property
    def eth_4(self):
        """Message field 'eth_4'."""
        return self._eth_4

    @eth_4.setter
    def eth_4(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'eth_4' field must be of type 'bool'"
        self._eth_4 = value

    @builtins.property
    def eth_0_rx(self):
        """Message field 'eth_0_rx'."""
        return self._eth_0_rx

    @eth_0_rx.setter
    def eth_0_rx(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'eth_0_rx' field must be of type 'bool'"
        self._eth_0_rx = value

    @builtins.property
    def eth_0_tx(self):
        """Message field 'eth_0_tx'."""
        return self._eth_0_tx

    @eth_0_tx.setter
    def eth_0_tx(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'eth_0_tx' field must be of type 'bool'"
        self._eth_0_tx = value

    @builtins.property
    def eth_1_rx(self):
        """Message field 'eth_1_rx'."""
        return self._eth_1_rx

    @eth_1_rx.setter
    def eth_1_rx(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'eth_1_rx' field must be of type 'bool'"
        self._eth_1_rx = value

    @builtins.property
    def eth_1_tx(self):
        """Message field 'eth_1_tx'."""
        return self._eth_1_tx

    @eth_1_tx.setter
    def eth_1_tx(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'eth_1_tx' field must be of type 'bool'"
        self._eth_1_tx = value

    @builtins.property
    def eth_2_rx(self):
        """Message field 'eth_2_rx'."""
        return self._eth_2_rx

    @eth_2_rx.setter
    def eth_2_rx(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'eth_2_rx' field must be of type 'bool'"
        self._eth_2_rx = value

    @builtins.property
    def eth_2_tx(self):
        """Message field 'eth_2_tx'."""
        return self._eth_2_tx

    @eth_2_tx.setter
    def eth_2_tx(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'eth_2_tx' field must be of type 'bool'"
        self._eth_2_tx = value

    @builtins.property
    def eth_3_rx(self):
        """Message field 'eth_3_rx'."""
        return self._eth_3_rx

    @eth_3_rx.setter
    def eth_3_rx(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'eth_3_rx' field must be of type 'bool'"
        self._eth_3_rx = value

    @builtins.property
    def eth_3_tx(self):
        """Message field 'eth_3_tx'."""
        return self._eth_3_tx

    @eth_3_tx.setter
    def eth_3_tx(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'eth_3_tx' field must be of type 'bool'"
        self._eth_3_tx = value

    @builtins.property
    def eth_4_rx(self):
        """Message field 'eth_4_rx'."""
        return self._eth_4_rx

    @eth_4_rx.setter
    def eth_4_rx(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'eth_4_rx' field must be of type 'bool'"
        self._eth_4_rx = value

    @builtins.property
    def eth_4_tx(self):
        """Message field 'eth_4_tx'."""
        return self._eth_4_tx

    @eth_4_tx.setter
    def eth_4_tx(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'eth_4_tx' field must be of type 'bool'"
        self._eth_4_tx = value

    @builtins.property
    def can_rx(self):
        """Message field 'can_rx'."""
        return self._can_rx

    @can_rx.setter
    def can_rx(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_rx' field must be of type 'bool'"
        self._can_rx = value

    @builtins.property
    def can_tx(self):
        """Message field 'can_tx'."""
        return self._can_tx

    @can_tx.setter
    def can_tx(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_tx' field must be of type 'bool'"
        self._can_tx = value

    @builtins.property
    def can_status(self):
        """Message field 'can_status'."""
        return self._can_status

    @can_status.setter
    def can_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can_status' field must be an unsigned integer in [0, 255]"
        self._can_status = value
