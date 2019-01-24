#include "storage.ih"

string &Storage::front()
{
    return d_queue.front();
}
