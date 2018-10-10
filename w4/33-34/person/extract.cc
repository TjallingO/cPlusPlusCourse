// Person member function: extract person data from istream

#include "person.ih"

void Person::extract(istream &inputStream)
{
  string inputString;
  for (size_t index = 0; index != 3; ++index)
  {
    if (!getline(inputStream, inputString, ','))
      break;
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
    }
  }
  if (!getline(inputStream, inputString, '\n'))
    return;
  setMass(stoi(inputString));
}
