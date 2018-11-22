#include "strings.ih"

std::ostream &Strings::insertInto(std::ostream &out) const
{
  for (size_t idx = 0; idx < d_size; ++idx)
        out << *d_str[idx] << '\n';

  return out;
}
