#include "w3e21.h"

using namespace std;

void combine(ReturnValues *input, size_t nr, string requestedarg)
{
  (*input).argumentNumber = nr;
  if  (!requestedarg.empty())
  {
    (*input).argument = requestedarg;
    (*input).TrueOrFalse = true;
  }
  else
  {
    (*input).argument;
    (*input).TrueOrFalse = false;
  }
}
