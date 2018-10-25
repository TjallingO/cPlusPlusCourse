#include "main.ih"
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

  ostream out(std::cout.rdbuf());


  out.setstate(ios::failbit);
  size_t nrtime = atoi(argv[1]);


  for (size_t index = 0; index < nrtime; ++index) {
    if (out.good())
      out << "Nr. of command line arguments " << argc << '\n';
  }



}
/*
for loop:
real	0m5,130s
user	0m5,131s
sys	0m0,000s

with if check
real	0m0,068s
user	0m0,068s
sys	0m0,000s

without the if check in every iteration the string has to be stored in the
buffer. Afterwards when it tries to pass it to out, it wont be printed since
the state is set to failbit.
With the if check there is no need to store things in the buffer, which makes
it much faster.
So a general rule should be to perform checks before storing things in a buffer
when possible.
*/
