#include "cpu.ih"

int (CPU::*CPU::s_deref[])(int input_number) =
{
  &CPU::get_register,
  &Memory::load,
  &CPU::value,
};

void (CPU::*CPU::s_lhstype[])(int lhsvalue, int value) =
{
  &CPU::regStore,
  &Memory::store,
};
