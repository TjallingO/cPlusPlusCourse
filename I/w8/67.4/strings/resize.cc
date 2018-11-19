#include "strings.ih"

void Strings::resize(size_t newSize)
{
    reserve(newSize);           // make sure there's enough memory

    if (d_size > newSize)       // enlarging? initialize new strings
    {
        for (; d_size != newSize; ++d_size)
            d_str[d_size] = new string;
    }
    else if (newSize < d_size)  // shrinking? remove excess strings
    {
        for (; d_size-- != newSize; )
            delete d_str[d_size];
    }
}
