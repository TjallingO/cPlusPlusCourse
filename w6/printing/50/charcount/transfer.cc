#include "charcount.ih"

void CharCount::transfer(Char *dest, size_t begin, size_t end)
{
    for (; begin - 1 != end; --end)
        *dest-- = move(d_info.ptr[end]);
}
