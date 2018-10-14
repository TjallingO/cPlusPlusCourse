#include "charcount.ih"

void CharCount::count(std::istream& stream)
//void CharCount::count(void)
{
  stream.clear();
  stream.seekg(0); //reset to beginning
  size_t count = 0;
  while  (stream.get() != EOF)  //counting nr of characters
  {
    ++count;
  }
  charInfoObject.nChar = count;
  cout << "Total Chars " << charInfoObject.nChar << '\n';
}
