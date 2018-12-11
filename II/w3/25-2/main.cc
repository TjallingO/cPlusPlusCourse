#include "main.ih"

int main(int argc, char const **argv)
{
  string const myString{ "test" };                // Testing
  string *myStringArray = factory(myString, 10);
  cout << myStringArray[5];                       // Testing
  delete[] myStringArray;                         // Freeing memory
}

// Note: all this could be implemented in a proper class with a deconstructor,
// this is just a proof of concept.
