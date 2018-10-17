// Matrix function: make array into inverted identity matrix

#include "matrixFunctions.h"

void inv_identity(int entryRow[][DIM])
{
  allOnes(entryRow);    // Make all entries ones
  diagZeroes(entryRow); // Make diagonal zeroes
};
