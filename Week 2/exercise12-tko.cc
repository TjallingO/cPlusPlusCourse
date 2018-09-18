// Programming in C/C++
// Week 1: Assignment 12
// Tjalling Otter &  Emiel Krol

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string asciiSet;                             // Initialise the ascii string

  for (size_t index = 0; index < 254; index++) // Loop through all ascii characters
  {
    if (isalpha(index))                        // If they are alphabetical ...
    {
      asciiSet += (char) index;                // ... add them to the string
    }
  }
  cout << asciiSet << '\n'                     // Pring the alphabetical ascii set
}
