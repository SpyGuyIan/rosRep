// Generated by gencpp from file ian_bot/PWMgetRequest.msg
// DO NOT EDIT!


#ifndef IAN_BOT_MESSAGE_PWMGETREQUEST_H
#define IAN_BOT_MESSAGE_PWMGETREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ian_bot
{
template <class ContainerAllocator>
struct PWMgetRequest_
{
  typedef PWMgetRequest_<ContainerAllocator> Type;

  PWMgetRequest_()
    : pin(0)  {
    }
  PWMgetRequest_(const ContainerAllocator& _alloc)
    : pin(0)  {
  (void)_alloc;
    }



   typedef uint8_t _pin_type;
  _pin_type pin;





  typedef boost::shared_ptr< ::ian_bot::PWMgetRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ian_bot::PWMgetRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PWMgetRequest_

typedef ::ian_bot::PWMgetRequest_<std::allocator<void> > PWMgetRequest;

typedef boost::shared_ptr< ::ian_bot::PWMgetRequest > PWMgetRequestPtr;
typedef boost::shared_ptr< ::ian_bot::PWMgetRequest const> PWMgetRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ian_bot::PWMgetRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ian_bot::PWMgetRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ian_bot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'ian_bot': ['/home/ian/catkin_ws/src/ian_bot/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ian_bot::PWMgetRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ian_bot::PWMgetRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ian_bot::PWMgetRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ian_bot::PWMgetRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ian_bot::PWMgetRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ian_bot::PWMgetRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ian_bot::PWMgetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "41386d6ac585eedbab7b4d4f9192cbcc";
  }

  static const char* value(const ::ian_bot::PWMgetRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x41386d6ac585eedbULL;
  static const uint64_t static_value2 = 0xab7b4d4f9192cbccULL;
};

template<class ContainerAllocator>
struct DataType< ::ian_bot::PWMgetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ian_bot/PWMgetRequest";
  }

  static const char* value(const ::ian_bot::PWMgetRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ian_bot::PWMgetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
uint8 pin\n\
\n\
";
  }

  static const char* value(const ::ian_bot::PWMgetRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ian_bot::PWMgetRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pin);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PWMgetRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ian_bot::PWMgetRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ian_bot::PWMgetRequest_<ContainerAllocator>& v)
  {
    s << indent << "pin: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pin);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IAN_BOT_MESSAGE_PWMGETREQUEST_H
