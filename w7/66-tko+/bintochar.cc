#include "main.ih"

int bintochar( string inputLoc, string outputLoc)
{
  ifstream iF( inputLoc );
  ofstream oF( outputLoc, std::ofstream::out | std::ofstream::trunc);


  nucleobase oNB;


  while (iF.read(reinterpret_cast<char*>(&oNB), sizeof(nucleobase)))
  {
    for (size_t idx = 0; idx != 4; ++idx)
      oF << printStruct(oNB, idx);
  }
  return 0;
}
