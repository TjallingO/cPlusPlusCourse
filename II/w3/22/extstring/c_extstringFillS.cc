#include "extstring.ih"

extString::extString(size_t count, string const &str)
:
  string{ "" }                                // Empty string
{
  for (size_t idx = 0; idx != count; ++idx)   // Append count copies of str
    this->append(str);
}
