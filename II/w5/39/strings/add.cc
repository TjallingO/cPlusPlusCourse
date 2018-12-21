#include "strings.ih"

void Strings::add(string const &next)
{
  string *pString = new string(next);
  d_vStrings.push_back(pString);
}
