#include "arglongoption.ih"

void ArgLongOption::add(string const &longOpt)
{
    ++d_nOptions;

    if (Option *ptr = find(longOpt))
        addValue(ptr);  
    else
        newOption(longOpt);
}
