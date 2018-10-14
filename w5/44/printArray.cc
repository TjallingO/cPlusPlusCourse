// Matrix function: print for testing purposes

#include "matrixFunctions.h"

#include <iostream>

void printArray(int const square[][DIM])
{
  for (size_t column = 0; column != DIM; ++column)
  {
    for (size_t row = 0; row != DIM; ++row)
    {
      std::cout << square[column][row] << " ";
    }
    std::cout << '\n';
  }
};
