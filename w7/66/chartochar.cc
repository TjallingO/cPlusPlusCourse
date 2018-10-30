#include "main.ih"

void chartochar( ifstream &input, ofstream &output )
{
  char inputchar;
  while ( input.get(inputchar))
  {
    if ( inputchar != 'A' && inputchar != 'C' && inputchar != 'G' &&
     inputchar != 'T')
      exit (EXIT_FAILURE);
    else
    {
      output << inputchar;
  //    cout << inputchar;
    }
  }
  output.close();

}
