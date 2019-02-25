#include "main.ih"

void consumer(Semaphore &filled, Semaphore &available,
  queue<size_t> &itemQueue, bool &finished)
{
  Client client(filled, available, finished);
  
  client.process(itemQueue);
}
