// Programming in C/C++
// Week 4: Assignment 34
// Tjalling Otter & Emiel Krol
// Function: populate array using user input

#include "person/person.h"
using namespace std;

void populateArray(Person array[], size_t sizeArray)
{
  for (size_t index = 0; index != sizeArray; ++index) // Loop through array
  {
    cout << "? ";               // Ask for user input
    array[index].extract(cin);  // Input that data into the extract function
  }
}
