#include "main.ih"

#include <iostream>

int main(int argc, char **const argv)
{
  ostream out(cout.rdbuf());
  out.setstate(ios::failbit);

  for (size_t index = 0; index != stoi(argv[1]); ++index)
    //if (out.good())
      out << "Nr. of command line arguments " << argc << '\n';
}
