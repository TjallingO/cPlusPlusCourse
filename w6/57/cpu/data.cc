#include "cpu.ih"

void (CPU::*CPU::s_deref[])(int input_number)
{
  &CPU::get_register,
  &Memory::load,
  &CPU::value,
};

void (CPU::*CPU::s_action[])(int lhs.value, int value) =
{
  &CPU::regstore(),
  &Memory::store(),
};
