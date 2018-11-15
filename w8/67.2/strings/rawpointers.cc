#include "strings.ih"

string **Strings::rawPointers(size_t nPointers)
{
    return new string *[nPointers];
}
