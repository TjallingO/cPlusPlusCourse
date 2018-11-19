#include "memory.ih"

 void Memory::store(size_t address, int value)
 {
     if (address < RAM::SIZE)        // address must be within memory's range
         d_memory[address] = value;  // if so, store value, otherwise ignore
 }
