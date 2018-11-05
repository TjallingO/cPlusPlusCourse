#include "main.ih"

#include <ostream>
#include <fstream>

char enumToChar(int nucEnum);
enum nucleoInts enumChar(char c);
void printStruct(nucleobase &nB, size_t n);
void popStruct(nucleobase &nB, char c, size_t n);

int main(int argc, char const *argv[])
{

  ifstream txtF("./humanG.txt");
  ofstream oF("./nB.bin", ios::binary);
  oF.open("./nB.bin", std::ofstream::out | std::ofstream::trunc);
  oF.close();

  oF.open("./nB.bin", ios::binary | fstream::app);

  while (true)
  {
    char c;
    if (txtF.eof())
      break;
    nucleobase nB;
    for (size_t idx = 0; idx != 4; ++idx)
    {
      txtF.get(c);
      popStruct(nB, c, idx);
    }
    oF.write(reinterpret_cast<char*>(&nB), sizeof(nB));
  }
  oF.close();

  ifstream iF("./nB.bin", ios::binary);
  nucleobase oNB;
  bool print = 1;
  cout << "GATCAATGAGGTA \n";
  while(true && print)
  {
    if (iF.eof())
      break;
    iF.read(reinterpret_cast<char*>(&oNB), sizeof(oNB));
    for (size_t idx = 0; idx != 4; ++idx)
    {
      printStruct(oNB, idx);
    }
  }
}

char enumToChar(int nucEnum)
{
  switch (nucEnum)
    {
      case A:
        return 'A';
        break;
      case C:
        return 'C';
        break;
      case T:
        return 'T';
        break;
      case G:
        return 'G';
        break;
      default:
        break;
    }
}

enum nucleoInts enumChar(char c)
{
  switch (c)
    {
      case 'A':
        return A;
        break;
      case 'C':
        return C;
        break;
      case 'T':
        return T;
        break;
      case 'G':
        return G;
        break;
      default:
        return X;
        break;
    }
}

void printStruct(nucleobase &nB, size_t n)
{
  switch(n)
  {
    case 0:
      cout << enumToChar(nB.nb1);
      break;
    case 1:
      cout << enumToChar(nB.nb2);
      break;
    case 2:
      cout << enumToChar(nB.nb3);
      break;
    case 3:
      cout << enumToChar(nB.nb4);
      break;
    default:
      break;
  }
}

void popStruct(nucleobase &nB, char c, size_t n)
{
  switch(n)
  {
    case 0:
      nB.nb1 = enumChar(c);
      break;
    case 1:
      nB.nb2 = enumChar(c);
      break;
    case 2:
      nB.nb3 = enumChar(c);
      break;
    case 3:
      nB.nb4 = enumChar(c);
      break;
    default:
      break;
  }
};
