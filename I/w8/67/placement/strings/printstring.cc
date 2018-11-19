#include "strings.ih"

std::string Strings::printstring(size_t idx)
{
  if (idx < d_size)
    return d_str[idx]; //alleen eerste?
}
