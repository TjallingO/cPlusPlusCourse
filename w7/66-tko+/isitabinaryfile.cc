#include "main.ih"



bool isitabinaryfile( string inputLoc )
{
  char ch;

  ifstream iF( inputLoc );

  iF.get(ch);

  if (ch == 'A' || ch == 'C' || ch == 'G' || ch == 'T' )
    return false;
  else
    return true;

  iF.close();
}
