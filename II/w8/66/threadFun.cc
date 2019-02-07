#include "main.ih"

string threadFun(promise<bool> &prom)
{
    cerr << "entry\n";

    size_t wtime = rand() % 10;

    this_thread::sleep_for(chrono::seconds(wtime));
    cerr << "first cerr\n";

    this_thread::sleep_for(chrono::seconds(wtime));
    cerr << "second cerr\n";

    prom.set_value(true);

    return "end the program";
}
