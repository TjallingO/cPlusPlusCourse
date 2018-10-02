// Programming in C/C++
// Week 3: Assignment 26
// Tjalling Otter & Emiel Krol
// Function: get array index corresponding to element N

#include "w3e26.h"

size_t arrayIndex (size_t elementN)
{
  return elementN / ValuesPerByte;  // Integer division
};
