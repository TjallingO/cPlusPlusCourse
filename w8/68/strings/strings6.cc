#include "strings.ih"

Strings::Strings(size_t nIterate, bool copy)
{
    d_copy = copy;
    d_nIterate = nIterate;

    d_size = 0;
    d_str = 0;

}
