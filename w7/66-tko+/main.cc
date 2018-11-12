#include "main.ih"




int main(int argc, char const *argv[])
{
  string inputLoc = argv[1];
  string outputLoc = argv[2];
  string optionb;

  if (argv[3])
    optionb = argv[3];

  bool binfile = isItaBinaryFile( inputLoc );

  if (binfile)
    binTo( inputLoc, outputLoc, optionb);
  else
    return charTo( inputLoc, outputLoc, optionb);

}
