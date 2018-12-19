#include "msg.ih"

namespace
{
  char const *name[] =
  {
    "DEBUG",
    "INFO",
    "NOTICE",
    "WARNING",
    "ERR",
    "CRIT",
    "ALERT",
    "EMERG",
  };
}

void Msg::show(message theEnum) // Taken from the solutions of week 1
{
  if (theEnum == Msg::NONE)
  {
    cout << "NONE\n";
    return;
  }

  for (size_t test = valueOf(Msg::DEBUG),              // iterates over Msg
       endTest = valueOf(Msg::EMERG) << 1,
       msgValue = valueOf(theEnum),
       idx = 0;                                 // for name[idx]

       test != endTest;
       test <<= 1, ++idx
      )
  {
    if ((test & msgValue))
      cout << name[idx] << ' ';
  }

  cout << '\n';
}
