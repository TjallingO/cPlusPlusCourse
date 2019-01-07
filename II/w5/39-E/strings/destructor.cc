#include "strings.ih"

Strings::~Strings()
{

  //  for (size_t idx = d_str.size(); idx >= 0; idx--)
  //    delete d_str[idx];

    for (auto idx: d_str)
      delete idx;

}
