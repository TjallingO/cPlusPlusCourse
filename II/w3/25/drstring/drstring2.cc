#include "drstring.ih"

drstring::drstring(string const &input, size_t count)
:
d_str(new string [count])
{
  for (size_t idx = 0; idx < count; ++idx)
    d_str[idx] =  input;

}
