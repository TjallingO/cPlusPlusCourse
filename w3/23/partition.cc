// Programming in C/C++
// Week XX: Assignment XX
// Tjalling Otter & Emiel Krol
// Pivot function

#include "w3e23.h"

using namespace std;

void exchange(char& a, char& b)
{
    char value_of_a = a;
    char value_of_b = b;

    a = value_of_b;
    b = value_of_a;
};

size_t partition(std::string& inputString, size_t left, size_t right)
{
  char pivot = inputString[right];
  size_t valueLeft = left - 1;

  for (size_t valueRight = left; valueRight <= (right - 1); ++valueRight)
  {
    if (inputString[valueRight] <= pivot)
    {
      ++valueLeft;
      exchange(inputString[valueLeft], inputString[valueRight]);
    }
  }
  exchange(inputString[valueLeft + 1], inputString[right]);
  return (valueLeft + 1);
};
