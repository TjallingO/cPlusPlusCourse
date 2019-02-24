#ifndef INCLUDED_BINARY_
#define INCLUDED_BINARY_

#include <cstddef>

template <size_t nO>
struct Bin
{
  enum
  {
    value = Bin<nO / 2>::value * 10 + (nO % 2)
  };
};

template <>
struct Bin<0>
{
  enum
  {
    value = 0
  };
};


#endif
