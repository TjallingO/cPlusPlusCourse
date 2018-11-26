#include "strings.ih"

std::istream &Strings::extractFrom(std::istream &in)
{
  string line;
  while(getline(in, line))
  {
    add(line);
  }
  return in;
}
