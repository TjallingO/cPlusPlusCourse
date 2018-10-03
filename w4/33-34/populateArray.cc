#include "person/person.h" // given earlier
using namespace std;

void populateArray(Person array[], size_t sizeArray)
{
  for (size_t index = 0; index != sizeArray; ++index)
  {
    cout << "? ";
    array[index].extract(cin);
  }
}
