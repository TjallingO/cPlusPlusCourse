#include "drstring.ih"

void* drstring::operator new(size_t count, std::string const &input)
{
  void *p;

  string *d_str = new string [count];

  for (size_t idx = 0; idx < count; ++idx)
    d_str[idx] =  input;

  return p;
}
