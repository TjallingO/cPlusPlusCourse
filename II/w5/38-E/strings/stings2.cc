#include "strings.ih"

Strings::Strings(string input)
{
  d_str.push_back(input);
  d_str.shrink_to_fit();
}
