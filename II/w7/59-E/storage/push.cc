#include "storage.ih"

void Storage::push(string const line)
{
    lock_guard<mutex> lk(d_mutex);
    d_queue.push(line);
    d_condition.notify_all();
}
