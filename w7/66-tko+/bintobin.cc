#include "main.ih"

void bintobin( string inputLoc, string outputLoc)
{
  ifstream iF( inputLoc );
  ofstream oF( outputLoc, std::ofstream::out | std::ofstream::trunc);


  data::nucleobase oNB;

  while (!iF.eof())
  {
    iF.read(reinterpret_cast<char*>(&oNB), sizeof(nucleobase));
    oF.write(reinterpret_cast<char*>(&oNB), sizeof(nucleobase));
  }
  //reading the other bytes and writing them to the new binary file.

}
