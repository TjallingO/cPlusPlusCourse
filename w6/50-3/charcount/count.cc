#include "charcount.ih"

size_t CharCount::count(istream &in)
{
    size_t nChars = 0;

    char ch;

    while (in.get(ch))
    {
        ++nChars;
        process(ch);                    // add ch to the set of characters
    }

    return nChars;
}
