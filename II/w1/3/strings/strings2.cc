#include "strings.ih"

Strings::Strings(int argc, char *argv[])
:
    Strings()
{
    for (size_t begin = 0, end = argc; begin != end; ++begin)
        add(argv[begin]);
}
