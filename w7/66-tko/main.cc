#include "main.ih"

#include <ostream>
#include <fstream>

int main(int argc, char const *argv[])
{
  struct nucleobase
  {
    unsigned char nb : 2;
  };

  enum nucleoInts
  {
    A = 0,
    C,
    T,
    G
  };

  ifstream txtF("./humanG.txt");
  ofstream oF("./nB.bin", ios::binary);
  oF.open("./nB.bin", std::ofstream::out | std::ofstream::trunc);
  oF.close();

  oF.open("./nB.bin", ios::binary | fstream::app);

  char c;
  while (txtF.get(c))
  {
    nucleobase nB;
    switch (c)
    {
      case 'A':
        nB.nb = A;
        break;
      case 'C':
        nB.nb = C;
        break;
      case 'T':
        nB.nb = T;
        break;
      case 'G':
        nB.nb = G;
        break;
      case '\n':
        break;
      default:
        break;
    }
    oF.write(reinterpret_cast<char*>(&nB), sizeof(nucleobase));
  }
  oF.close();

  ifstream iF("./nB.bin", ios::binary);
  nucleobase oNB;
  while(true)
  {
    if (iF.eof())
      break;
    iF.read(reinterpret_cast<char*>(&oNB), sizeof(nucleobase));
    switch (oNB.nb)
    {
      case A:
        cout << 'A';
        break;
      case C:
        cout << 'C';
        break;
      case T:
        cout << 'T';
        break;
      case G:
        cout << 'G';
        break;
      default:
        break;
    }
  }
}
