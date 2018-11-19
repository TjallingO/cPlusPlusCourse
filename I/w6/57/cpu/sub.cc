#include "cpu.ih"

void CPU::sub()
{
    Operand lhs;
    int lhsValue;
    int rhsValue;

    if (not twoOperands(lhs, lhsValue, rhsValue))   // get sub's two operands
        return;                                     // or quit

    store(lhs, lhsValue - rhsValue);            // compute and store the result
}
