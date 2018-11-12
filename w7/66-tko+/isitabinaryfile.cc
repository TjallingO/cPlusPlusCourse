#include "main.ih"

bool isItaBinaryFile( string inputLoc )
{
  char ch;

  ifstream iF( inputLoc );

  while(iF.get(ch))
  {
    if (ch == 'A' || ch == 'C' || ch == 'G' || ch == 'T' )
      return false;
  }

  iF.close();

  return true;
}
