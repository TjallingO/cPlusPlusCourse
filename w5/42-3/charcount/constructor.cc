#include "charcount.ih"

CharCount::CharCount(std::istream &stream)
{
  char character;

  while  (stream.get(character))
  {
    size_t index = locate(character);

    add(character, index);

    append(character, index);

    insert(character, index);

  }

}
