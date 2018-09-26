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
	{
		string environVariable = environ[index];	// Create a temp string for it
		quicksort(environVariable, 0, environVariable.size() - 1);	// Sort that string
		environArray[index] = environVariable;	// And add it to the string array
	}
}
