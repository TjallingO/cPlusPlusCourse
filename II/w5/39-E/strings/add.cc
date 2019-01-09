#include "strings.ih"

void Strings::add(string const &input)
{
  //d_str.push_back(new string(input));
  string *pString = new string(input);
  d_str.push_back(pString);

}
