#include "cpu.ih"

bool CPU::operands(Operand &lhs, Operand &rhs)
{
    bool ret = lvalue(lhs) && rvalue(rhs);  // verity correct operand types

    if (ret)
    {
        if (                                // but not memory twice
            lhs.type == OperandType::MEMORY
            &&
            rhs.type == OperandType::MEMORY
        )
            return error();
    }

    return ret;                             // return true: operands OK
}
