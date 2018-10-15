#include "w3e22.h"

using namespace std;

size_t linecount(string text)
{
  size_t counter = 0;     //line counter
  size_t index = 0;       //index of text string
  string line;

  while (index <= text.length())
  {
    if (text[index] == '\n')
      ++counter;
    ++index;
  }

  return counter;
}
