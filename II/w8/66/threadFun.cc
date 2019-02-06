#include "main.ih"

string threadFun(promise<bool> &prom)
{
    cerr << "entry\n";

    this_thread::sleep_for(chrono::seconds(3));
    cerr << "first cerr\n";

    this_thread::sleep_for(chrono::seconds(3));
    cerr << "second cerr\n";

    prom.set_value(true);


    return "end the program";
}
