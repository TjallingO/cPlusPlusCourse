#include "main.ih"

void checking(size_t const &threadNr
                        , vector<future<string>> &futures, size_t const &stopAt)
{
  size_t count = 0;
  size_t doneCounter = 0;

  vector<bool> done (threadNr, false); //zodat er niet wordt gekeken naar
  //futures die al ready waren in een vorige iteratie

  while (count < 10)
  {
    this_thread::sleep_for(chrono::seconds(1));
    cerr << "inspecting: " << ++count << '\n';

    for (size_t idx = 0; idx < threadNr; ++idx)
    {
      if (done[idx] == false)
      {
        if (futures[idx].wait_for(chrono::seconds(0)) == future_status::ready)
        {
          ++doneCounter;
          done[idx] = true;
        }
      }

      if (doneCounter == 1)
        return;
    }
  }

  cerr << "done\n";
}
