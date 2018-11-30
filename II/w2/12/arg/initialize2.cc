#include "arg.ih"

// static
Arg &Arg::initialize(char const *optstring,
                LongOption const *const begin,
                LongOption const *const end,
                int argc, char **argv)
{
    if (s_arg)                          // only 1 Arg object is allowed
    {
        cerr <<  "Arg::initialize(): already initialized\n";
        throw char(1);
    }

                                        // construct the object
    s_arg = new Arg(optstring, begin, end, argc, argv);

    return *s_arg;                      // return its reference
}
