#include "strings.ih"

void Strings::add(string const &next)
{
    string **tmp = storageArea();
    cerr << __FUNCTION__ << __LINE__ << '\n';
    tmp[d_size] = new string(next);
    cerr << __FUNCTION__ << __LINE__ << '\n';
    if (tmp != d_str)               // destroy old memory if new storageArea
    {
        cerr << __FUNCTION__ << __LINE__ << '\n';            // was allocated
        destroy();                  // destroy the old string * array
        cerr << __FUNCTION__ << __LINE__ << '\n';
        d_str = tmp;
        cerr << __FUNCTION__ << __LINE__ << '\n';
    }
    cerr << __FUNCTION__ << __LINE__ << '\n';
    ++d_size;
}
