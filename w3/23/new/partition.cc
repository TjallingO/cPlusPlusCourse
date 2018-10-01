// Programming in C/C++
// Week 3: Assignment 23
// Tjalling Otter & Emiel Krol
// String array partition function

#include "w3e23.h"

size_t partition(std::string* inputString, size_t left, size_t right)
{
  std::string pivot = inputString[left]; // Input left is starting string
  size_t pivotPosition = left;    // as well as its associated position

                          // Starting from start string until end string
  for (size_t position = left; position <= right; ++position)
  {                       // If current string at position is smaller than pivot
    if (lcIsSmaller(inputString[position], inputString[pivotPosition]))
    {                     // Swap current string with one ahead of pivot string
                          // And swap pivot string and the one ahead it around
      swap(inputString[pivotPosition + 1], inputString[position]);
      swap(inputString[pivotPosition], inputString[pivotPosition + 1]);
      ++pivotPosition;  // Move on to next string as pivot element
    }
  }
  return (pivotPosition); // Return the pivot position
};
