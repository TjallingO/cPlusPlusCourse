#ifndef INCLUDED_NRTRAIT_
#define INCLUDED_NRTRAIT_

#include <cstddef>
#include <cmath>

template<size_t nO>
struct NrTrait
{
  enum
  {
    value = nO,
    even  = (nO % 2 == 0),
    by3   = (nO % 3 == 0),
    width = (static_cast<size_t>(std::log10(nO)) + 1)
  };
};

#endif
