// Memory function: load

#include "memory.ih"

size_t const &Memory::load(size_t *valueAddress) const
{
  return *valueAddress;
};
