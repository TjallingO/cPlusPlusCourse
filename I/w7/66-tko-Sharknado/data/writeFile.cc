#include "data.ih"


int Data::writeFile(string optionb)
{
  ifstream iF( d_inputLoc );

  char ch;
  iF.get(ch);
  d_firstchar = ch;

  if (ch < 4) //first ch in bin file gives nr of bits stored in last char
    binTo(iF, optionb); //which has to be lower than 4
  else
    return charTo(iF, optionb);

  return false;
}
