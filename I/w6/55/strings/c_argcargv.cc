#include "strings.ih"

Strings::Strings(size_t argc, char const *argv[])
{
  d_pPstrings = rawMemory(1); // Create first memory
  for (size_t index = 0; index != argc; ++index)
    add(argv[index]);
};
