#include "drstring.ih"

drstring::drstring(string const &input, int count)
{
  for (size_t idx = 0; idx < count; ++idx)
  {
    d_str[idx] =  input;
    cerr << "test\n";
  }
}
