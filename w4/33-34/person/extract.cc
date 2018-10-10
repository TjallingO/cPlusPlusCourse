// Person member function: extract person data from istream

#include "person.ih"

void Person::extract(istream &inputStream)
{
  string varValue; // Initialise string to be used to populate variables
  for (size_t index = 1; index != 4; ++index) // Loop through first three vars
  {
    if (!getline(inputStream, varValue, ',')) // Read until a comma is found,
      break;
    switch (index)                            // assign that to the string
    {                                         // and then assign the string
      case 1:                                 // to the vars in order
        setName(varValue);
        break;
      case 2:
        setAddress(varValue);
        break;
      case 3:
        setPhone(varValue);
        break;
    }
  }
  if (!getline(inputStream, varValue)) // For the last var, read until
    return;                            // new-line char and assign it to mass
  setMass(stoi(varValue));
}
