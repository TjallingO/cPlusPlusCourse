#include "strings.ih"

string &Strings::element(size_t idx) const
{
  return *d_str[idx];
}
