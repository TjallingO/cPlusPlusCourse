#include "cpu.ih"

void CPU::dsp()
{
    Operand rhs;

    if (not rvalue(rhs))            // retrieve the last computed value
        return;

    cout << dereference(rhs) << endl;   // display it.
}
