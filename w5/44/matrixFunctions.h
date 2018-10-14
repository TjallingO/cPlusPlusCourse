// Matrix functions: header file

#ifndef INCLUDED_MATRIXFUNCTIONS_
#define INCLUDED_MATRIXFUNCTIONS_

#include <cstddef>

enum FIXEDVARS
{
  DIM = 10
};

void inv_identity(int entryRow[][DIM]);
void allOnes(int entryRow[][DIM]);
void diagZeroes(int entryRow[][DIM]);

void printArray(int const square[][DIM]);  // Testing purposes

#endif
