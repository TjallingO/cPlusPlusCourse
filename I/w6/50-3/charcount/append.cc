#include "charcount.ih"

void CharCount::append(char ch, size_t idx)
{
    insert(ch, d_info.nChar);
}
//appendix character at the end, adding index so the array of pointers
//to members works.
