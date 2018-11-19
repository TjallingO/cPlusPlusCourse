#include "strings.ih"

void Strings::iterate(char **environLike)
{

  for (size_t idx = 0; idx < d_nIterate; ++idx)
    {
      size_t idx2 = 0;
    //for (size_t idx2 = 0; idx2 < 80; ++idx2)
      while(environLike[idx2])
      {
        add(environLike[idx2]);
        ++idx2;
      }
  }
}
