#include "main.ih"

int chartobin( string inputLoc, string outputLoc)
{
    ifstream iF( inputLoc );
    ofstream oF( outputLoc, ios::binary | std::ofstream::out | std::ofstream::trunc);

    char c;

    while (!iF.eof())
    {
      nucleobase nB;
      for (size_t idx = 0; idx != 4; ++idx)
      {
        iF.get(c);
        if (c != '\n' && c != ' ')
        {
          cout << "printing: " << c << '\n';
          popStruct(nB, c, idx);
        }
      }
      oF.write(reinterpret_cast<char*>(&nB), sizeof(nucleobase));
    }
    oF.close();
  return 0;
}
