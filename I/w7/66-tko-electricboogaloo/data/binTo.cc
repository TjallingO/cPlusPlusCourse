#include "data.ih"

void Data::binTo(string optionb)
{
  if (optionb == "-b")
    bintobin();
  else
    bintochar();
}
