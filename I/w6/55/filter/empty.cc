#include "filter.ih"

// static
bool Filter::empty(string const &str)
{
    // find_first_not_of(" \t") returns index -> not empty,
    //  so:
        // find_first_not_of(" \t") != npos       -> not empty
        //  so:
            // find_first_not_of(" \t") == npos       -> empty

    return str.find_first_not_of(" \t") == string::npos;
}
