#include "strings.ih"

Strings::Strings(Strings const &other)
{
  cerr << "COPYCONSTR" << __FUNCTION__ << __LINE__ << '\t';
  d_size = other.d_size;
  d_capacity = other.d_capacity;
  *d_str = new string [other.d_size];

  for (size_t idx = 0; idx != d_size; ++idx)
    d_str[idx] = other.d_str[idx];
  cerr << "COPYCONSTR=" << __FUNCTION__ << __LINE__ << '\n';
}
