// Programming in C/C++
// Week 3: Assignment 23
// Tjalling Otter & Emiel Krol
// Main file

#include "main.ih"

using namespace std;
extern char **environ;

int main()
{
	size_t arraySize = 0;	// Initialise size of needed array

	while (environ[arraySize] != 0)	// Find out number of env variables
		++arraySize;

	string environArray[arraySize];	// Initialise string array of that size

	for (size_t index = 0; environ[index] != 0; ++index)	// For every env var
		environArray[index] = environ[index];	// And add it to the string array

		quicksort(*environArray, 0, arraySize);
}
