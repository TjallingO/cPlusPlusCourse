#include "strings.ih"

Strings::Strings(size_t numStrings, char const **strings)
{
  std::cout << "Argc / argv constructor called. \n";

  for (size_t index = 0; index != numStrings; ++index)
    add(strings[index]);
  // For NTBSs 0 to numStrings within strings, pass them to the add function
}
