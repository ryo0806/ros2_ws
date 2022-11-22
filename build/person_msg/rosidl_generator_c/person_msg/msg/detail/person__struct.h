// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from person_msg:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef PERSON_MSG__MSG__DETAIL__PERSON__STRUCT_H_
#define PERSON_MSG__MSG__DETAIL__PERSON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Person in the package person_msg.
typedef struct person_msg__msg__Person
{
  rosidl_runtime_c__String name;
  uint8_t age;
} person_msg__msg__Person;

// Struct for a sequence of person_msg__msg__Person.
typedef struct person_msg__msg__Person__Sequence
{
  person_msg__msg__Person * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} person_msg__msg__Person__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PERSON_MSG__MSG__DETAIL__PERSON__STRUCT_H_
