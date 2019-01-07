#include "strings.ih"

void Strings::operator+=(string input)
{
  d_str.push_back(new string(input));
}
