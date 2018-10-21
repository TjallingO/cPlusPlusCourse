#include "tokenizer.ih"

bool Tokenizer::read()
{
    d_read.clear();                 // clear the buffer

    while (isblank(cin.peek()))     // skip leading spaces/tabs
        cin.get();

    if (cin.eof())                  // no more input
        return false;

    while (not isspace(cin.peek())) // eat all non-blanks
        d_read += cin.get();

    return not d_read.empty();      // true: next item in d_read
}
