#ifndef _CONVERSIONT
#define _CONVERSIONT

template <typename outputT, typename inputT>  // Two types
outputT as(inputT inputVar)                   // Return outT, input inT
{
  return static_cast<outputT>(inputVar);      // Cast inT to outT
};

#endif
