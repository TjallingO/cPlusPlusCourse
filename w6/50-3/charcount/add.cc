#include "charcount.ih"

void CharCount::add(char ch, size_t idx)
{
    ++d_info.ptr[idx].count;
}
