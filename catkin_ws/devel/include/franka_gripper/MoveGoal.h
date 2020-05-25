// Generated by gencpp from file franka_gripper/MoveGoal.msg
// DO NOT EDIT!


#ifndef FRANKA_GRIPPER_MESSAGE_MOVEGOAL_H
#define FRANKA_GRIPPER_MESSAGE_MOVEGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace franka_gripper
{
template <class ContainerAllocator>
struct MoveGoal_
{
  typedef MoveGoal_<ContainerAllocator> Type;

  MoveGoal_()
    : width(0.0)
    , speed(0.0)  {
    }
  MoveGoal_(const ContainerAllocator& _alloc)
    : width(0.0)
    , speed(0.0)  {
  (void)_alloc;
    }



   typedef double _width_type;
  _width_type width;

   typedef double _speed_type;
  _speed_type speed;





  typedef boost::shared_ptr< ::franka_gripper::MoveGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::franka_gripper::MoveGoal_<ContainerAllocator> const> ConstPtr;

}; // struct MoveGoal_

typedef ::franka_gripper::MoveGoal_<std::allocator<void> > MoveGoal;

typedef boost::shared_ptr< ::franka_gripper::MoveGoal > MoveGoalPtr;
typedef boost::shared_ptr< ::franka_gripper::MoveGoal const> MoveGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::franka_gripper::MoveGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::franka_gripper::MoveGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace franka_gripper

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'franka_gripper': ['/home/user/catkin_ws/devel/share/franka_gripper/msg', '/home/user/catkin_ws/src/franka_ros/franka_gripper/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::franka_gripper::MoveGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::franka_gripper::MoveGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::franka_gripper::MoveGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::franka_gripper::MoveGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::franka_gripper::MoveGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::franka_gripper::MoveGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::franka_gripper::MoveGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d16050a0fe85f1c2cb8347c99678362e";
  }

  static const char* value(const ::franka_gripper::MoveGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd16050a0fe85f1c2ULL;
  static const uint64_t static_value2 = 0xcb8347c99678362eULL;
};

template<class ContainerAllocator>
struct DataType< ::franka_gripper::MoveGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "franka_gripper/MoveGoal";
  }

  static const char* value(const ::franka_gripper::MoveGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::franka_gripper::MoveGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
float64 width  # [m]\n\
float64 speed  # [m/s]\n\
";
  }

  static const char* value(const ::franka_gripper::MoveGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::franka_gripper::MoveGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.width);
      stream.next(m.speed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::franka_gripper::MoveGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::franka_gripper::MoveGoal_<ContainerAllocator>& v)
  {
    s << indent << "width: ";
    Printer<double>::stream(s, indent + "  ", v.width);
    s << indent << "speed: ";
    Printer<double>::stream(s, indent + "  ", v.speed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FRANKA_GRIPPER_MESSAGE_MOVEGOAL_H
