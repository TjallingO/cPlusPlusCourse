#include "storage.ih"

void Storage::Client::Clienttakes()
{
  unique_lock<mutex> ul(wMutex);
  while (d_queue.empty())
    condition.wait(ul);
  return d_queue.next();
}
