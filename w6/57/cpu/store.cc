#include "cpu.ih"


void CPU::store(Operand const &lhs, int value)
{
    OperandType loc_type = lhs.type;

    (this->*s_action[loc_type])(lhs.value, value);
}
//instead of the switch we now have pointers to functions.
