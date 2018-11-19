#include "cpu.ih"

bool CPU::lvalue(Operand &lhs)
{
    if (not rvalue(lhs))                // retrieve lhs's value
        return false;                   // error if not

                                        // an lvalue itself may not be a VALUE
    return lhs.type == OperandType::VALUE ? error() : true;
}
