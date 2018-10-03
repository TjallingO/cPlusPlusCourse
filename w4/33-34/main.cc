#include "main.ih"
using namespace std;

int main()
{
  Person personArray[5];  // Define an array of five Person objects

  size_t arraySize = sizeof(personArray) / sizeof(personArray[0]);  // Determine length array

  populateArray(personArray, arraySize);  // Populate array using input
  printArray(personArray, arraySize);     // Print array using object info
}
