// Programming in C/C++
// Week 2: Assignment 12
// Tjalling Otter &  Emiel Krol

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string asciiSet;                              		  // Initialise the ascii string
  const size_t asciiSize = 255;							  // Size of ascii table

  for (size_t index = 0; index != asciiSize + 1; ++index) // Loop through ascii table
  {
    if (isalpha(index))                         		  // If they are alphabetical ...
      asciiSet += index;                        		  // ... add them to the string
  }

  cout << asciiSet << '\n';                     		  // Print the alphabetical ascii set
}
