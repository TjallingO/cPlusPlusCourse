#include "filter.ih"

// static
size_t Filter::beyondLastNonEmpty(size_t size, string const *str)
{
    size_t idx = size;
                                        // skip all empty lines at the end
    while (idx-- && empty(str[idx]))
        ;

    return idx + 1;                     // idx at the last non-empty line,
}                                       // but we must be beyond
