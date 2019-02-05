#include "main.ih"

size_t collatz(__uint128_t value, __uint128_t &highest, size_t &length)
{
  if ((value & 1) == 0)
    return 0;

  // if (value < 2)
  //   value = 3;

  size_t idx = 0;
  __uint128_t l_highest = value;

    while (value != 1)
    {
      __uint128_t fourtest = value;

      if (powerfour(fourtest))
      {
        if (l_highest > highest)
          highest = l_highest;

        if (idx > length)
          length = idx;

        return value;
      }


      if ((value & 1) == 0)             // even
          value >>= 1;                 // then divide by 2
      else
          value += (value << 1) + 1;   // value = 3 * value + 1

      if (l_highest < value)
        l_highest = value;

      ++idx;

    }

    return 0;
}
