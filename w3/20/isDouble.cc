// Programming in C/C++
// Week 3: Assignment 20
// Tjalling Otter &  Emiel Krol
// isDouble function

#include "w3e20.h"

using namespace std;

bool isDouble(char const *inputArray[], size_t length)
{
  for (size_t index = 1; index != length; ++index)  // For the argv array
  {
    string tempString = inputArray[index];  // Transform the member to string
    if (tempString.find('.') != string::npos) // Find a period
      return 1;  // If found, return a 1 and stop the function
  }
  return 0; // Otherwise, return 0
}
