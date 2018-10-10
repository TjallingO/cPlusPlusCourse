// Person member function: extract person data from istream

#include "person.ih"

void Person::extract(istream &inputStream)
{
  string varValue; // Initialise string to be used to populate variables
  for (size_t index = 0; index != 3; ++index) // Loop through first three vars
  {
    if (!getline(inputStream, varValue, ',')) // Read until a comma is found,
      break;
    switch (index)                            // assign that to the string
    {                                         // and then assign the string
      case 0:                                 // to the vars in order
        setName(varValue);
        break;
      case 1:
        setAddress(varValue);
        break;
      case 2:
        setPhone(varValue);
        break;
      default:                                // Should never happen, but
        break;                                // it's good practice to include it,
    }                                         // right?
  }
  if (!getline(inputStream, varValue))        // For the last var, read until
    return;                                   // new-line char and assign it to mass
  setMass(stoi(varValue));
}
