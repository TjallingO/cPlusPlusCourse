#include "cpu.ih"

void CPU::mul()
{
    Operand lhs;
    int lhsValue;
    int rhsValue;

    if (not twoOperands(lhs, lhsValue, rhsValue))   // get mul's two operands
        return;                                     // or quit

    store(lhs, lhsValue * rhsValue);            // compute and store the result
}
