#include "argoption.ih"

ArgOption::Option *ArgOption::find(int optChar) const
{
    for (Option **ptr = d_opt + d_size; ptr-- != d_opt; )
    {
        if ((*ptr)->optChar == optChar)
            return *ptr;
    }
    return 0;
}
