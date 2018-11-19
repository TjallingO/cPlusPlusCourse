#include "strings.ih"

Strings &Strings::operator=(Strings const &rvalue)
{
  d_size = rvalue.d_size;
  d_capacity = rvalue.d_capacity;
  d_str = new string*[rvalue.d_size];

  for (size_t idx = 0; idx < d_size; ++idx)
  {
    d_str[idx] = new string(*rvalue.d_str[idx]);
  }

  return *this;
}
