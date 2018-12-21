#include "main.ih"

#include <fstream>

int main(int argc, char const **argv)
{
  set<std::string> setWords;
  char const *filename = { "example.txt" };
  ifstream input(filename);

  if ( input.is_open() )
  {
    std::string word;
    while (input >> word)
      setWords.insert(word);
  }

  vector words(setWords.begin(), setWords.end());

  cout << "Size: " << words.size() << '\n'
       << "Capacity: " << words.capacity() << '\n'
       << "- Now adding one more word \n";

  words.push_back("wsdfjasedfsdf");

  cout << "Size: " << words.size() << '\n'
       << "Capacity: " << words.capacity() << '\n'
       << "- Now shedding capacity \n";

  words = vector(words);

  cout << "Size: " << words.size() << '\n'
       << "Capacity: " << words.capacity() << '\n';

  //for (auto idx = words.begin(); idx != words.end(); ++idx)
  //  cout << *idx << ' ';
}
