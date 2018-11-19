#include "charcount.ih"

void CharCount::destroy()
{
  for (Char *end = d_info.ptr + d_size; end-- != d_info.ptr; )
      end->~Char();

  operator delete(d_info.ptr);
}
