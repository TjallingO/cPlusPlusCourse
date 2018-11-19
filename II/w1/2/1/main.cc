#include "main.ih"

bool promptGet(istream &in, string &str)
{
  cout << "Enter a line or ^D\n";     // ^D signals end-of-input

  return getline(in, str);
}

int main(int argc, char const **argv)
{
  while (promptGet(cin, str))
    process(str);
}
