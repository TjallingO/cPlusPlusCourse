#include "storage.ih"

void Storage::push(string const line)
{
    lock_guard<mutex> lk(d_mutex);
    d_queue.push(line);
    if (d_queue.size() == 1)
      condition.notify_all();
}
