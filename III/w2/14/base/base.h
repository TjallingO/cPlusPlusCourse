#ifndef INCLUDED_BASE_
#define INCLUDED_BASE_

#include <ostream>

template<typename Derived>
class Base
{
  private:
    std::ostream &insertInto(std::ostream &out);

    template <class D>
    friend std::ostream &operator<<(std::ostream &out, Base<D> &base);
};

#include "insertion.h"
#include "insertinto.h"

#endif
