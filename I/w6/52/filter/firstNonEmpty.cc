#include "filter.ih"

// static
size_t Filter::firstNonEmpty(size_t size, string const *str)
{
    size_t idx = 0;
                                        // skip initial empty lines
    while (idx != size && empty(str[idx]))
        ++idx;

    return idx;
}
