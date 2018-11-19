#include "main.ih"

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int compareMyType (const void * a, const void * b)
{
  if ( *(string*)a <  *(string*)b ) return -1;
  if ( *(string*)a == *(string*)b ) return 0;
  if ( *(string*)a >  *(string*)b ) return 1;
}


int main(int argc, char **argv)
{
  /*
  string words[] = {"hello", "goodbye", "aa", "bb"};
  size_t length = sizeof(words)/sizeof(words[0]);

  string *words2[length];



  for (size_t i = 0; i < length; ++i)
  {
    words2[i] = &words[i];
  }

  qsort (words2, sizeof(words2)/sizeof(words2[0]), sizeof(string), compareMyType);

  cout << words[0] << '\n';
  cout << words[1] << '\n';
  cout << words[2] << '\n';

  cout << *words2[0] << '\n';
  cout << *words2[1] << '\n';
  cout << *words2[2] << '\n';
*/
  string word[] = {"hello"};
  cout << *word << '\n';
  qsort(word, 1, sizeof(char), compareMyType);
  cout << *word << '\n';

  cout << word[0] << '\n';
}
