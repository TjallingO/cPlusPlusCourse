#include "main.ih"

int bintobin( string inputLoc, string outputLoc)
{
  ifstream iF( inputLoc );
  ofstream oF( outputLoc, std::ofstream::out | std::ofstream::trunc);


  nucleobase oNB;

  while(!iF.eof())
  {
    iF.read(reinterpret_cast<char*>(&oNB), sizeof(nucleobase));
    oF.write(reinterpret_cast<char*>(&oNB), sizeof(nucleobase));
  }
  return 0;
}
