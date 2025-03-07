# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from robot_msgs/Robot_ctrl.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Robot_ctrl(genpy.Message):
  _md5sum = "086d932d89a70cee1876019fbed8c143"
  _type = "robot_msgs/Robot_ctrl"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """float32 vx
float32 vy
float32 vw
float32 yaw
float32 pitch
int8 target_lock
int8 fire_command"""
  __slots__ = ['vx','vy','vw','yaw','pitch','target_lock','fire_command']
  _slot_types = ['float32','float32','float32','float32','float32','int8','int8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       vx,vy,vw,yaw,pitch,target_lock,fire_command

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Robot_ctrl, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.vx is None:
        self.vx = 0.
      if self.vy is None:
        self.vy = 0.
      if self.vw is None:
        self.vw = 0.
      if self.yaw is None:
        self.yaw = 0.
      if self.pitch is None:
        self.pitch = 0.
      if self.target_lock is None:
        self.target_lock = 0
      if self.fire_command is None:
        self.fire_command = 0
    else:
      self.vx = 0.
      self.vy = 0.
      self.vw = 0.
      self.yaw = 0.
      self.pitch = 0.
      self.target_lock = 0
      self.fire_command = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_5f2b().pack(_x.vx, _x.vy, _x.vw, _x.yaw, _x.pitch, _x.target_lock, _x.fire_command))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 22
      (_x.vx, _x.vy, _x.vw, _x.yaw, _x.pitch, _x.target_lock, _x.fire_command,) = _get_struct_5f2b().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_5f2b().pack(_x.vx, _x.vy, _x.vw, _x.yaw, _x.pitch, _x.target_lock, _x.fire_command))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 22
      (_x.vx, _x.vy, _x.vw, _x.yaw, _x.pitch, _x.target_lock, _x.fire_command,) = _get_struct_5f2b().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_5f2b = None
def _get_struct_5f2b():
    global _struct_5f2b
    if _struct_5f2b is None:
        _struct_5f2b = struct.Struct("<5f2b")
    return _struct_5f2b
