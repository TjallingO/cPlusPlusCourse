#include "strings.ih"

void Strings::stringsSwap(Strings &objectA, Strings &objectB)
{
  Strings temporary = objectA;
  objectA = objectB;
  objectB = temporary;
};
