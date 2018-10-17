#include "charcount.ih"

size_t CharCount::locate(char character)
{
  if  (d_charObject.ptr[0].ch == 0)
    return 0;
  //for initial assignment

  size_t index = 0;
  while  (d_charObject.ptr[index].ch < character && index <= d_charObject.nChar)
    ++index;
  return index;
  //finding where to insert the current character
}
