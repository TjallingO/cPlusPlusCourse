#include "main.ih"

string threadFun(size_t idx)//, promise<bool> &prom)
{
    // het nut van idx hier is om te kijken welke thread het is maar het
    // werd me niet duidelijker waar het probleem lag hierdoor
    cerr << "entry\n";

    size_t wtime = rand() % 5;

    this_thread::sleep_for(chrono::seconds(wtime));
    cerr << "first cerr\n";

    this_thread::sleep_for(chrono::seconds(wtime));
    cerr << idx << " second cerr\n";

    //prom.set_value(true); //bij future errors gaat het geloof ik hier fout
    //bij seg faults wordt de message hieronder wel geprint

    cerr << "set value didnt cause error here!\n";

    return "end the program";
}
