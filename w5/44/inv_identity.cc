// Matrix function: make array into inverted identity matrix

#include "main.ih"

void inv_identity(int (*entryRow)[DIM])
{
  allOnes(entryRow);    // Make all entries ones
  diagZeroes(entryRow); // Make diagonal zeroes
};
