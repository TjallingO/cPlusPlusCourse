#include "main.ih"

void binTo(string inputLoc, string outputLoc, string optionb)
{
  if (optionb == "-b")
    bintobin(inputLoc, outputLoc);
    //std::experimental::filesystem::copy(inputLoc, outputLoc);
  else
    bintochar(inputLoc, outputLoc);
}
