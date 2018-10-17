#include "charcount.ih"

CharCount::CharCount(std::istream& stream)
{
  char character;

  while  (stream.get(character))
    {
      bool exists = false;

      if  (d_size <= d_charObject.nChar)
        enlarge();

      existsCheck(character, &exists);
      add(character);

      if  (!exists)
        append(character);
    }

    d_charObject.ptr = charSorter(d_charObject.ptr, d_charObject.nChar - 1);


}
