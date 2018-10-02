// Programming in C/C++
// Week 3: Assignment 26
// Tjalling Otter & Emiel Krol
// Function: get within array element index of element N

#include "w3e26.h"

size_t withinIndex (size_t elementN)
{
  return elementN % ValuesPerByte;
  // Returns the within within element index of a given value
};
