#include "data.ih"

int Data::chartochar( string inputLoc, string outputLoc)
{
    ifstream iF( inputLoc );
    ofstream oF( outputLoc, std::ofstream::out | std::ofstream::trunc);

    char ch;
    while (iF.get(ch))
    {
      if (ch != 'A' && ch != 'C' && ch != 'G' && ch != 'T')
        return 1;

      oF << ch;
    }

    oF.close();
    //writing the characters in the input file to the output file.
  return 0;
}
