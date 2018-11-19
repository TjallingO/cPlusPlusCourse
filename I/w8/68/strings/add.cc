#include "strings.ih"
#include "iostream"
void Strings::add(string const &next)
{

    string *tmp;
    if (d_copy)
      tmp = enlargebyCopy();         // make room for the next string,
    else
      tmp = enlargebyMove();

                                        // tmp is the new string *

    tmp[d_size] = next;                 // store next

    destroy();                          // return old memory

    d_str = tmp;                        // update d_str and d_size

    ++d_size;

}
