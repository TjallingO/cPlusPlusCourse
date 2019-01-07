#include "strings.ih"

Strings::Strings(string const &input)
{
  d_str.push_back(new string(input));
}
