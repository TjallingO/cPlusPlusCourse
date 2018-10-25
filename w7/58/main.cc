#include "main.ih"
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

  ostream out(std::cout.rdbuf());


  out.setstate(ios::failbit);
  size_t nrtime = atoi(argv[1]);


  for (size_t index = 0; index != nrtime; ++index) {
    if (out.good())
      out << "Nr. of command line arguments " << argc << '\n';
  }



}
