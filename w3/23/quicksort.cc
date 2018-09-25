// Programming in C/C++
// Week XX: Assignment XX
// Tjalling Otter & Emiel Krol
// Quicksort function

#include "w3e23.h"

void quicksort(std::string& inputString, size_t left, size_t right)
{
  if (left < right)
  {
    size_t mid = partition(inputString, left, right);
    quicksort(inputString, left, mid - 1);
    quicksort(inputString, mid + 1, right);
  }
};
