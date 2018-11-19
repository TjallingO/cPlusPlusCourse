#include "strings.ih"
/*
Strings::~Strings()
{
    for (; d_size--; )
        delete d_str[d_size];

    destroy();
}
*/
Strings::~Strings()
{
  for (string **end = d_str + d_size; end-- != d_str; )
  delete *end;
  delete[] d_str;
}
