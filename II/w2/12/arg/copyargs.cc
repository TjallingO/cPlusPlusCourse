#include "arg.ih"

void Arg::copyArgs(char const *const *from, char const *const *to)
{
    d_arg = new string[d_nArgs = to - from];

    for (size_t idx = 0, end = to - from; idx != end; ++idx, ++from)
        d_arg[idx] = *from;
}
