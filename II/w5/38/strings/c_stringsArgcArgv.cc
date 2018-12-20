#include "strings.ih"

Strings::Strings(int argc, char *argv[])
{
  for (size_t idx = 0, end = argc; idx != end; ++idx)
    add(argv[idx]);
}
