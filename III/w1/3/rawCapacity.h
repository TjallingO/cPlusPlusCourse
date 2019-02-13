#ifndef _RAWCAPACITYT
#define _RAWCAPACITYT

#include <cstddef>                // For size_t

template <typename typeT>         // One var type
typeT* rawCapacity(size_t noVars) // Return pointer to specified type
{
  return new typeT[noVars];       // P to array of noVars var type
};

#endif
