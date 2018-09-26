// Programming in C/C++
// Week 3: Assignment 23
// Tjalling Otter & Emiel Krol
// Pivot function

#include "w3e23.h"

using namespace std;

size_t partition(std::string &inputString, size_t left, size_t right)
{
  char pivot = inputString[left]; // Input left is start substring
  size_t pivotPosition = left;    // as well as its associated position

                          // Starting from start substring until end substring
  for (size_t position = left; position <= right; ++position)
  {                       // If current char at position is smaller than pivot
    if (tolower(inputString[position]) < tolower(pivot))
    {                     // Swap current char with one ahead of pivot element
                          // And swap first two in substring around
      swap(inputString[pivotPosition + 1], inputString[position]);
      swap(inputString[pivotPosition], inputString[pivotPosition + 1]);
      ++pivotPosition;  // Move on to next character as pivot element
    }
  }
  return (pivotPosition); // Return the pivot position
};
