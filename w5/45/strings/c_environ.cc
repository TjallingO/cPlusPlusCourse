#include "strings.ih"

Strings::Strings(char **strings)
{
  std::cout << "environ constructor called. \n"

  for (size_t index = 0; strings[index] != 0; ++index)
    add(strings[index]);
};
