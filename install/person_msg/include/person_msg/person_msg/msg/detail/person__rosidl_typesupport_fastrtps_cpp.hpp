// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from person_msg:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef PERSON_MSG__MSG__DETAIL__PERSON__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PERSON_MSG__MSG__DETAIL__PERSON__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "person_msg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "person_msg/msg/detail/person__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace person_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_person_msg
cdr_serialize(
  const person_msg::msg::Person & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_person_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  person_msg::msg::Person & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_person_msg
get_serialized_size(
  const person_msg::msg::Person & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_person_msg
max_serialized_size_Person(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace person_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_person_msg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, person_msg, msg, Person)();

#ifdef __cplusplus
}
#endif

#endif  // PERSON_MSG__MSG__DETAIL__PERSON__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
