// Generated by gencpp from file robot_msgs/Robot_ctrl.msg
// DO NOT EDIT!


#ifndef ROBOT_MSGS_MESSAGE_ROBOT_CTRL_H
#define ROBOT_MSGS_MESSAGE_ROBOT_CTRL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robot_msgs
{
template <class ContainerAllocator>
struct Robot_ctrl_
{
  typedef Robot_ctrl_<ContainerAllocator> Type;

  Robot_ctrl_()
    : vx(0.0)
    , vy(0.0)
    , vw(0.0)
    , yaw(0.0)
    , pitch(0.0)
    , target_lock(0)
    , fire_command(0)  {
    }
  Robot_ctrl_(const ContainerAllocator& _alloc)
    : vx(0.0)
    , vy(0.0)
    , vw(0.0)
    , yaw(0.0)
    , pitch(0.0)
    , target_lock(0)
    , fire_command(0)  {
  (void)_alloc;
    }



   typedef float _vx_type;
  _vx_type vx;

   typedef float _vy_type;
  _vy_type vy;

   typedef float _vw_type;
  _vw_type vw;

   typedef float _yaw_type;
  _yaw_type yaw;

   typedef float _pitch_type;
  _pitch_type pitch;

   typedef int8_t _target_lock_type;
  _target_lock_type target_lock;

   typedef int8_t _fire_command_type;
  _fire_command_type fire_command;





  typedef boost::shared_ptr< ::robot_msgs::Robot_ctrl_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_msgs::Robot_ctrl_<ContainerAllocator> const> ConstPtr;

}; // struct Robot_ctrl_

typedef ::robot_msgs::Robot_ctrl_<std::allocator<void> > Robot_ctrl;

typedef boost::shared_ptr< ::robot_msgs::Robot_ctrl > Robot_ctrlPtr;
typedef boost::shared_ptr< ::robot_msgs::Robot_ctrl const> Robot_ctrlConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_msgs::Robot_ctrl_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_msgs::Robot_ctrl_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robot_msgs::Robot_ctrl_<ContainerAllocator1> & lhs, const ::robot_msgs::Robot_ctrl_<ContainerAllocator2> & rhs)
{
  return lhs.vx == rhs.vx &&
    lhs.vy == rhs.vy &&
    lhs.vw == rhs.vw &&
    lhs.yaw == rhs.yaw &&
    lhs.pitch == rhs.pitch &&
    lhs.target_lock == rhs.target_lock &&
    lhs.fire_command == rhs.fire_command;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robot_msgs::Robot_ctrl_<ContainerAllocator1> & lhs, const ::robot_msgs::Robot_ctrl_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robot_msgs::Robot_ctrl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_msgs::Robot_ctrl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msgs::Robot_ctrl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msgs::Robot_ctrl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msgs::Robot_ctrl_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msgs::Robot_ctrl_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_msgs::Robot_ctrl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "086d932d89a70cee1876019fbed8c143";
  }

  static const char* value(const ::robot_msgs::Robot_ctrl_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x086d932d89a70ceeULL;
  static const uint64_t static_value2 = 0x1876019fbed8c143ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_msgs::Robot_ctrl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_msgs/Robot_ctrl";
  }

  static const char* value(const ::robot_msgs::Robot_ctrl_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_msgs::Robot_ctrl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 vx\n"
"float32 vy\n"
"float32 vw\n"
"float32 yaw\n"
"float32 pitch\n"
"int8 target_lock\n"
"int8 fire_command\n"
;
  }

  static const char* value(const ::robot_msgs::Robot_ctrl_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_msgs::Robot_ctrl_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.vx);
      stream.next(m.vy);
      stream.next(m.vw);
      stream.next(m.yaw);
      stream.next(m.pitch);
      stream.next(m.target_lock);
      stream.next(m.fire_command);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Robot_ctrl_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_msgs::Robot_ctrl_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_msgs::Robot_ctrl_<ContainerAllocator>& v)
  {
    s << indent << "vx: ";
    Printer<float>::stream(s, indent + "  ", v.vx);
    s << indent << "vy: ";
    Printer<float>::stream(s, indent + "  ", v.vy);
    s << indent << "vw: ";
    Printer<float>::stream(s, indent + "  ", v.vw);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
    s << indent << "pitch: ";
    Printer<float>::stream(s, indent + "  ", v.pitch);
    s << indent << "target_lock: ";
    Printer<int8_t>::stream(s, indent + "  ", v.target_lock);
    s << indent << "fire_command: ";
    Printer<int8_t>::stream(s, indent + "  ", v.fire_command);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_MSGS_MESSAGE_ROBOT_CTRL_H
