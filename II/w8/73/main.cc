#include "main.ih"

#include <iostream>

size_t powerfour(size_t &value)
{

  if ((value & 1) == 0)
  {
    if (value == 4)
      return 4;
    value >>= 1;

    if ((value & 1) == 0)
      {
        value >>= 1;
        if (value == 4)
          return 4;
        powerfour(value);
      }
  }
  return value;
}


void collatz(size_t value)
{
  size_t startvalue = value;
  size_t idx = 0;
  size_t highest = value;

  size_t four = 0;

    while (value != 1)
    {
      //cout << value << '\t';
      size_t fourtest = value;

      if (powerfour(fourtest) == 4)
        ++four;


      if ((value & 1) == 0)             // even
          value >>= 1;                 // then divide by 2
      else
          value += (value << 1) + 1;   // value = 3 * value + 1

      if (highest < value)
      {
        highest = value;
      }
      ++idx;

    }
/*
    cout << '\n' << "Highest value is " << highest
    << ". Sequence length is " << idx << " . Power of four occurences "
    << four << ".\n";
    */
    if (four > 3)
    cout << startvalue << " ";
}



int main(int argc, char const **argv)
{
  if (argc == 2)
  {
    size_t iterations = stoul(argv[1]);

    for (size_t i = 2; i < iterations; i++)
      collatz(i);

    cout << '\n';
  }
  else
    cout << "Invalid input. Please enter number of iterations.\n";
}
