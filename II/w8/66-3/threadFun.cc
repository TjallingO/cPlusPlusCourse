#include "main.ih"

string threadFun()
{
    cerr << "entry\n";

    this_thread::sleep_for(chrono::seconds(5));
    cerr << "first cerr\n";

    this_thread::sleep_for(chrono::seconds(5));
    cerr << "second cerr\n";

    return "end the program";
}
