#include "charcount.ih"

void CharCount::destroy()
{
  for (Char *end = d_charObject.ptr + d_size; end-- != d_charObject.ptr; )
  end->~Char();
  operator delete(d_charObject.ptr);
}
