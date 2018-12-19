#ifndef INCLUDED_MULTI_
#define INCLUDED_MULTI_

#include "../deriv1/deriv1.h"
#include "../deriv2/deriv2.h"

class Multi: public Deriv1, public Deriv2
{
  public:
    Multi();

  private:
};

#endif
