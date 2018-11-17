#include "strings.ih"

string *Strings::enlargebyMove()
{
    string *ret = new string[d_size + 1];       // room for an extra string

    for (size_t idx = 0; idx != d_size; ++idx)  // copy existing strings
        ret[idx] = move(d_str[idx]);


    return ret;
}
