// Programming in C/C++
// Week 3: Assignment 20
// Tjalling Otter &  Emiel Krol
// Double sum function

#include "w3e20.h"

using namespace std;

double sum(char const *inputArray[], size_t length)
{

  double totalSum = 0;  // Initialise the sum variable

  for (size_t index = 1; index != length; ++index)  // For the entire argv array
    totalSum += stod(inputArray[index]);  // Sum that member with the sum var

  return totalSum;  // At the end, return it
}
