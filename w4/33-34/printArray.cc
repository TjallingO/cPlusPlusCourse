// Function: print object array

#include "person/person.ih"
using namespace std;

void printArray(Person array[], size_t sizeArray)
{
  for (size_t index = 0; index != sizeArray; ++index) // For each array element
    array[index].insert(cout);  // Output the object's info using insert
}
