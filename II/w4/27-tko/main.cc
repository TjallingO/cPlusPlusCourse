#include "main.ih"

int main(int argc, char const **argv)
{
  Base **bp = derivedFactory(10);

  for (size_t idx = 0; idx != 10; ++idx)  // Returning allocated memory
    delete bp[idx];

  delete[] bp;
}
