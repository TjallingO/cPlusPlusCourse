#include "strings.ih"

void Strings::printStrings() const
{
  for (size_t index = 0; index != d_size; ++index)
  {
    std::cout << d_str[index];
    if (index != d_size - 1)
      std::cout << ", ";
    else
      std::cout << '\n';
  }
};
