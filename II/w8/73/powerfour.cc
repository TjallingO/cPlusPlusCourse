#include "main.ih"

bool powerfour(__uint128_t &fourtest)
{
  if ((fourtest & 1) == 0)
  {
    if (fourtest == 4)
      return true;
    fourtest >>= 1;

    if ((fourtest & 1) == 0)
      {
        fourtest >>= 1;
        if (fourtest == 4)
          return true;

        return powerfour(fourtest);
      }
  }

  return false;
}
