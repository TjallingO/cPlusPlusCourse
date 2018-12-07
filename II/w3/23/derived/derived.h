#ifndef INCLUDED_DERIVED_
#define INCLUDED_DERIVED_

#include "../base/base.h"
#include <iostream>

class Derived: public Base
{
    public:
        Derived();
        void hello();

    private:
};

#endif

inline void Derived::hello()
{
  std::cout << "Derived says hello \n";
};
