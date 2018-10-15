// Programming in C/C++
// Week 3: Assignment 20
// Tjalling Otter &  Emiel Krol
// Integer sum function

#include "w3e20.h"

using namespace std;

size_t sum(initializer_list<size_t> integerInputs, size_t integer)
{

  size_t totalSum = 0;

  for (size_t value: integerInputs)
    totalSum += value;

  return totalSum;
}
