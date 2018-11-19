#include "strings.ih"

Strings::Strings(char **environLike)
:
    Strings()
{
    while (*environLike)
        add(*environLike++);
}
