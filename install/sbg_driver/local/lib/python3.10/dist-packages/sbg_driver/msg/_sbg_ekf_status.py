# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sbg_driver:msg/SbgEkfStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SbgEkfStatus(type):
    """Metaclass of message 'SbgEkfStatus'."""

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
                'sbg_driver.msg.SbgEkfStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sbg_ekf_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sbg_ekf_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sbg_ekf_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sbg_ekf_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sbg_ekf_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SbgEkfStatus(metaclass=Metaclass_SbgEkfStatus):
    """Message class 'SbgEkfStatus'."""

    __slots__ = [
        '_solution_mode',
        '_attitude_valid',
        '_heading_valid',
        '_velocity_valid',
        '_position_valid',
        '_vert_ref_used',
        '_mag_ref_used',
        '_gps1_vel_used',
        '_gps1_pos_used',
        '_gps1_hdt_used',
        '_gps2_vel_used',
        '_gps2_pos_used',
        '_gps2_hdt_used',
        '_odo_used',
        '_dvl_bt_used',
        '_dvl_wt_used',
        '_user_pos_used',
        '_user_vel_used',
        '_user_heading_used',
        '_usbl_used',
        '_air_data_used',
        '_zupt_used',
        '_align_valid',
        '_depth_used',
    ]

    _fields_and_field_types = {
        'solution_mode': 'uint8',
        'attitude_valid': 'boolean',
        'heading_valid': 'boolean',
        'velocity_valid': 'boolean',
        'position_valid': 'boolean',
        'vert_ref_used': 'boolean',
        'mag_ref_used': 'boolean',
        'gps1_vel_used': 'boolean',
        'gps1_pos_used': 'boolean',
        'gps1_hdt_used': 'boolean',
        'gps2_vel_used': 'boolean',
        'gps2_pos_used': 'boolean',
        'gps2_hdt_used': 'boolean',
        'odo_used': 'boolean',
        'dvl_bt_used': 'boolean',
        'dvl_wt_used': 'boolean',
        'user_pos_used': 'boolean',
        'user_vel_used': 'boolean',
        'user_heading_used': 'boolean',
        'usbl_used': 'boolean',
        'air_data_used': 'boolean',
        'zupt_used': 'boolean',
        'align_valid': 'boolean',
        'depth_used': 'boolean',
    }

    SLOT_TYPES = (
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
        self.solution_mode = kwargs.get('solution_mode', int())
        self.attitude_valid = kwargs.get('attitude_valid', bool())
        self.heading_valid = kwargs.get('heading_valid', bool())
        self.velocity_valid = kwargs.get('velocity_valid', bool())
        self.position_valid = kwargs.get('position_valid', bool())
        self.vert_ref_used = kwargs.get('vert_ref_used', bool())
        self.mag_ref_used = kwargs.get('mag_ref_used', bool())
        self.gps1_vel_used = kwargs.get('gps1_vel_used', bool())
        self.gps1_pos_used = kwargs.get('gps1_pos_used', bool())
        self.gps1_hdt_used = kwargs.get('gps1_hdt_used', bool())
        self.gps2_vel_used = kwargs.get('gps2_vel_used', bool())
        self.gps2_pos_used = kwargs.get('gps2_pos_used', bool())
        self.gps2_hdt_used = kwargs.get('gps2_hdt_used', bool())
        self.odo_used = kwargs.get('odo_used', bool())
        self.dvl_bt_used = kwargs.get('dvl_bt_used', bool())
        self.dvl_wt_used = kwargs.get('dvl_wt_used', bool())
        self.user_pos_used = kwargs.get('user_pos_used', bool())
        self.user_vel_used = kwargs.get('user_vel_used', bool())
        self.user_heading_used = kwargs.get('user_heading_used', bool())
        self.usbl_used = kwargs.get('usbl_used', bool())
        self.air_data_used = kwargs.get('air_data_used', bool())
        self.zupt_used = kwargs.get('zupt_used', bool())
        self.align_valid = kwargs.get('align_valid', bool())
        self.depth_used = kwargs.get('depth_used', bool())

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
        if self.solution_mode != other.solution_mode:
            return False
        if self.attitude_valid != other.attitude_valid:
            return False
        if self.heading_valid != other.heading_valid:
            return False
        if self.velocity_valid != other.velocity_valid:
            return False
        if self.position_valid != other.position_valid:
            return False
        if self.vert_ref_used != other.vert_ref_used:
            return False
        if self.mag_ref_used != other.mag_ref_used:
            return False
        if self.gps1_vel_used != other.gps1_vel_used:
            return False
        if self.gps1_pos_used != other.gps1_pos_used:
            return False
        if self.gps1_hdt_used != other.gps1_hdt_used:
            return False
        if self.gps2_vel_used != other.gps2_vel_used:
            return False
        if self.gps2_pos_used != other.gps2_pos_used:
            return False
        if self.gps2_hdt_used != other.gps2_hdt_used:
            return False
        if self.odo_used != other.odo_used:
            return False
        if self.dvl_bt_used != other.dvl_bt_used:
            return False
        if self.dvl_wt_used != other.dvl_wt_used:
            return False
        if self.user_pos_used != other.user_pos_used:
            return False
        if self.user_vel_used != other.user_vel_used:
            return False
        if self.user_heading_used != other.user_heading_used:
            return False
        if self.usbl_used != other.usbl_used:
            return False
        if self.air_data_used != other.air_data_used:
            return False
        if self.zupt_used != other.zupt_used:
            return False
        if self.align_valid != other.align_valid:
            return False
        if self.depth_used != other.depth_used:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def solution_mode(self):
        """Message field 'solution_mode'."""
        return self._solution_mode

    @solution_mode.setter
    def solution_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'solution_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'solution_mode' field must be an unsigned integer in [0, 255]"
        self._solution_mode = value

    @builtins.property
    def attitude_valid(self):
        """Message field 'attitude_valid'."""
        return self._attitude_valid

    @attitude_valid.setter
    def attitude_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'attitude_valid' field must be of type 'bool'"
        self._attitude_valid = value

    @builtins.property
    def heading_valid(self):
        """Message field 'heading_valid'."""
        return self._heading_valid

    @heading_valid.setter
    def heading_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heading_valid' field must be of type 'bool'"
        self._heading_valid = value

    @builtins.property
    def velocity_valid(self):
        """Message field 'velocity_valid'."""
        return self._velocity_valid

    @velocity_valid.setter
    def velocity_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'velocity_valid' field must be of type 'bool'"
        self._velocity_valid = value

    @builtins.property
    def position_valid(self):
        """Message field 'position_valid'."""
        return self._position_valid

    @position_valid.setter
    def position_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'position_valid' field must be of type 'bool'"
        self._position_valid = value

    @builtins.property
    def vert_ref_used(self):
        """Message field 'vert_ref_used'."""
        return self._vert_ref_used

    @vert_ref_used.setter
    def vert_ref_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vert_ref_used' field must be of type 'bool'"
        self._vert_ref_used = value

    @builtins.property
    def mag_ref_used(self):
        """Message field 'mag_ref_used'."""
        return self._mag_ref_used

    @mag_ref_used.setter
    def mag_ref_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mag_ref_used' field must be of type 'bool'"
        self._mag_ref_used = value

    @builtins.property
    def gps1_vel_used(self):
        """Message field 'gps1_vel_used'."""
        return self._gps1_vel_used

    @gps1_vel_used.setter
    def gps1_vel_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps1_vel_used' field must be of type 'bool'"
        self._gps1_vel_used = value

    @builtins.property
    def gps1_pos_used(self):
        """Message field 'gps1_pos_used'."""
        return self._gps1_pos_used

    @gps1_pos_used.setter
    def gps1_pos_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps1_pos_used' field must be of type 'bool'"
        self._gps1_pos_used = value

    @builtins.property
    def gps1_hdt_used(self):
        """Message field 'gps1_hdt_used'."""
        return self._gps1_hdt_used

    @gps1_hdt_used.setter
    def gps1_hdt_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps1_hdt_used' field must be of type 'bool'"
        self._gps1_hdt_used = value

    @builtins.property
    def gps2_vel_used(self):
        """Message field 'gps2_vel_used'."""
        return self._gps2_vel_used

    @gps2_vel_used.setter
    def gps2_vel_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps2_vel_used' field must be of type 'bool'"
        self._gps2_vel_used = value

    @builtins.property
    def gps2_pos_used(self):
        """Message field 'gps2_pos_used'."""
        return self._gps2_pos_used

    @gps2_pos_used.setter
    def gps2_pos_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps2_pos_used' field must be of type 'bool'"
        self._gps2_pos_used = value

    @builtins.property
    def gps2_hdt_used(self):
        """Message field 'gps2_hdt_used'."""
        return self._gps2_hdt_used

    @gps2_hdt_used.setter
    def gps2_hdt_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps2_hdt_used' field must be of type 'bool'"
        self._gps2_hdt_used = value

    @builtins.property
    def odo_used(self):
        """Message field 'odo_used'."""
        return self._odo_used

    @odo_used.setter
    def odo_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'odo_used' field must be of type 'bool'"
        self._odo_used = value

    @builtins.property
    def dvl_bt_used(self):
        """Message field 'dvl_bt_used'."""
        return self._dvl_bt_used

    @dvl_bt_used.setter
    def dvl_bt_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dvl_bt_used' field must be of type 'bool'"
        self._dvl_bt_used = value

    @builtins.property
    def dvl_wt_used(self):
        """Message field 'dvl_wt_used'."""
        return self._dvl_wt_used

    @dvl_wt_used.setter
    def dvl_wt_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dvl_wt_used' field must be of type 'bool'"
        self._dvl_wt_used = value

    @builtins.property
    def user_pos_used(self):
        """Message field 'user_pos_used'."""
        return self._user_pos_used

    @user_pos_used.setter
    def user_pos_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'user_pos_used' field must be of type 'bool'"
        self._user_pos_used = value

    @builtins.property
    def user_vel_used(self):
        """Message field 'user_vel_used'."""
        return self._user_vel_used

    @user_vel_used.setter
    def user_vel_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'user_vel_used' field must be of type 'bool'"
        self._user_vel_used = value

    @builtins.property
    def user_heading_used(self):
        """Message field 'user_heading_used'."""
        return self._user_heading_used

    @user_heading_used.setter
    def user_heading_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'user_heading_used' field must be of type 'bool'"
        self._user_heading_used = value

    @builtins.property
    def usbl_used(self):
        """Message field 'usbl_used'."""
        return self._usbl_used

    @usbl_used.setter
    def usbl_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'usbl_used' field must be of type 'bool'"
        self._usbl_used = value

    @builtins.property
    def air_data_used(self):
        """Message field 'air_data_used'."""
        return self._air_data_used

    @air_data_used.setter
    def air_data_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'air_data_used' field must be of type 'bool'"
        self._air_data_used = value

    @builtins.property
    def zupt_used(self):
        """Message field 'zupt_used'."""
        return self._zupt_used

    @zupt_used.setter
    def zupt_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'zupt_used' field must be of type 'bool'"
        self._zupt_used = value

    @builtins.property
    def align_valid(self):
        """Message field 'align_valid'."""
        return self._align_valid

    @align_valid.setter
    def align_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'align_valid' field must be of type 'bool'"
        self._align_valid = value

    @builtins.property
    def depth_used(self):
        """Message field 'depth_used'."""
        return self._depth_used

    @depth_used.setter
    def depth_used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'depth_used' field must be of type 'bool'"
        self._depth_used = value
