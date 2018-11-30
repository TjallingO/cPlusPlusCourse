#include "argoption.ih"

size_t ArgOption::size(string *value, int optChar) const
{
    Option *ptr = find(optChar);

    if (ptr == 0)
        return 0;

    if (value)                          // if a value addr. was specified
    {
        if (*ptr->optVal)               // if there is a value
            *value = **ptr->optVal;     // then return the 1st value
        else
            value->clear();             // else clear *value
    }
    
    return ptr->size;                    // return this option's count.
}
