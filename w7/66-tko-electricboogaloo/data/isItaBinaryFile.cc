#include "data.ih"

bool Data::isItaBinaryFile()
{
  char ch;

  ifstream iF( d_inputLoc );

  iF.get(ch);

  if (ch < 4) //first ch in bin file gives nr of bits stored in last char
    return true; //which has to be lower than 4

  return false;

}
