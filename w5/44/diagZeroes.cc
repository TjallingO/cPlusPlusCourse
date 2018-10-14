// Matrix function: make diagnonal zeroes

#include "matrixFunctions.h"

void diagZeroes(int entryRow[][DIM])
{
  for (int *entry = *entryRow, index = 0; index != DIM; ++index, entry += DIM + 1)
    (*entry) = 0;
};
// Sets every eleventh (dimension + 1) element to zero
