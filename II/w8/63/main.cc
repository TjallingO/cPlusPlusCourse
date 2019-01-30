#include "main.ih"

bool finished = 0;

Semaphore available(10);
Semaphore filled(0);

std::queue<size_t> itemQueue;

void consumer()
{
  while (!finished || !itemQueue.empty())
  {
    filled.wait();
    size_t item = itemQueue.front();
    itemQueue.pop();
    available.notify_all();
    process(item);
  }
}

void producer()
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

int main(int argc, char const **argv)
{
  thread consume(consumer);
  thread produce(producer);

  consume.join();
  produce.join();
}
