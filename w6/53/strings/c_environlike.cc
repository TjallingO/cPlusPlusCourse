#include "strings.ih"

Strings::Strings(char *environLike[])
{
  for (size_t index = 0; environLike[index] != 0; ++index)
    add(environLike[index]);
};
