// Person member function: insert data into ostream

#include "person.ih"

void Person::insert(ostream &outputStream)
{
  outputStream  << "NAME:    " << name()     << '\n'
                << "ADDRESS: " << address()  << '\n'
                << "PHONE:   " << phone()    << '\n'
                << "MASS:    " << mass()     << '\n';
}
// Inserts all object characteristics into ostream. It was assumed that the
// variable identifiers were also desirable.
