#include "strings.ih"

Strings::Strings(size_t nIterate, bool copy)
{

  //pointer naar functies ipv if ladder
  /*
  if (copy)
    enlargebycopy();
  else
    enlargebymove();
    */
  for (size_t idx = 0; idx < nIterate; ++idx)
  {
    iterate(**environ, copy);
  }

}
