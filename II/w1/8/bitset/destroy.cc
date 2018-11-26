#include "bitset.ih"

void BitSet::BitMemory::destroy()
{
    delete[] memory_t;
}
