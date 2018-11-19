#include "strings.ih"

void Strings::destroy()
{
    delete[] d_str;
}
