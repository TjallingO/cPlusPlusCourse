// Main file

#include "main.ih"

int main()
{
  extern const char **environ;
  const char* const mystringsA[8]={"string1","string2","string3","string4","string5","string6", 0};
  const char* const mystringsB[8]={"string7","string8","string9","string40","string50","string60", 0};
  Strings objectA = Strings(cin);
  objectA.printStrings();
  Strings objectB = Strings(environ);
  objectB.printStrings();
  Strings::stringsSwap(objectA, objectB);
  objectA.printStrings();
  objectB.printStrings();
}
