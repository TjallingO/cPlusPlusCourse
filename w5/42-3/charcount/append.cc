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

/*
if  (index == d_charObject.nChar)
{
  if  (d_charObject.nChar > 0)
  {
    d_charObject.ptr = enlarge(d_charObject.ptr, d_charObject.nChar,
    d_charObject.nChar + 1);
  }

  d_charObject.ptr[index].ch = character;
  d_charObject.ptr[index].count = 1;
  ++d_charObject.nChar;
}
}
*/
