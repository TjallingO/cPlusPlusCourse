#include "main.ih"

Base **derivedFactory(size_t size)
{
  Base **base = new Base *[size];
  Derived *derived = new Derived [size];

  for (size_t idx = 0; idx < size; ++idx)
  {
    base[idx] = &derived[idx];
  }
  delete[] derived;

  return base;
}

int main(int argc, char const **argv)
{
  Base **bp = derivedFactory(10);

  for (size_t idx = 0; idx < 10; ++idx)
    bp[idx] -> hello(cout);

  delete[] bp;

}
