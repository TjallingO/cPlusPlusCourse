#include "strings.ih"

Strings::Strings(char const **strings)
{
  std::cout << "environ constructor called. \n";

  for (size_t index = 0; strings[index] != 0; ++index)
    add(strings[index]);
  // For NTBSs 0 to when a null char is encountered, pass them to the add function
};
