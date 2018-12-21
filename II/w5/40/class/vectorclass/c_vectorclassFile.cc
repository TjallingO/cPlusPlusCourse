#include "vectorclass.ih"

VectorClass::VectorClass(char const *filename)
{
  set<string> setWords;
  ifstream input(filename);

  if ( input.is_open() )
  {
    string word;
    while (input >> word)
      setWords.insert(word);
  }
  d_vWords = vector(setWords.begin(), setWords.end());
}
