#include "main.ih"

int main(int argc, char const **argv)
{
  if (argc == 2)
  {
    Scanner scanner(argv[1]);
    scanner.lex();
  }
  else
  {
    cout << "Please provide input filename.\n";
  }
}
