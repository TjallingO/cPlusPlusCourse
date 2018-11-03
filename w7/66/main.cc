#include "main.ih"

using namespace std;



int main(int argc, char **argv)
{
  string inputLoc = argv[1];
  string outputLoc = argv[2];
  string optionb;
  if (argv[3])
    optionb = argv[3];

  switch( filetypecheck( inputLoc ) )
  {
    case CHARACTER :
    {
      if (optionb == "-b")
        chartobin( inputLoc, outputLoc );
      else
        chartochar( inputLoc, outputLoc );
      break;
    }
    case BINARY :
    {
      if (optionb == "-b")
        bintobin(inputLoc, outputLoc);
      else
        bintochar(inputLoc, outputLoc);
      break;
    }
    break;

  }




}
