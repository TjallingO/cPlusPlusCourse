#include "cpu.ih"

    void CPU::mov()
    {
        Operand lhs;
        Operand rhs;

        if (not operands(lhs, rhs))         // need two operands
            return;

        store(lhs, dereference(rhs));       // store rhs's value at lhs
    }
