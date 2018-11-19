#include "strings.ih"

namespace {
    string empty2;
}

std::string &Strings::safeAt(size_t idx) const
{
    if (idx >= d_size)
    {
        empty2.clear();
        return empty2;
    }

    return d_str[idx];
}
