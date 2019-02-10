#include "main.ih"

string threadFun()
{
    size_t rTime = rand() % 5; //random waiting time

    cerr << "entry\n";

    this_thread::sleep_for(chrono::seconds(rTime));
    cerr << "first cerr\n";

    this_thread::sleep_for(chrono::seconds(rTime));
    cerr << "second cerr\n";

    return "end the program";
}
