#include "main.ih"

char const* msgN[10] =
{
  "DEBUG",    // 1
  "INFO",     // 2
  "NOTICE",   // 4
  "WARNING",  // 8
  "ERR",      // 16
  "CRIT",     // 32
  "ALERT",    // 64
  "EMERG",    // 128
  "ALL",      // 255
  "NONE"
};

void show(Msg message)
{
  if (valueOf(message) == 0)            // Seperate case for NONE
    std::cout << msgN[9] << ' ';

  for (size_t idx = 0; idx != 9; ++idx) // Loop to identify codes
  {
    if (valueOf(message) == (1 << idx)) // Shift performed here to use idx in []
    {
      std::cout << msgN[idx] << ' ';
      break;
    }
  }
  std::cout << '\n';
}
