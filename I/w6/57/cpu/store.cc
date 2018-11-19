#include "cpu.ih"


void CPU::store(Operand const &lhs, int value)
{
    OperandType loc_type = lhs.type;



    (this->*s_lhstype[static_cast<size_t>(loc_type)])(lhs.value, value);
    //using static cast since were using Enum Classes
}
//instead of the switch we now have pointers to functions.
