#include "bitset.ih"

void BitSet::BitMemory::memory(std::string input)
{
  memory_t = new size_t [d_length];

  for (size_t idx = 0; idx < d_length; ++idx)
  {
    memory_t[idx] = input[idx] - '0';
  }

}
