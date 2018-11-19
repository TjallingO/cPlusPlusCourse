#include "strings.ih"

void Strings::swap(Strings &other)
{
    string *tmp = d_pPstrings;
    d_pPstrings = other.d_pPstrings;
    other.d_pPstrings = tmp;

    size_t size = d_size;
    d_size = other.d_size;
    other.d_size = size;
}
