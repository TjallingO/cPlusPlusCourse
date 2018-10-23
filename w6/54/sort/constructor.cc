#include "sort.ih"

void (Sort::*Sort::s_action[])(string ** stringone, string ** strongtwo) =
{
    &Sort::increasing,
    &Sort::nocasedec,
};


Sort::Sort()
{
    Action loc_action = INCREASING;
    string one = "hello";
    string two = "bye";
    //(this->*s_action[loc_action])(one, two);

}
