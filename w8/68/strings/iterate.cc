#include "strings.ih"

void Strings::iterate(char **environLike)
{
  size_t idx = 0;
  while (environLike[idx]) {
    add(environLike[idx]);
    ++idx;
  }

}
