#include "strings.ih"

void Strings::resize(size_t newSize)
{
    reserve(newSize);           // make sure there's enough memory

    if (d_size > newSize)       // enlarging? initialize new strings
    {
        for (; d_size != newSize; ++d_size)
            new (d_str + d_size) string;        // placement new
    }
    else if (newSize < d_size)  // shrinking? remove excess strings
    {
        for (; d_size-- != newSize; )
            d_str[d_size].~string();
    }
}
