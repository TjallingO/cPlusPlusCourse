#include "charcount.ih"

CharCount::CharCount(std::istream& stream)
{
  stream.clear();
  stream.seekg(0); //reset to beginning
  size_t count = 0;
  string differentchars;
  while  (stream.get() != EOF)  //counting nr of characters
  {
    if (stream.get() != differentchars.find(stream.get()))
    {
      differentchars += stream.get();
      ++count;
    }
  }
  charInfoObject.nSepChar = count;

  //CharInfo CharInfoObject;
}
