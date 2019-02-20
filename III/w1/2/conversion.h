#ifndef _CONVERSIONT
#define _CONVERSIONT

template <typename OutputT, typename InputT>  // Two types
OutputT as(InputT &inputVar)                   // Return outT, input inT
{
  return static_cast<OutputT>(inputVar);      // Cast inT to outT
};

#endif
