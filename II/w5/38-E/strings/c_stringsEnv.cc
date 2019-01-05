#include "strings.ih"

Strings::Strings(char **environLike)
{
  while (*environLike)
    add(*environLike++);
}
