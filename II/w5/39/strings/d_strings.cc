#include "strings.ih"

Strings::~Strings()
{
  for (auto element: d_vStrings)
    delete element;
}
