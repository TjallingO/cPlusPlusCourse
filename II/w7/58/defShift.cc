#include "main.ih"

void defShift(ostream &out, string const &text)
{
  Handler myHandler;
  myHandler.shift(out, text);
}
// Defines Handler in-thread, then asks it to perform the shift function
