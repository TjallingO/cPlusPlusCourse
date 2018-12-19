#ifndef INCLUDED_MSG_
#define INCLUDED_MSG_

#include <cstddef>

class Msg
{
  public:
    enum message
    {
      NONE    = 0,
      DEBUG   = 1 << 0,
      INFO    = 1 << 1,
      NOTICE  = 1 << 2,
      WARNING = 1 << 3,
      ERR     = 1 << 4,
      CRIT    = 1 << 5,
      ALERT   = 1 << 6,
      EMERG   = 1 << 7,
      ALL     = (1 << 8) - 1
    };

    size_t valueOf(message theEnum);
    void show(message theEnum);
};
#endif
