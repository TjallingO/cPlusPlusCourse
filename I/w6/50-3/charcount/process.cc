#include "charcount.ih"


void CharCount::process(char ch)
{
    size_t idx;
    Action loc_action = locate(&idx, ch);
    (this->*s_action[loc_action])(ch, idx);
}

//defines array of pointers to member functions
//locate finds the index of the current character and what action to take
//this action and index is then passed to the array of pointers
