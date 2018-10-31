#include "main.ih"

using namespace std;

int main(int argc, char **argv)
{
  string inputLoc = argv[1];
  string outputLoc = argv[2];
  //argv[1] input
  //argv[2] output
  //argv[3] = -b of niet

  //input chars of convert naar chars


  //if -b binary output, else human readable
  //// human readable not actg return nonzero

  //fstream io{ "./tmp/out", ios_base::out };
  ifstream input{ inputLoc };
  //ofstream output{ "./tmp/out.txt", ios::trunc | ios::out };
  //ofstream output{ "./tmp/out2.bin", ios::binary };

  chartochar( input, outputLoc );


/*

  char x;

  while (input.get(x))
  {
    //output.write(reinterpret_cast<char const *>(&x), sizeof(x));
    //output << (static_cast<char const>(x));
    output << x;
    //output.write((char*) &x, sizeof(x));

  }
*/
}
