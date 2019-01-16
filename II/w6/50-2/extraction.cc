#include "main.ih"

void operator>>(istream &istr, vector<string> &dest)
{
  std::copy(std::istream_iterator<Line>(istr), std::istream_iterator<Line>(),
   inserter(dest, dest.begin()));
}
