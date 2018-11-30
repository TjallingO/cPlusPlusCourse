#include "arg.ih"

string Arg::prepareArg(char const *argv0, char const *optstring)
{
    setBasename(argv0);

    string opts(*optstring == ':' ? "" : ":");  // ensure initial char is ':'
                                    // (returns : when a required argument is
                                    // missing)
    opts += optstring;

    opterr = 0;                     // prevent getopt() msgs to stderr

    return opts;
}
