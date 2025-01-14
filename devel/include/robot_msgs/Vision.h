// Generated by gencpp from file robot_msgs/Vision.msg
// DO NOT EDIT!


#ifndef ROBOT_MSGS_MESSAGE_VISION_H
#define ROBOT_MSGS_MESSAGE_VISION_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace robot_msgs
{
template <class ContainerAllocator>
struct Vision_
{
  typedef Vision_<ContainerAllocator> Type;

  Vision_()
    : header()
    , id(0)
    , mode(0)
    , pitch(0.0)
    , yaw(0.0)
    , roll(0.0)
    , quaternion()
    , shoot(0.0)  {
    }
  Vision_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , id(0)
    , mode(0)
    , pitch(0.0)
    , yaw(0.0)
    , roll(0.0)
    , quaternion(_alloc)
    , shoot(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint16_t _id_type;
  _id_type id;

   typedef uint16_t _mode_type;
  _mode_type mode;

   typedef float _pitch_type;
  _pitch_type pitch;

   typedef float _yaw_type;
  _yaw_type yaw;

   typedef float _roll_type;
  _roll_type roll;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _quaternion_type;
  _quaternion_type quaternion;

   typedef float _shoot_type;
  _shoot_type shoot;





  typedef boost::shared_ptr< ::robot_msgs::Vision_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_msgs::Vision_<ContainerAllocator> const> ConstPtr;

}; // struct Vision_

typedef ::robot_msgs::Vision_<std::allocator<void> > Vision;

typedef boost::shared_ptr< ::robot_msgs::Vision > VisionPtr;
typedef boost::shared_ptr< ::robot_msgs::Vision const> VisionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_msgs::Vision_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_msgs::Vision_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robot_msgs::Vision_<ContainerAllocator1> & lhs, const ::robot_msgs::Vision_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.id == rhs.id &&
    lhs.mode == rhs.mode &&
    lhs.pitch == rhs.pitch &&
    lhs.yaw == rhs.yaw &&
    lhs.roll == rhs.roll &&
    lhs.quaternion == rhs.quaternion &&
    lhs.shoot == rhs.shoot;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robot_msgs::Vision_<ContainerAllocator1> & lhs, const ::robot_msgs::Vision_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robot_msgs::Vision_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_msgs::Vision_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msgs::Vision_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msgs::Vision_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msgs::Vision_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msgs::Vision_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_msgs::Vision_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b30d54651ad2a2d8242e6a86edff3997";
  }

  static const char* value(const ::robot_msgs::Vision_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb30d54651ad2a2d8ULL;
  static const uint64_t static_value2 = 0x242e6a86edff3997ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_msgs::Vision_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_msgs/Vision";
  }

  static const char* value(const ::robot_msgs::Vision_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_msgs::Vision_<ContainerAllocator> >
{
  static const char* value()
  {
    return "  Header header\n"
"  uint16 id\n"
"  uint16 mode\n"
"  float32 pitch\n"
"  float32 yaw\n"
"  float32 roll\n"
"  float32[] quaternion\n"
"  float32 shoot\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::robot_msgs::Vision_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_msgs::Vision_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.id);
      stream.next(m.mode);
      stream.next(m.pitch);
      stream.next(m.yaw);
      stream.next(m.roll);
      stream.next(m.quaternion);
      stream.next(m.shoot);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Vision_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_msgs::Vision_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_msgs::Vision_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "id: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.id);
    s << indent << "mode: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.mode);
    s << indent << "pitch: ";
    Printer<float>::stream(s, indent + "  ", v.pitch);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
    s << indent << "roll: ";
    Printer<float>::stream(s, indent + "  ", v.roll);
    s << indent << "quaternion[]" << std::endl;
    for (size_t i = 0; i < v.quaternion.size(); ++i)
    {
      s << indent << "  quaternion[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.quaternion[i]);
    }
    s << indent << "shoot: ";
    Printer<float>::stream(s, indent + "  ", v.shoot);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_MSGS_MESSAGE_VISION_H
