#include "strings.ih"

Strings::Strings(istream &in)
{
    string line;
    while (getline(in, line))
    {
    add(line);
    if (line.empty())
      break;
    }
};
