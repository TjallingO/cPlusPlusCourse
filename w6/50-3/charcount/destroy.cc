#include "charcount.ih"

void CharCount::destroy()
{
  for (Char *end = d_info.ptr + d_size; end-- != d_info.ptr; )
      end->~Char(); //destructs the Char Objects

  operator delete(d_info.ptr); //destructs the pointer to the Char Objects
}
