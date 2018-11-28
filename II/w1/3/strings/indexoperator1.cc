#include "strings.ih"

string &Strings::operator[](size_t idx)
{
  return operatorIndex(idx);
}
