#include "strings.ih"

string **Strings::enlarged()
{
                                        // new block, doubling the # pointers
    string **ret = rawPointers(d_capacity);

                                        // copy the existing pointers
    for (size_t idx = 0; idx != d_size; ++idx)
        ret[idx] = d_str[idx];

    return ret;
}
