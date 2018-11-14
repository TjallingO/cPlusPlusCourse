#include "main.ih"

int charTo(string inputLoc, string outputLoc, string optionb)
{
  if (optionb == "-b")
    return chartobin(inputLoc, outputLoc);
  else
    return chartochar(inputLoc, outputLoc);
}
