// Memory function: store

#include "memory.ih"

void Memory::store(size_t value, size_t *address)
{
  *address = value;
}
