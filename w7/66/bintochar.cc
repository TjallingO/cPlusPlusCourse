#include "main.ih"
#include <cstdint>

void bintochar( string const &inputLoc, string const &outputLoc ) //stream //string ref to const stream
{
  cerr << "bintochar\n";
  ofstream output{ outputLoc, ios::trunc | ios::binary  };

  char inputchar;
//  size_t nrcharsfile = filesize( inputLoc );

  ifstream input{ inputLoc };

  while ( input.get(inputchar))
  {
    if (inputchar == 0)
      output.write(reinterpret_cast<char const *>('A'), sizeof(char));
    if (inputchar == 1)
      output.write(reinterpret_cast<char const *>('C'), sizeof(char));
    if (inputchar == 2)
      output.write(reinterpret_cast<char const *>('G'), sizeof(char));
    if (inputchar == 3)
      output.write(reinterpret_cast<char const *>('T'), sizeof(char));
  }
  output.close();
}
