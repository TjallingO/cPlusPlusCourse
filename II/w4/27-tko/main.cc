#include "main.ih"

int main(int argc, char const **argv)
{

  Base **bp = derivedFactory(10);

  for (size_t idx = 0; idx < 10; ++idx) {
    (*bp[idx]).hello(cout);
  }

   for (size_t idx = 0; idx != 10; ++idx)
   {
     delete bp[idx];
   }

  delete[] bp;
}
