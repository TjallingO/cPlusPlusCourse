#include "arg.ih"

// static
Arg &Arg::instance()
{
    if (not s_arg)                  // instance requires an initialized object
    {
        cerr << "Arg::instance(): not yet initialized";
        throw char(1);
    }

    return *s_arg;                  // return its reference if available
}
