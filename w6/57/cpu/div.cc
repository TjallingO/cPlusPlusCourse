#include "cpu.ih"

void CPU::div()
{
    Operand lhs;
    int lhsValue;
    int rhsValue;

    if (not twoOperands(lhs, lhsValue, rhsValue))   // get div's two operands
        return;                                     // or quit

    if (
        (
            lhs.type == OperandType::REGISTER       // lhs cannot be
            &&                                      // the last register
            lhs.value == LAST_REGISTER
        )
        ||
        rhsValue == 0                               //  rhs cannot be 0
    )
    {
        error();
        return;
    }

    store(lhs, lhsValue / rhsValue);                // compute and store the
                                                    // result

//  How to handle % -operations:
//    lhs = Operand{ OperandType::REGISTER, LAST_REGISTER };
//    store(lhs, lhsValue % rhsValue);
}
