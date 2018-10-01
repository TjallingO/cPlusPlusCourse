// Programming in C/C++
// Week 3: Assignment 23
// Tjalling Otter & Emiel Krol
// Main file

#include "w3e23.h"

size_t getEnvLength()
{
  extern char **environ;  // This gets the external array of environmental vars
  size_t index = 0;       // Initialise an integer

  while (environ[index] != nullptr)	// For every non-null env. var (which the
    ++index;                        // last one is by definition), increment
                                    // index
  return index;                     // And return it
};
