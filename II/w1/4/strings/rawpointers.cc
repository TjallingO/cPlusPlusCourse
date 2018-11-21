#include "strings.ih"

// static
string **Strings::rawPointers(size_t nPointers)
{
    return new string *[nPointers];
}
