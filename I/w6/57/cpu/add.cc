#include "cpu.ih"

void CPU::add()
{
    Operand lhs;
    int lhsValue;
    int rhsValue;

    if (not twoOperands(lhs, lhsValue, rhsValue))   // get add's two operands
        return;                                     // or quit

    store(lhs, lhsValue + rhsValue);            // compute and store the result
}
