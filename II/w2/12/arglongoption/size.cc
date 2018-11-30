#include "arglongoption.ih"

size_t ArgLongOption::size(string *val, char const *longOpt) const
{
    Option *ptr = find(longOpt);
    if (ptr == 0)
        return 0;

    if (val)                         // if a value addr. was specified
    {
        if (ptr->optVal[0])             // if there is a value
            *val = *ptr->optVal[0];     // then return it
        else
            val->clear();               // else clear *value
    }
    
    return ptr->size;                    // return this option's count.
}
