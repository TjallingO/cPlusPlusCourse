// Programming in C/C++
// Week 3: Assignment 23
// Tjalling Otter & Emiel Krol
// Store environmental vars in string function

#include "w3e23.h"

std::string *storeEnvStrings(size_t envLength)
{
  extern char **environ;
  std::string* envVars = new std::string[envLength];
  for (size_t index = 0; index != envLength; ++index)
    envVars[index] = environ[index];
  return envVars;
};
