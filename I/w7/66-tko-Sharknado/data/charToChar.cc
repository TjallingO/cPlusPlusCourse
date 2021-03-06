#include "data.ih"

int Data::chartochar(ifstream &iF)
{
    ofstream oF( d_outputLoc, std::ofstream::out | std::ofstream::trunc);

    oF << d_firstchar;
    
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
