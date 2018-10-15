#include "strings.ih"

Strings::Strings(char **strings)
{
  for (size_t index = 0; strings[index] != 0; ++index)
  {
    std::cout << strings[index] << '\n';
    add(strings[index], d_str);
  }
};
