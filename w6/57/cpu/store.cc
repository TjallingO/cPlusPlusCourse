#include "cpu.ih"

void (CPU::*CPU::s_action[])(int lhs.value, int value) =
{
  &CPU::regstore(),
  &Memory::store(),
};

void CPU::store(Operand const &lhs, int value)
{
    OperandType loc_type = lhs.type;

    (this->*s_lhstype[loc_type])(lhs.value, value);
}
//instead of the switch we now have pointers to functions.
