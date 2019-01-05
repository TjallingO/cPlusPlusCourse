#include "strings.ih"

void Strings::print() const          // Testing
{
  for (auto idx = d_str.begin(); idx != d_str.end(); ++idx)
    cout << *idx << '\n';
}
