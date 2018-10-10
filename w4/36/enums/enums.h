// ENUMS class: header file

#ifndef INCLUDED_ENUMS_
#define INCLUDED_ENUMS_

#include <cstddef>

enum class RAM: size_t
{
  SIZE = 20
};

enum class Opcode: size_t
{
  ERR,
  MOV,
  ADD,
  SUB,
  MUL,
  DIV,
  NEG,
  DSP,
  STOP
};

enum class OperandType: size_t
{
  SYNTAX,
  VALUE,
  REGISTER,
  MEMORY
};

#endif
