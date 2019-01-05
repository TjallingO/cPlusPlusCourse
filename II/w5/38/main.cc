#include "main.ih"

// This just tests the functionality of the class

int main(int argc, char const **argv)
{
  Strings myStrings(environ);
  myStrings += "hello";
  cout << "At pos 0: " << myStrings[0] << '\n'
       << "Again: " << myStrings.at(0) << '\n';
//  myStrings.print();
  Strings test;
  cout << test.capacity() << '\n';
}
