#include "charcount.ih"

void CharCount::existsCheck(char character, bool *exists)
{
  for (size_t index = 0; index < d_charObject.nChar; ++index)
  {
    if  (d_charObject.ptr[index].ch == character)
    {
        d_charObject.ptr[index].count += 1;

        *exists = true;
    }
  }


}
