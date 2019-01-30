#include "main.ih"
/*
void producer(Semaphore filled, Semaphore available,
  queue<size_t> itemQueue, bool finished)
{
  size_t item = 0;
  while (item < 10)
  {
    ++item;
    available.wait();
    itemQueue.push(item);
    filled.notify_all();
  }
  finished = true;
}
*/
