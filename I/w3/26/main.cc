// Programming in C/C++
// Week 3: Assignment 26
// Tjalling Otter & Emiel Krol
// Main file

#include "main.ih"

int main()
{
  cout << "Specify the file that you want to input. \n";

  string fileName;      // Initialise string for name input file
  cin >> fileName;      // Populate filename string
  ifstream inputFile(fileName.c_str()); // Convert filename to cstring and input it

  string fileAsString;  // Initialise string containing input file as string
  getline(inputFile, fileAsString); // Move the input file to the string

  size_t numOperations = numOps(fileAsString);  // Number of actions in file ('n')

  uint8_t byteArray[arraySize(numOperations)]; // Initialise array of req. size
  setBits(byteArray, numOperations, fileAsString); // Populate it

  show(byteArray, numOperations); // Print it
}

// Example file randVals.txt was used, containining a random assortment of:
// B, S, E 33% each
// Rest N/A or -
