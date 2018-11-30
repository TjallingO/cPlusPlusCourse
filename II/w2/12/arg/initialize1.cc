#include "arg.ih"

// static
Arg &Arg::initialize(char const *optstring, int argc, char **argv)
{
    if (s_arg)                          // only 1 Arg object is allowed
    {
        cerr << "Arg::initialize(): already initialized\n";
        throw char(1);
    }

    s_arg = new Arg(optstring, argc, argv); // construct the object

    return *s_arg;                          // return its reference.
}
