#include "main.ih"

int main(int argc, char const **argv)   // Testing functionality of extString
{
  string const myString("hello");
  ExtString myExtString(10, myString);
  cout << myExtString << '\n'
       << myExtString.length();
}
