#include "charcount.ih"
#include <iostream>
#include <stdlib.h>

using namespace std;

CharCount::CharCount(std::istream& stream)
{
  char character;
  size_t count = 0;
  while  (stream.get(character))
  {
    ++count;
    size_t index = locate(character);
    add(character, index);

    append(character, index);

    insert(character, index);

  }

}
