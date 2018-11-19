#include "charcount.ih"

void CharCount::append(char character)
{
  d_charObject.ptr[d_charObject.nChar].ch = character;
  d_charObject.ptr[d_charObject.nChar].count = 1;
  d_charObject.nChar += 1;
}
