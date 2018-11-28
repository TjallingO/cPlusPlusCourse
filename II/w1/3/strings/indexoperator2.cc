#include "strings.ih"

string const &Strings::operator[](size_t idx) const
{
  return operatorIndex(idx);
}
