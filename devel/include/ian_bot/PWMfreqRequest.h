// Generated by gencpp from file ian_bot/PWMfreqRequest.msg
// DO NOT EDIT!


#ifndef IAN_BOT_MESSAGE_PWMFREQREQUEST_H
#define IAN_BOT_MESSAGE_PWMFREQREQUEST_H


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
struct PWMfreqRequest_
{
  typedef PWMfreqRequest_<ContainerAllocator> Type;

  PWMfreqRequest_()
    : pin(0)
    , freq(0)  {
    }
  PWMfreqRequest_(const ContainerAllocator& _alloc)
    : pin(0)
    , freq(0)  {
  (void)_alloc;
    }



   typedef uint8_t _pin_type;
  _pin_type pin;

   typedef uint16_t _freq_type;
  _freq_type freq;





  typedef boost::shared_ptr< ::ian_bot::PWMfreqRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ian_bot::PWMfreqRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PWMfreqRequest_

typedef ::ian_bot::PWMfreqRequest_<std::allocator<void> > PWMfreqRequest;

typedef boost::shared_ptr< ::ian_bot::PWMfreqRequest > PWMfreqRequestPtr;
typedef boost::shared_ptr< ::ian_bot::PWMfreqRequest const> PWMfreqRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ian_bot::PWMfreqRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ian_bot::PWMfreqRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::ian_bot::PWMfreqRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ian_bot::PWMfreqRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ian_bot::PWMfreqRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ian_bot::PWMfreqRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ian_bot::PWMfreqRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ian_bot::PWMfreqRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ian_bot::PWMfreqRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6c113b04c16feb54800f5386454232b7";
  }

  static const char* value(const ::ian_bot::PWMfreqRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6c113b04c16feb54ULL;
  static const uint64_t static_value2 = 0x800f5386454232b7ULL;
};

template<class ContainerAllocator>
struct DataType< ::ian_bot::PWMfreqRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ian_bot/PWMfreqRequest";
  }

  static const char* value(const ::ian_bot::PWMfreqRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ian_bot::PWMfreqRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
uint8 pin\n\
\n\
\n\
uint16 freq\n\
\n\
";
  }

  static const char* value(const ::ian_bot::PWMfreqRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ian_bot::PWMfreqRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pin);
      stream.next(m.freq);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PWMfreqRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ian_bot::PWMfreqRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ian_bot::PWMfreqRequest_<ContainerAllocator>& v)
  {
    s << indent << "pin: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pin);
    s << indent << "freq: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.freq);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IAN_BOT_MESSAGE_PWMFREQREQUEST_H
