#include "strings.ih"

string* Strings::rawPointers(size_t nNewPointers)
{
  string *temporary = static_cast<string *>(operator new(d_capacity * sizeof(string)));
  return temporary;
};

void Strings::reserve()
{
  
};
