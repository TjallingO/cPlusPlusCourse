#include "main.ih"

void read(istream &input, vector<string> &vs)
{
  string line;

  while (getline(input, line))
    vs.push_back(line);
}
