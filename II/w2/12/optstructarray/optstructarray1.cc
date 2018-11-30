#include "optstructarray.ih"

OptStructArray::OptStructArray(size_t size)
:
    d_n(size),
    d_opt(new OptStruct[size])
{
    d_opt[size - 1] = OptStruct{0, };       // last element filled with zeroes
}
