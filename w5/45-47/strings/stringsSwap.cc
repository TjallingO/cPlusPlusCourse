#include "strings.ih"

void Strings::stringsSwap(Strings &objectA, Strings &objectB)
{
  Strings temporary = objectA;
  // First, a Strings object temporary is created using an implicit (i.e. non-user
  // defined) / trivial copy constructor. In other words, temporary is constructed
  // based on a constant reference to objectA, thus temporary is now a copy of objectA
  // (in a new location in memory). Strings temporary(objectA); would do the same.
  objectA = objectB;
  // This a default class assignment. Now, both objectA and objectB point to the same
  // memory, which must be remedied.
  objectB = temporary;
  // This assigns objectB to the same memory as temporary.
  // Since temporary is not destroyed, this solution works fine, but really an
  // overloaded assignment operator and copy constructor should be written.
};
