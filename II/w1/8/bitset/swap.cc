#include "bitset.ih"

void BitSet::swap(BitSet &other)
{
    char buffer[sizeof(BitSet)];
    memcpy(buffer, this,   sizeof(BitSet));
    memcpy(this,   &other, sizeof(BitSet));
    memcpy(&other, buffer, sizeof(BitSet));
}
