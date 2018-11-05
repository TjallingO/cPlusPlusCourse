#include "main.ih"

int chartobin( string inputLoc, string outputLoc)
{
    ifstream iF( inputLoc );
    ofstream oF( outputLoc, ios::binary | std::ofstream::out | std::ofstream::trunc);

    char c;
    while (iF.get(c))
    {
      nucleobase nB;
      for (size_t idx = 0; idx != 4; ++idx)
      {
        popStruct(nB, c, idx);
          if (idx != 3)
            iF.get(c);
      }
      oF.write(reinterpret_cast<char*>(&nB), sizeof(nucleobase));
    }
    oF.close();
  return 0;
}
