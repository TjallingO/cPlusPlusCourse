#ifndef INCLUDED_DERIVED_
#define INCLUDED_DERIVED_

#include "../base/base.h"
#include <iostream>

class Derived: public Base
{
  size_t d_test = 0;

    public:
        Derived();
        void hello();

        size_t test();

    private:
};

#endif

inline void Derived::hello()
{
  std::cout << "Derived says hello \n";
};
