#ifndef INCLUDED_DERIVED_
#define INCLUDED_DERIVED_

#include "../base/base.h"

class Derived : public Base
{
  public:
    using Base::Base;
/*
    Derived();
    Derived(Derived const &other);
    Derived(Derived &&tmp);
*/
    void value2() const;

};

inline void value2()
{
  Base::msg();
}

#endif
