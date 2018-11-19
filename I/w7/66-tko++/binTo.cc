#include "main.ih"

void binTo(string inputLoc, string outputLoc, string optionb)
{
  if (optionb == "-b")
    bintobin(inputLoc, outputLoc);
  else
    bintochar(inputLoc, outputLoc);
}
