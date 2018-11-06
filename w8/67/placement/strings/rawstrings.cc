#include "strings.ih"

string *Strings::rawStrings(size_t nStrings)    // allocate room for nStrings
{
    return static_cast<string *>(operator new (nStrings * sizeof(string)));
}
