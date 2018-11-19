// Programming in C/C++
// Week 3: Assignment 20
// Tjalling Otter &  Emiel Krol
// Double sum function

#include "w3e20.h"

using namespace std;

double sum(initializer_list<double> doubleInputs)
{

  double totalSum = 0;

  for (double value: doubleInputs)
    totalSum += value;

  return totalSum;
}
