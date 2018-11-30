#include "arg.ih"

size_t Arg::option(std::string const &optchars) const
{
    size_t count = 0;

    for (int ch: optchars)              // visit all optchars characters
        count += d_option.size(ch);     // add their numbers of occurrence

    return count;
}
