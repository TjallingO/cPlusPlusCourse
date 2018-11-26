#include "main.ih"

char const* msgN[10] =
{
  "DEBUG",
  "INFO",
  "NOTICE",
  "WARNING",
  "ERR",
  "CRIT",
  "ALERT",
  "EMERG",
  "ALL",
  "NONE"
};

void show(Msg message)
{
  if (valueOf(message) == 0)
    std::cout << msgN[9];

  for (size_t idx = 0; idx != 9; ++idx)
  {
    if (valueOf(message) == (1 << idx))
    {
      std::cout << msgN[idx];
      break;
    }
  }
}
