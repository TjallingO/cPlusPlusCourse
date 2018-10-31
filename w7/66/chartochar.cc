#include "main.ih"

void chartochar( ifstream &input, string outputLoc )
{
  ofstream output{ outputLoc };
  //ofstream output{ outputLoc, ios::trunc | ios::out };
  //ofstream output{ outputLoc, ios::binary };
  char inputchar;
  while ( input.get(inputchar))
  {
    if ( inputchar != 'A' && inputchar != 'C' && inputchar != 'G' &&
     inputchar != 'T')
      exit (EXIT_FAILURE);
    else
    {
      output << inputchar;
    //  cout << inputchar;
    }
  }
  output.close();

}
