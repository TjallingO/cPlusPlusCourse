#include "strings.ih"

void Strings::destroy()
{
    for (size_t idx = d_size; idx--; )  // delete all existing string objects
        d_str[idx].~string();

    operator delete (d_str);            // delete the remaining raw memory
}
