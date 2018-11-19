#include "data.ih"

bool Data::isItaBinaryFile(ifstream &iF)
{
  char ch;

  iF.get(ch);

  if (ch < 4) //first ch in bin file gives nr of bits stored in last char
    return true; //which has to be lower than 4

  d_firstchar = ch;

  return false;

}
