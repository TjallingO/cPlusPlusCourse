#include "charcount.ih"

CharCount::Char *CharCount::enlarge(Char *old, size_t oldsize, size_t newsize)
{
  Char *tmp = new Char[newsize];

  for  (size_t idx = 0; idx != oldsize ; ++idx)
    *(tmp + idx) = *(old + idx);

  delete[] old;

  return tmp;
}
