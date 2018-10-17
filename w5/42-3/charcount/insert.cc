#include "charcount.ih"

void CharCount::insert(char character, size_t index)
{

  size_t &Obj_nChar = d_charObject.nChar;
  Char *&Obj_ptr = d_charObject.ptr;

  if  (index < Obj_nChar && Obj_ptr[index].ch != character)
  {
    Obj_ptr = enlarge(Obj_ptr, Obj_nChar, Obj_nChar + 1);
    //increasing size of object array by one

    for  (size_t counter = Obj_nChar; index < counter; --counter)
      Obj_ptr[counter] = Obj_ptr[counter - 1];

    //moving all objects at index or past index to the right by one
    Obj_ptr[index].ch = character;

    Obj_ptr[index].count = 1;

    ++Obj_nChar;
    //assigning new values
  }

}
