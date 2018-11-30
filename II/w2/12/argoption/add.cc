#include "argoption.ih"

void ArgOption::add(int optChar)
{
    ++d_nOptions;

    if (Option *ptr = find(optChar))
        addValue(ptr);  
    else
        newOption(optChar);
}
