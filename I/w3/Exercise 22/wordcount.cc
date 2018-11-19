#include "w3e22.h"

using namespace std;

size_t wordcount(string text)
{
  size_t counter = 0;        //counts the number of words
  size_t index = 0;          //index of string

  while (index <= text.length())
  {
    if(isspace(text[index]) && !isspace(text[index+1]))
      ++counter;
    ++index;
  }
  return counter;
}
