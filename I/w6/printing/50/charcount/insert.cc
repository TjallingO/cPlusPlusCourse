#include "charcount.ih"

void CharCount::insert(char ch, size_t idx)
{
    if  (d_size == d_info.nChar + 1)
      enlarge();

    Char *&ptr = d_info.ptr;
                                    // transfer the rest
    transfer(ptr + d_info.nChar + 1, idx, d_info.nChar);

    ptr[idx] = Char{ ch, 1 };       // insert the new element

    ++d_info.nChar;                 // added new element
    d_info.ptr = ptr;               // point at the new Char array
}
