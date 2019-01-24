#include "storage.ih"

void Storage::add(std::string line)
{
  lock_guard<mutex> lk(d_mutex);
  d_queue.push(line);
  d_condition.notify_all();
}
