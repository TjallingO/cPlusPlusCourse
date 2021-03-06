#include "client.ih"

void Client::process(queue<size_t> &itemQueue)
{
  while (!d_finished || !itemQueue.empty())
  {
    d_filled.wait(check);
    size_t item = itemQueue.front();
    itemQueue.pop();
    d_available.notify_all();
    this_thread::sleep_for(1s);         // Sleep
    print(item);
  }
}
