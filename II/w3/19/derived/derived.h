#ifndef INCLUDED_DERIVED_
#define INCLUDED_DERIVED_

#include "../base/base.h"

class Derived : protected Base
{
  public:
    Derived();

    void value2() const;

};

inline void value2()
{
  Base::msg();
}

#endif
