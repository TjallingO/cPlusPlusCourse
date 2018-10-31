#include "main.ih"

void chartochar( ifstream &input, string outputLoc ) //stream //string ref to const stream
{
  ofstream output{ outputLoc };
  //ofstream output{ outputLoc, ios::trunc | ios::out };
  //ofstream output{ outputLoc, ios::binary };
  char inputchar;
  while ( input.get(inputchar))
  {
    if ( inputchar != 'A' && inputchar != 'C' && inputchar != 'G' &&
     inputchar != 'T')
     {
      cout << "error2 " << inputchar << '\n' ;
      //exit (EXIT_FAILURE); //return 0 succes 1 failure
    }
    else
    {
      output << inputchar;
      if (not output)
        cout << "error";
    //  cout << inputchar;
    }
  }
  output.close();

}
