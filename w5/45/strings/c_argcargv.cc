#include "strings.ih"

Strings::Strings(size_t numStrings, char **strings)
{
  std::cout << "Argc / argv constructor called. \n"
  
  for (size_t index = 0; index != numStrings; ++index)
    add(strings[index]);
}
