#include "cpu.ih"

void CPU::neg()
{
    Operand lhs;

    if (not lvalue(lhs))            // lhs must accept new values
        return;

    store(lhs, -dereference(lhs));  // store -lhs's value at value
}
