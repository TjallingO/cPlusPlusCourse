// Person member function: extract person data from istream

#include "person.ih"

void Person::extract(istream &inputStream)
{
  for (size_t index = 0; index != 4; ++index)
  {
    string inputString;
    if (!getline(inputStream, inputString, ','))
      getline(inputStream, inputString);
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
  }
}
