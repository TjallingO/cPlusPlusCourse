#include "memory.ih"

   int Memory::load(size_t address) const
   {                           // return mem[address]'s value if address is
                               // within range, otherwise return 0.
       return address < RAM::SIZE ? d_memory[address] : 0;
   }
