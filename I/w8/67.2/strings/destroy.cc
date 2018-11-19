#include "strings.ih"

void Strings::destroy()
{
    cerr << __FUNCTION__ << __LINE__ << '\n';
    delete[] d_str;
}
