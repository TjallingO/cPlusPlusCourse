#include "strings.ih"

Strings::~Strings()
{
    for (; d_size--; )
        delete d_str[d_size];
  cerr << __FUNCTION__ << __LINE__ << '\t';
    destroy();
  cerr << __FUNCTION__ << __LINE__ << '\n';
}
