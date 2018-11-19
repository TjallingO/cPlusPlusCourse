#include "data.ih"

int Data::charTo(ifstream &iF, string optionb)
{
  if (optionb == "-b")
    return chartobin(iF);
  else
    return chartochar(iF);
}
