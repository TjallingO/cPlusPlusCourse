#include "main.ih"

multiset<string> processcin()
{
  multiset<string> words;

  Scanner flatbed;  // Default constructor (cin, cout)

  while (flatbed.lex())
    words.insert(flatbed.matched());

  return words;
}
