#ifndef INCLUDED_SORT_
#define INCLUDED_SORT_

#include "sort.ih"

class Sort
{
    enum Action
    {
        INCREASING = 0,
        NOCASEDEC = 1,
    };
    public:
        Sort();
    private:
        void increasing(string **stringone, string **stringtwo);
        void nocasedec(string **stringone, string **stringtwo);

        static void (Sort::*s_action[])(string **stringone, string **stringtwo);
};

#endif
