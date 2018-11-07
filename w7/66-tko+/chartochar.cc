#include "main.ih"

int chartochar( string inputLoc, string outputLoc)
{
    ifstream iF( inputLoc );
    ofstream oF( outputLoc, std::ofstream::out | std::ofstream::trunc);

    char c;
    while (iF.get(c))
    {
      if (c != 'A' && c != 'C' && c != 'G' && c != 'T')
        return 1;

        oF << c;
    }

    oF.close();
    //writing the characters in the input file to the output file.
  return 0;
}
