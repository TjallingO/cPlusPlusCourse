#include "storage.ih"

void Storage::push(string const line)
{
  lock_guard<mutex> lk(d_mutex);  // Lock queue
  d_queue.push(line);             // Add new element to the queue
}
