#include "bitset.ih"

BitSet::BitMemory::~BitMemory()
{
    destroy();
}
