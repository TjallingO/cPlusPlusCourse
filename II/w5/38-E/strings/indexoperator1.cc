#include "strings.ih"

string &Strings::operator[](size_t idx)
{
  return d_str[idx];
}
