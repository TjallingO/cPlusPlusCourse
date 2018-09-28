// Programming in C/C++
// Week 3: Assignment 23
// Tjalling Otter & Emiel Krol
// Main file

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
extern char **environ;

size_t partition(std::string inputString[], size_t left, size_t right)
{
  string pivot = inputString[left]; // Input left is start substring
  size_t pivotPosition = left;    // as well as its associated position

                          // Starting from start substring until end substring
  for (size_t position = left; position <= right; ++position)
  {                       // If current char at position is smaller than pivot
    if (inputString[position] < inputString[pivotPosition])
    {                     // Swap current char with one ahead of pivot element
                          // And swap first two in substring around
      swap(inputString[pivotPosition + 1], inputString[position]);
      swap(inputString[pivotPosition], inputString[pivotPosition + 1]);
      ++pivotPosition;  // Move on to next character as pivot element
    }
  }
  return (pivotPosition); // Return the pivot position
};

void quicksort(std::string inputString[], size_t left, size_t right)
{
  if (left >= right)  // Quick return if left >= right
    return;

  size_t mid = partition(inputString, left, right); // Partition and get pivot
  quicksort(inputString, left, mid);  // Sort substring before pivot
  quicksort(inputString, mid + 1, right); // Sort substring after pivot
};

int main()
{

  // for (size_t index = 0; index != 67; ++index)
  // cout << index << ": " << environ[index] << "\n";

	size_t arraySize = 0;	// Initialise size of needed array

	while (environ[arraySize] != nullptr)	// Find out number of env variables
		++arraySize;
  // Above function

	string environArray[arraySize];	// Initialise string array of that size


	for (size_t index = 0; environ[index] != nullptr; ++index)	// For every env var
	{
    environArray[index] = environ[index];	// And add it to the string array
    // cout << environArray[index] << "\n";
  }
	quicksort(environArray, 0, arraySize);

  cout << "NUMBER: " << arraySize << "\n";
  cout << "SELECTED: " <<  environ[8] << "\n";

  for (char count = 0; count != arraySize; ++count)
  cout << "PRINT: " << environArray[count] << "\n";
}
