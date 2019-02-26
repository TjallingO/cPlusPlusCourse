#include "main.ih"

bool Client::s_continue = true;

int main(int argc, char const **argv)
{
  bool finished = 0;

  Semaphore available(10);
  Semaphore filled(0);

  std::queue<size_t> itemQueue;

  vector<thread> threads;
  //
  // for (size_t idx = 0; idx < available.size(); ++idx)
  //       threads.emplace_back(consumer, ref(filled), ref(available), ref(itemQueue),
  //                   ref(finished));

  thread consume(consumer, ref(filled), ref(available), ref(itemQueue),
                  ref(finished));
  thread produce(producer, ref(filled), ref(available), ref(itemQueue),
                  ref(finished));

  consume.join();

  // for (auto &it: threads)
  //   it.join();
  produce.join();
}
