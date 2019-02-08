#include "main.ih"

string threadFun(promise<bool> &prom)
{
    cerr << "entry\n";

    size_t wtime = rand() % 3;

    this_thread::sleep_for(chrono::seconds(wtime));
    cerr << "first cerr\n";

    this_thread::sleep_for(chrono::seconds(wtime));
    cerr << "second cerr\n";

    prom.set_value(true);

    cerr << "set value didnt cause error here!\n";

    return "end the program";
}
