// Programming in C/C++
// Week 4: Assignment 33
// Tjalling Otter & Emiel Krol
// Person member function: extract person data from istream

#include "person.ih"

void Person::extract(istream &inputStream)
{
  string inputString;
  getline(inputStream, inputString);    // Get full line
  istringstream ss(inputString);        // Transfer line to istringstream
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
