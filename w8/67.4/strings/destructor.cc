#include "strings.ih"

Strings::~Strings()
{
  for (string **end = d_str + d_size; end-- != d_str; )
  delete *end;
  delete[] d_str;
}
