#include "main.ih"

void fill(unordered_multimap<string, string> &container)
{
  char const *filename = { "example.txt" };
  ifstream input(filename);

  if ( input.is_open() )
  {
    string key;
    string content;

    while (input >> key >> content)
    {
      pair<string, string> myPair(key, content);
      container.insert(myPair);
    }
  }
}
