#include "bitset.ih"

void BitSet::print()
{
  for (size_t idx = 0; idx < d_bits.d_length; ++idx)
  {
    cout << d_bits.memory_t[idx];
  }
  cout << '\n';
}
