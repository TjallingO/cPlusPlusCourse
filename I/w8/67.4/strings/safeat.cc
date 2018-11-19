#include "strings.ih"

std::string &Strings::safeAt(size_t idx) const
{
    static string empty;

    empty.clear();

    return idx < d_size ? *d_str[idx] : empty;
}
