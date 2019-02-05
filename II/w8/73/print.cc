#include "main.ih"

void print(map<size_t, size_t> const &supermap)
{
  ofstream output("output");
  for (auto it = supermap.begin(); it != supermap.end(); ++it)
    output << it->first << ' ' << it->second << '\n';
}
