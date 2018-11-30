#include "arg.ih"

    // basename(3) could also be used.

void Arg::setBasename(string const &argv0)
{
    string::size_type idx = argv0.rfind('/');   // find the last /

                                                // basename is beyond the / or
                                                // argv[0] itself.
    d_base = idx == string::npos ? argv0 : argv0.substr(idx + 1);
}
