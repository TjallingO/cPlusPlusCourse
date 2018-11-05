#include "main.ih"

int bintobin( string inputLoc, string outputLoc)
{
  ifstream iF( inputLoc );
  ofstream oF( outputLoc, std::ofstream::out | std::ofstream::trunc);


  nucleobase oNB;
  int size = filesize( inputLoc);
  int counter = 0;

  while (counter < size) //niet helemaal goed omdat als er nu geen spatie staat je de laatste mist.
  {
    ++counter;
    iF.read(reinterpret_cast<char*>(&oNB), sizeof(nucleobase));
    oF.write(reinterpret_cast<char*>(&oNB), sizeof(nucleobase));
  }
  return 0;
}
