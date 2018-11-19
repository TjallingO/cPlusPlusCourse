#include "strings.ih"

void Strings::printstring()
{
  for (size_t idx = 0; idx < d_size; idx++) {
    cout << *d_str[idx] << '\n';
  }
}
