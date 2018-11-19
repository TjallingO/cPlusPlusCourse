#include "strings.ih"

void Strings::destroy()
{
  for (string *end = d_pPstrings + d_size; end-- != d_pPstrings; )
    end->~string();
  operator delete(d_pPstrings);
}
