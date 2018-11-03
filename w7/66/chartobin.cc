#include "main.ih"
#include <cstdint>

int chartobin( string const &inputLoc, string const &outputLoc ) //stream //string ref to const stream
{
  cerr << "chartobin\n";
  ofstream output{ outputLoc, ios::trunc | ios::binary  };

  char inputchar;
  size_t nrcharsfile = filesize( inputLoc );
  size_t counter = 0;

  ifstream input{ inputLoc };

  uint8_t x;

  while ( input.get(inputchar))
  {
      ++counter;

    if ( inputchar != 'A' && inputchar != 'C' && inputchar != 'G' &&
     inputchar != 'T' && !(counter == nrcharsfile && inputchar == '\n'))
     {
      cout << "error2 " << nrcharsfile << ' ' << counter << ' ' << inputchar << '\n' ;
      return 1;
    }
    else
    {
      if (inputchar == 'A')
      {
        //output << 00;
        x = 0;
        //output.write(reinterpret_cast<uint8_t const *>(&x), sizeof(x));
        //x = 0;
        output.write(reinterpret_cast<char const *>(&x), sizeof(x));
      }
      if (inputchar == 'C')
      {
        //output << 01;
        x = 1;
        //output.write(reinterpret_cast<uint8_t const *>(&x), sizeof(x));
        //x = 0;
        output.write(reinterpret_cast<char const *>(&x), sizeof(x));
      }
      if (inputchar == 'G')
      {
        //output << 10;
        x = 2;
        //output.write(reinterpret_cast<uint8_t const *>(&x), sizeof(x));
        //x = 0;
        output.write(reinterpret_cast<char const *>(&x), sizeof(x));
      }
      if (inputchar == 'T')
      {
        //output << 11;
        x = 3;
        //output.write(reinterpret_cast<uint8_t const *>(&x), sizeof(x));
        //x = 1;
        output.write(reinterpret_cast<char const *>(&x), sizeof(x));
      }
      if (not output)
        cout << "error";
    }

  }
  output.close();
  return 0;
}
