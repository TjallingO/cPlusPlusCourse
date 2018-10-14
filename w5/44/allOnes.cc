// Matrix function: make 2D array into matrix of ones

#include "matrixFunctions.h"

void allOnes(int entryRow[][DIM])
{
  for (int (*row)[DIM] = entryRow; row != entryRow + DIM; ++row)
  {
    for (int *column = *row, *end = *row + DIM; column != end; ++column)
      (*column) = 1;
  }
};
// Loop through all the rows, then within those rows the columns (now individual
// elements) and set them all to one.
