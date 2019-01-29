#include "storage.ih"

string Storage::next()
{
  lock_guard<std::mutex> mx(d_mutex); // Lock queue
  string front = d_queue.front();     // Get element from queue
  d_queue.pop();                      // Remove that element
  return front;                       // Return it
}
