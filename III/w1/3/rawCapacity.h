#ifndef _RAWCAPACITYT
#define _RAWCAPACITYT

#include <cstddef>                // For size_t

template <typename TypeT>         // One var type
TypeT* rawCapacity(size_t noVars) // Return pointer to specified type
{
  return static_cast<TypeT*>( operator new(noVars * sizeof(TypeT)) );
};                                   // P to array of noVars var type

#endif
