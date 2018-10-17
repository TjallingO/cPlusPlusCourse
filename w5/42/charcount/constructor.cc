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
    count++;
    bool toCreateNewChar = true;
    bool exists = false;

    if  (d_charObject.nChar == 0)
    {
      firstChar(character); //assigns the first char to Char[0]
      toCreateNewChar = false; //bool to indicate we dont need to increase
                              // the size of Char[]
    }
    else
      existsCheck(character, &exists); //checking if the char already exists
                                       //adding 1 to its counter if it does
                                       //and setting exists to true and
                                       //setting exists to false if it does not
                                       //exist.
    if (!exists && toCreateNewChar)
      newChar(character);              //increasing the size of Char[] and
                                       //assigning the char to ch and 1 to its
                                       //counter
  }
    d_charObject.ptr = charSorter(d_charObject.ptr, d_charObject.nChar - 1);
    //Sorting alphabetically
}
