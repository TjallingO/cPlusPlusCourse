// Programming in C/C++
// Week 3: Assignment 26
// Tjalling Otter & Emiel Krol
// Function: determines necessary array size

#include "w3e26.h"

size_t arraySize (size_t numOperations)
{
  return ((numOperations) + (numOperations - 1)) / ValuesPerByte;
  // Returns requisite array size given n and k
};
