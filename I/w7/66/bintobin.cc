#include "main.ih"
#include <cstdint>

void bintobin( string const &inputLoc, string const &outputLoc ) //stream //string ref to const stream
{
  cerr << "bintobin\n";
  ofstream output{ outputLoc, ios::trunc | ios::binary  };

  char inputchar;
//  size_t nrcharsfile = filesize( inputLoc );

  ifstream input{ inputLoc };

  while ( input.get(inputchar))
  {
    output.write(reinterpret_cast<char const *>(&inputchar), sizeof(inputchar)); 
  }
  output.close();
}
