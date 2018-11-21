#include "strings.ih"

Strings::~Strings()
{
    for (; d_size--; )
        delete d_str[d_size];

    destroy();
}
