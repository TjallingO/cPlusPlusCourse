#include "storage.ih"

void mememe(string filename);
{
    lock_guard<std::mutex> mx(d_mutex);
    d_outputfile = filename;
}
