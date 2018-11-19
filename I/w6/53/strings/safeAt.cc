#include "strings.ih"

namespace  first {
    string empty;
}

std::string &Strings::safeAt(size_t idx) const
{
    if (idx >= d_size)
    {
        first::empty.clear();
        return first::empty;
    }
  return *d_pPstrings[idx];
}
