#include "main.ih"

int chartochar( string const &inputLoc, string const &outputLoc ) //stream //string ref to const stream
{
  cerr << "chartochar\n";
  ofstream output{ outputLoc, ios::trunc };
  //ofstream output{ outputLoc, ios::trunc | ios::out };
  //ofstream output{ outputLoc, ios::binary };
  char inputchar;
  size_t nrcharsfile = filesize( inputLoc );
  size_t counter = 0;

  ifstream input{ inputLoc };

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
      output << inputchar;
      if (not output)
        cout << "error";
    }


  }
  output.close();
  return 0;
}
