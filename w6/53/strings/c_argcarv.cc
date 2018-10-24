#include "strings.ih"

Strings::Strings(size_t argc, char const *argv[])
{
  for (size_t index = 0; index != argc; ++index)
    add(argv[index]);
};
