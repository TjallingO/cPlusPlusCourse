#include "strings.ih"

void Strings::printStrings()
{
  for (size_t index = 0; index != d_size; ++index)
    std::cout << d_str[index] << ", ";
};
