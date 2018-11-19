#include "strings.ih"

string* Strings::rawMemory(size_t nPointers)
{
  string *tmp = static_cast<string *>(operator new(nPointers * sizeof(string)));
  return tmp;
};
