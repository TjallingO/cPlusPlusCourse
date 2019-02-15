#include "main.ih"

#include <iostream>
#include <sstream>

template <typename T>
std::string NTS(T anyT)
{
  std::ostringstream ss;
  ss << anyT;
  return ss.str();
}

int main(int argc, char const **argv)
{
  size_t sizet = 10;
  char character = 'a';
  int integer = 11;
  string stringey = "hello";

  cout << NTS(sizet) << '\n'
       << NTS(character) << '\n'
       << NTS(integer)  << '\n'
       << NTS(stringey) << '\n';
}
