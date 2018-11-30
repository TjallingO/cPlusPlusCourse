#include "argoption.ih"

size_t ArgOption::size(int optChar) const
{
    Option *ptr = find(optChar);
    return ptr == 0 ? 0 : ptr->size;
}

