// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from person_msg:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef PERSON_MSG__MSG__DETAIL__PERSON__TRAITS_HPP_
#define PERSON_MSG__MSG__DETAIL__PERSON__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "person_msg/msg/detail/person__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace person_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Person & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: age
  {
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Person & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Person & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace person_msg

namespace rosidl_generator_traits
{

[[deprecated("use person_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const person_msg::msg::Person & msg,
  std::ostream & out, size_t indentation = 0)
{
  person_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use person_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const person_msg::msg::Person & msg)
{
  return person_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<person_msg::msg::Person>()
{
  return "person_msg::msg::Person";
}

template<>
inline const char * name<person_msg::msg::Person>()
{
  return "person_msg/msg/Person";
}

template<>
struct has_fixed_size<person_msg::msg::Person>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<person_msg::msg::Person>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<person_msg::msg::Person>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PERSON_MSG__MSG__DETAIL__PERSON__TRAITS_HPP_
