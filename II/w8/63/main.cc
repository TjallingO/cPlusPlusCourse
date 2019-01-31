#include "main.ih"

int main(int argc, char const **argv)
{
  bool finished = 0;

  Semaphore available(10);
  Semaphore filled(0);

  std::queue<size_t> itemQueue;

  thread consume(consumer, ref(filled), ref(available), ref(itemQueue),
                  ref(finished));
  thread produce(producer, ref(filled), ref(available), ref(itemQueue),
                  ref(finished));

  consume.join();
  produce.join();
}
