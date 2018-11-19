// Memory class: header file

#ifndef INCLUDED_MEMORY_
#define INCLUDED_MEMORY_

#include <cstddef>

class Memory
{
  public:
    size_t const &load(size_t *valueAddress) const;
    void store(size_t value, size_t *address);
};

#endif
