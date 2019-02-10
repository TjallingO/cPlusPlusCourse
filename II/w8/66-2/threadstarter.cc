#include "main.ih"

void threadstarter(size_t const &Promnr, size_t const &stopAt)
{
  vector<future<string>> futures;

  for (size_t idx = 0; idx < Promnr; ++idx)
    futures.emplace_back(async(threadFun));

  checking(Promnr, futures, stopAt);
}
