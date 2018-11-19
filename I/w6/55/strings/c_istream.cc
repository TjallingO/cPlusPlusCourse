#include "strings.ih"

Strings::Strings(istream &in)
{
    d_pPstrings = rawMemory(1); // Create first memory
    string line;
    while (getline(in, line))
    {
    add(line);
    if (line.empty())
      break;
    }
};
