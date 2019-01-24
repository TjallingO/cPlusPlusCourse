#include "main.ih"

void execShift(Handler &myHandler, ostream &out, string const &text)
{
  myHandler.shift(out, text);
}
// Gets passed a thread, which is asked to call shift
