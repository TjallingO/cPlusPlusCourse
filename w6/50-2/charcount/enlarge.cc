#include "charcount.ih"


void CharCount::enlarge()
{
  if  ((d_size <<= 1) > d_cap)
    d_size = d_cap;

  CharCount::Char *tmp = static_cast<CharCount::Char *>(
    operator new(d_size * sizeof(CharCount::Char)));

  for  (size_t idx = d_size; idx--; )
    new(tmp + idx) CharCount::Char{ d_charObject.ptr[idx] };

  destroy();
  d_charObject.ptr = tmp;
}
