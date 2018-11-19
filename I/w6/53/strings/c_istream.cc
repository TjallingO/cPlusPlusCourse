#include "strings.ih"

Strings::Strings(istream &in)
{
  d_pPstrings = rawPointers(1); // Create first memory
  string line;
  while (getline(in, line))
  {
    add(line);
    if (line.empty())
      break;
  }
};
