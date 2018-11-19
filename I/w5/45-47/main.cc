// Main file
// This is just an example main file to demonstrate the workings of the Strings class
// The constructors will also work for other NTBSs, but environ and argc/argv
// are convenient examples to use.

#include "main.ih"

int main(int argc, char const **argv)
{
  Strings objectA = Strings(cin);     // Create Strings using cin
  Strings objectB = Strings(environ); // Create Strings using environ
  Strings objectC = Strings(argc, argv);  // Create Strings based on argc, argv

  Strings::stringsSwap(objectA, objectB); // Swap environ and istream Strings

  // objectA.printStrings(); // Print what is now environ Strings
  // objectB.printStrings(); // Print what is now istream Strings
  // objectC.printStrings(); // Print the unchanged objectC
  // These are for testing purposes
}
