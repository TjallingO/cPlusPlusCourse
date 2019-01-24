#include "storage.ih"

string Storage::next()
{
  string front = d_queue.front();
  d_queue.pop();
  return front;
}
