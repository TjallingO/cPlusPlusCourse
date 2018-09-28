// Programming in C/C++
// Week 3: Assignment 23
// Tjalling Otter & Emiel Krol
// Main file

#include <iostream>
#include <string>

using namespace std;

size_t getEnvLength()
{
  extern char **environ;
  size_t index = 0;
  while (environ[index] != nullptr)	// Find out number of env variables
    ++index;
  return index;
};

bool lcIsSmaller(std::string inputStringA, std::string inputStringB)
{
  for(auto& c : inputStringA)
    c = tolower(c);

  for(auto& c : inputStringB)
    c = tolower(c);

  if (inputStringA < inputStringB)
    return 1;

  return 0;
};

std::string *storeEnvStrings(size_t envLength)
{
  extern char **environ;
  string* envVars = new string[envLength];
  for (size_t index = 0; index != envLength; ++index)
    envVars[index] = environ[index];
  return envVars;
};

size_t partition(std::string inputString[], size_t left, size_t right)
{
  string pivot = inputString[left]; // Input left is start substring
  size_t pivotPosition = left;    // as well as its associated position

                          // Starting from start substring until end substring
  for (size_t position = left; position <= right; ++position)
  {                       // If current char at position is smaller than pivot
    if (lcIsSmaller(inputString[position], inputString[pivotPosition]))
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
  const size_t envLength = getEnvLength();

  string* envVars = storeEnvStrings(envLength);

  quicksort(envVars, 0, envLength - 1);

  for (size_t index = 0; index != envLength; ++index)
  {
    cout << envVars[index] << "\n";
  }
}
