// Programming in C/C++
// Week 3: Assignment 26
// Tjalling Otter & Emiel Krol
// Function: determine number of values in file

#include "w3e26.h"

size_t numOps (const std::string fileAsString)
{
  size_t numOperations = 0;
  for (size_t index = 0; index != fileAsString.length(); ++index)
  // Loop through all characters of the string
  {
    if (fileAsString[index] == ',') // If it comes across a comma
      ++numOperations;  // Increment the counter
  }
  return numOperations + 1; // Return the counter, plus one for the final element
};
