// Programming in C/C++
// Week 3: Assignment 26
// Tjalling Otter & Emiel Krol
// Function: retrieves element from array

#include "w3e26.h"

size_t getField (const uint8_t *byteArray, size_t elementN)
{
  size_t action = (byteArray[arrayIndex(elementN)]
                     >> withinIndex(elementN) * BitsPerValue
                     &
                     ( (1 << BitsPerValue) - 1 ) );
  return action;
  // Returns action stored at given location in given array
};
