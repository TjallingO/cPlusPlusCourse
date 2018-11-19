#include "charcount.ih"

void CharCount::add(char character, size_t index)
{
  //convenience references
  Char *charObj = &d_charObject.ptr[index];

    if  ((*charObj).ch == character)
        ++(*charObj).count; //increasing count by 1
}
