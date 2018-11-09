#include "strings.ih"

string *Strings::enlargebymove()
{
    string *ret = new string[d_size + 1];       // room for an extra string

    for (size_t idx = 0; idx != d_size; ++idx)  // copy existing strings
        ret[idx] = move(d_str[idx]);
    delete[] d_str;
    d_str = ret;
    d_size = d_size + 1;

    return ret;
}
