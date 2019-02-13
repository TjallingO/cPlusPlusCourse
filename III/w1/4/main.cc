#include "main.ih"

int main(int argc, char const **argv)
{
  forwarder(fun, 1, 3);             // Calls fun() correctly
  int x = 0;
  forwarder(incrementer, x, x, x);
  cout << x << '\n';                // Prints '3'
}
