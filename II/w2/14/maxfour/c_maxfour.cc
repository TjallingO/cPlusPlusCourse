#include "maxfour.ih"

MaxFour::MaxFour()
try
:
d_content(new std::string("hello"))
{
  ++objCount;
  if (objCount > 4)
    throw string{ "max. number of objects reached" };
}
catch (...)
{
  delete d_content;
}
