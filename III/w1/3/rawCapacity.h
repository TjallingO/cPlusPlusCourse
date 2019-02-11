#ifndef _RAWCAPACITYT
#define _RAWCAPACITYT

#include <cstddef>

template <typename typeT>
typeT* rawCapacity(size_t noVars)
{
  return new typeT[noVars];
};

#endif
