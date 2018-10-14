#include "charcount.ih"

void CharCount::newChar(char character)
{
    d_charObject.ptr = enlarge(d_charObject.ptr, d_charObject.nChar, d_charObject.nChar + 1);

    d_charObject.ptr[d_charObject.nChar].count = 1;

    d_charObject.ptr[d_charObject.nChar].ch = character;

    d_charObject.nChar += 1;
}
