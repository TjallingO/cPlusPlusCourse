#include "bitset.ih"

BitSet::BitSet(std::string input)
{
  d_bits.BitSet::BitMemory::length(input);
  d_bits.BitSet::BitMemory::memory(input);
}
