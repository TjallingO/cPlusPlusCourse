#include "cpu.ih"

void (CPU::*CPU::s_deref[])(int input_number)
{
  &CPU::get_register,
  &Memory::load,
  &CPU::value,
};

 int CPU::dereference(Operand const &value)
 {
     OperandType loc_type = value.type;

     (this->* s_deref[loc_type])(value.value);
 }
