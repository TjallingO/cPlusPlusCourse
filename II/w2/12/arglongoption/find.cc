#include "arglongoption.ih"

ArgLongOption::Option *ArgLongOption::find(std::string const &longOpt) const
{
    for (Option **ptr = d_opt + d_size; ptr-- != d_opt; )
    {
        if ((*ptr)->longOpt == longOpt)
            return *ptr;
    }
    return 0;
}
