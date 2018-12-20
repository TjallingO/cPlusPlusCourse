#include "main.ih"

#include <fstream>

int main(int argc, char const **argv)
{
  std::vector<std::string> words;
  char const *filename = { "example.txt" };
  std::ifstream input(filename);

  if ( input.is_open() )
  {
    std::string word;
    while (input >> word)
    {
      for (auto idx = words.begin(); idx != words.end(); ++idx)
        if (word == *idx)
          break;
      
    }
  }
  cout << "Size: " << words.size() << '\n'
       << "Capacity: " << words.capacity() << '\n'
       << "Now adding one more word \n";

  words.push_back("wsdfjasedfsdf");

  cout << "Size: " << words.size() << '\n'
       << "Capacity: " << words.capacity() << '\n';

  for (auto idx = words.begin(); idx != words.end(); ++idx)
    std::cout << *idx << ' ';
}
