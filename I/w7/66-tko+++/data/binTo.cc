#include "data.ih"

void Data::binTo(string inputLoc, string outputLoc, string optionb)
{
  if (optionb == "-b")
    bintobin(inputLoc, outputLoc);
  else
    bintochar(inputLoc, outputLoc);
}
