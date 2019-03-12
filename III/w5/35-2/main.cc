#include "main.ih"
#include "Scanner.h"

#include "iostream"
#include "set"
#include "fstream"

int main(int argc, char const **argv)
{

  std::multiset<string> setname;
  // if (argc > 1)
    Scanner scanner(argv[1], "dev/null");
  // else
  //   Scanner scanner;

  std::fstream out("outfile.txt");

  while (scanner.lex())
  {
    setname.insert(scanner.matched());
  }

  for (auto it: setname)
     out << it << '\n';
  //std::cout << '\n';
}
