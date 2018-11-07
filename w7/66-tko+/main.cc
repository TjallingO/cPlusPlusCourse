#include "main.ih"




int main(int argc, char const *argv[])
{
  string inputLoc = argv[1];
  string outputLoc = argv[2];
  string optionb;
  if (argv[3])
    optionb = argv[3];

  bool binfile = isitabinaryfile( inputLoc );
  int status = 0;

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
      status = chartobin(inputLoc, outputLoc);
    else
      status = chartochar(inputLoc, outputLoc);
  }

  if (status == 1) //if a char in the char file is not A, C, G or T return
    return 1;      //nonzero

  return 0;
}
