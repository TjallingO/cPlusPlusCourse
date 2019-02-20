#include "main.ih"

int main(int argc, char const **argv)
{
  string *pStringArray = rawCapacity<string>(10); // Initialise 10 strings
  pStringArray[1] = "hello";                      // Place "hello" at [1]
  cout << pStringArray[1];                        // Print it (for checking)
  operator delete(pStringArray);
}
