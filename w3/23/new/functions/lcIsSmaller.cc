// Programming in C/C++
// Week 3: Assignment 23
// Tjalling Otter & Emiel Krol
// Lowercase compare (is A smaller than B) function

#include "w3e23.h"

bool lcIsSmaller(std::string inputStringA, std::string inputStringB)
{
  for(auto& c : inputStringA)
    c = tolower(c);

  for(auto& c : inputStringB)
    c = tolower(c);

  if (inputStringA < inputStringB)
    return 1;

  return 0;
};
