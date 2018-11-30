#include "arg.ih"

// fill the array of `struct option' (OptStruct) elements to be 
// interpreted by getopt_long(3)

void Arg::fillLongOptions(OptStruct *optStruct,
                          string const &optString,
                          LongOption const *const begin,
                          LongOption const *const end)
{
    for (LongOption const *ptr = begin; ptr != end; ++ptr, ++optStruct)
        addLongOption(optStruct, optString, *ptr);
}
