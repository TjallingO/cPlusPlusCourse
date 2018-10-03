#include "person.ih"

using namespace std;

void Person::extract(istream &inputStream)
{
  string inputString;
  getline(inputStream, inputString);    // Get full line
  std::istringstream ss(inputString);   // Transfer line to istringstream
  size_t index = 0;                     // Initialise counter for switch

  while (getline(ss, inputString, ',')) // While an element can still be extracted
  {
    switch (index)                      // Assign the object variables in order
    {
      case 0:
        setName(inputString);
        break;
      case 1:
        setAddress(inputString);
        break;
      case 2:
        setPhone(inputString);
        break;
      case 3:
        setMass(stoi(inputString));
        break;
    }
  ++index;
  }
}
