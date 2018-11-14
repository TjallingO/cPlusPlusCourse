#include "data.ih"
#include <iostream>
void data::setNucleoBase(char ch)
{
  //d_nB = ch;
  cout << reinterpret_cast<data::nucleobase*>(&ch);
  //d_nB = static_cast<data::nucleobase*>(&ch);
}
