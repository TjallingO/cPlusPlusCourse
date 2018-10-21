#include "charcount.ih"


void CharCount::enlarge()
{
  if  ((d_size <<= 1) > d_cap)
    d_size = d_cap;

  CharCount::Char *tmp = static_cast<CharCount::Char *>(
    operator new(d_size * sizeof(CharCount::Char)));

  for  (size_t index = d_size; index--; )
    new(tmp + index) CharCount::Char{ d_info.ptr[index] };

  destroy();
  d_info.ptr = tmp;
}
