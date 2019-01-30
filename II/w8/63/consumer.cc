#include "main.ih"
/*
void consumer(Semaphore filled, Semaphore available,
  queue<size_t> itemQueue, bool finished)
{
  while (!finished)
  {
    filled.wait();
    size_t item = itemQueue.front();
    itemQueue.pop();
    available.notify_all();
    process(item);
  }
}
*/
