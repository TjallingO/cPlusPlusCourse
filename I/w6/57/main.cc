#include "main.ih"

int main()
{
    Memory memory;              // define the computer's memory

    CPU cpu(memory);            // and its cpu

    cpu.run();                  // start the cpu
}
