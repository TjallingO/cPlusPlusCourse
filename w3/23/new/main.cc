// Programming in C/C++
// Week 3: Assignment 23
// Tjalling Otter & Emiel Krol
// Main file

#include "main.ih"

int main()
{
  const size_t envLength = getEnvLength();  // Get number of env. vars

  string *envVars = storeEnvStrings(envLength); // Store them in a string array

  quicksort(envVars, 0, envLength - 1); // Sort them alphabetically

  for (size_t index = 0; index != envLength; ++index) // Print them (sorted)
  {
    cout << envVars[index] << "\n";
  }
}
