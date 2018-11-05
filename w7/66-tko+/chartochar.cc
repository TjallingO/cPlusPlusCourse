#include "main.ih"

int chartochar( string inputLoc, string outputLoc)
{
    ifstream iF( inputLoc );
    ofstream oF( outputLoc, std::ofstream::out | std::ofstream::trunc);

    char c;
    while (iF.get(c))
        oF << c;

    oF.close();
  return 0;
}
