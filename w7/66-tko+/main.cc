#include "main.ih"




int main(int argc, char const *argv[])
{
  string inputLoc = argv[1];
  string outputLoc = argv[2];
  string optionb;
  if (argv[3])
    optionb = argv[3];

  bool binfile = isitabinaryfile( inputLoc );

  if (binfile)
  {
    if (optionb == "-b")
      bintobin(inputLoc, outputLoc);
    else
      bintochar(inputLoc, outputLoc);
  }
  else
  {
    if (optionb == "-b")
      chartobin(inputLoc, outputLoc);
    else
      chartochar(inputLoc, outputLoc);
  }

  return 0;
}
