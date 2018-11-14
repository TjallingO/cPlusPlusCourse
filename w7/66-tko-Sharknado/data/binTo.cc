#include "data.ih"

void Data::binTo(ifstream &iF, string optionb)
{
  if (optionb == "-b")
    bintobin(iF);
  else
    bintochar(iF);
}
