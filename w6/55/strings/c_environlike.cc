#include "strings.ih"

Strings::Strings(char *environLike[])
{
  d_pPstrings = rawMemory(1); // Create first memory
  for (size_t index = 0; environLike[index] != 0; ++index)
    add(environLike[index]);
};
