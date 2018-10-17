#include "charcount.ih"


void CharCount::allocate()
{
  CharCount::Char *tmp = static_cast<CharCount::Char *>(
    operator new(d_cap * sizeof(CharCount::Char)));
  for  (size_t idx = d_size; idx--; )
    new(tmp + idx) CharCount::Char{ d_charObject.ptr[idx] };
  destroy();
  d_charObject.ptr = tmp;
  cout << sizeof(d_charObject.ptr) << '\n';
}
