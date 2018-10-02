// Programming in C/C++
// Week 3: Assignment 23
// Tjalling Otter & Emiel Krol
// Lowercase compare (is A smaller than B) function

#include "w3e23.h"

bool lcIsSmaller(std::string inputStringA, std::string inputStringB)
{
  for(auto& character : inputStringA)
    character = tolower(character);

  for(auto& character : inputStringB)
    character = tolower(character);
  // For both input strings, convert them to lower case

  if (inputStringA < inputStringB)
    return 1;
  // Then compare them as one would otherwise

  return 0;
};
