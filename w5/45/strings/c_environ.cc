#include "strings.ih"

Strings::Strings(char const **strings)
{
  std::cout << "environ constructor called. \n";

  for (size_t index = 0; strings[index] != 0; ++index)  // For NTBSs 0 to when a
    add(strings[index]);                                // null char is encountered
                                                        // pass them to the add function
};
