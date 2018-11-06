#include "strings.ih"

string *Strings::enlarged()
{
                                        // new block, for d_capacity strings
    string *ret = rawStrings(d_capacity);

                                        // copy the existing strings to the
                                        // new area, using placement new.
    for (size_t idx = 0; idx != d_size; ++idx)
        new (&ret[idx]) string(d_str[idx]);

    return ret;
}
