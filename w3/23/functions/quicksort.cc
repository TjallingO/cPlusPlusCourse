// Programming in C/C++
// Week 3: Assignment 23
// Tjalling Otter & Emiel Krol
// Quicksort function

#include "w3e23.h"

void quicksort(std::string* inputString, size_t left, size_t right)
{
  if (left >= right)  // Quick return if left >= right
    return;

  size_t mid = partition(inputString, left, right); // Partition and get pivot
  quicksort(inputString, left, mid);  // Sort string before pivot string
  quicksort(inputString, mid + 1, right); // Sort string after pivot string
};
