#include "main.ih"

int main(int argc, char const **argv)   // Testing functionality of extString
{
  string const myString("hello");
  extString myExtString(15, myString);
  cout << myExtString;
  cout << myExtString.length();
}
