#include "maxfour.ih"

MaxFour::MaxFour()
try
:
  d_content(new std::string("hello")) // Example to illustrate new/delete in try
{
  ++s_objCount;
  if (s_objCount > 4)
    throw string{ "max. number of objects reached" };
}
catch (...)
{
  delete d_content;
}
