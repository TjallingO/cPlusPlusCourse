#include "strings.ih"

Strings::Strings(const Strings &ogStrings)
{
  for (auto elem: ogStrings.d_vStrings)
    add(*elem);
}
