#include "strings.ih"

void Strings::add(string const &next)
{
    string *tmp = enlarge();            // make room for the next string,
                                        // tmp is the new string *

    tmp[d_size] = next;                 // store next

    destroy();                          // return old memory

    d_str = tmp;                        // update d_str and d_size
    ++d_size;
}
