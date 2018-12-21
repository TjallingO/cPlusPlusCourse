#include "main.ih"

void print(unordered_multimap<string, string> const &container)
{
  for(auto elem : container)
    std::cout << elem.first << " " << elem.second << "\n";
}
