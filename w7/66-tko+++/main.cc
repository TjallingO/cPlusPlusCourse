#include "main.ih"

int main(int argc, char const *argv[])
{
  string inputLoc = argv[1];
  string outputLoc = argv[2];
  string optionb;
  if (argv[3])
    optionb = argv[3];
/*
  bool binfile = isItaBinaryFile( inputLoc );


  if (binfile)
    binTo(inputLoc, outputLoc, optionb);
  else
    return charTo(inputLoc, outputLoc, optionb);
*/
  //if a char in the char file is not A, C, G or T return
  //nonzero

  Data goodName(inputLoc, outputLoc);

  bool binfile = goodName.isItaBinaryFile( inputLoc );

  if (binfile)
    goodName.binTo(inputLoc, outputLoc, optionb);
  else
    return goodName.charTo(inputLoc, outputLoc, optionb);
}
