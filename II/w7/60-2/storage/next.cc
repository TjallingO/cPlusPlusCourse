#include "storage.ih"

string Storage::next()
{
  string front = d_queue.front();
  lock_guard<std::mutex> mx(d_mutex);
  d_queue.pop();
  return front;
}
