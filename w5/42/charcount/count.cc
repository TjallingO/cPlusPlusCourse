#include "charcount.ih"

void CharCount::count(std::istream& stream)
//void CharCount::count(void)
{

  //CharInfoObject.nChar = stream.right - stream.left;
  stream.clear();
  stream.seekg(0); //reset to beginning
  size_t count = 0;
  while  (stream.get() != EOF)  //counting nr of characters
  {
    ++count;
  }
  CharInfoObject.nChar = count;
  cout << "Total Chars " << CharInfoObject.nChar << '\n';
}
