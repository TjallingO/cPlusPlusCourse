#include "charcount.ih"

void CharCount::append(char character, size_t index)
{
  //convenience references:
  size_t &Obj_nChar = d_charObject.nChar;
  Char *&Obj_ptr = d_charObject.ptr;

  if  (index == Obj_nChar)
  {
    if  (Obj_nChar > 0)
      Obj_ptr = enlarge(Obj_ptr, Obj_nChar, Obj_nChar + 1);

    Obj_ptr[index].ch = character;
    Obj_ptr[index].count = 1;
    ++Obj_nChar;
  }
}
