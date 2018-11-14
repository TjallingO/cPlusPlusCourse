#include "data.ih"

void data::setNucleoBase(char ch)
{
  //d_nB = ch;
  d_nB = reinterpret_cast<data::nucleobase*>(&ch);
}
