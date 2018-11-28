#include "strings.ih"

string &Strings::operatorIndex(size_t idx) const
{
  if (idx < d_size)
    return *d_str[idx];

  return "Out of bounds"; //throw would be nice, like in the annotations
                          //but that is not covered at this points.
}
