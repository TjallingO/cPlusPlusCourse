#include "main.ih"

void threadstarter(size_t const &Promnr, size_t const &stopAt)
{
  //vector<promise<bool>> promises;
  vector<future<bool>> futures;

  thread threads[Promnr];

  for (size_t idx = 0; idx < Promnr; ++idx)
  {
    //promises.emplace_back();
    futures.emplace_back(thread(threadFun(idx)));
  }
/*
    threads[idx] = thread
    {
      [&, idx]()
      {
        threadFun(idx, promises[idx]);
      }
    };
  }
*/
  run(Promnr, futures, stopAt);

  for (auto &it: threads)
    it.join();

}
