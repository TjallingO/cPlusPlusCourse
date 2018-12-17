#include "extstring.ih"

ExtString::ExtString(size_t count, string const &str)
{
  for (size_t idx = 0; idx != count; ++idx)   // Append count copies of str
    *this += str;
}
