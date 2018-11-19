#include "strings.ih"

void Strings::reserve(size_t nextCapacity)
{
    if (d_capacity < nextCapacity)
    {
        while (d_capacity < nextCapacity)
            d_capacity <<= 1;
        
        d_str = enlarged();
    }
}
