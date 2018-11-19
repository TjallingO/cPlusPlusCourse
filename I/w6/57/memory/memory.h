#ifndef INCLUDED_MEMORY_
  #define INCLUDED_MEMORY_

  #include <cstddef>              // needed for size_t

  #include "../enums/enums.h"

  class Memory
  {
      int d_memory[RAM::SIZE];    // the cpu's memory

      public:
          int load(size_t address) const;         // return mem[address]'s value
          void store(size_t address, int value);
          // store value at mem[address]
  };

  #endif
