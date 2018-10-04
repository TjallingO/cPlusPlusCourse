// Programming in C/C++
// Week 4: Assignment 34
// Tjalling Otter & Emiel Krol
// Main file

#include "main.ih"

int main()
{
  Person personArray[5];  // Define an array of five Person objects

  size_t arraySize = sizeof(personArray) / sizeof(personArray[0]);  // Determine length array

  populateArray(personArray, arraySize);  // Populate array using input
  printArray(personArray, arraySize);     // Print array using object info
}
