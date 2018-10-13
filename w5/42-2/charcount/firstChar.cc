#include "charcount.ih"

void CharCount::firstChar(char character)
{
    d_charObject.ptr[0].ch = character;
    d_charObject.nChar = 1;
    d_charObject.ptr[0].count = 1;
}
