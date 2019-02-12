#include "main.ih"

int main(int argc, char const **argv)
try
{
    if (argc == 3)
    {
        size_t threadNr = stoul(argv[1]); //total number of threads
        size_t stopAt = stoul(argv[2]); //number of threads that need to be
        //done before the program is considered done.

        vector<future<string>> futures;

        for (size_t idx = 0; idx < threadNr; ++idx)
          futures.emplace_back(async(threadFun));

        size_t count = 0;
        size_t doneCounter = 0;

        vector<bool> done (threadNr, false); //zodat er niet wordt gekeken naar
        //futures die al ready waren in een vorige iteratie

        while (true)
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
            {
              cerr << "done\n";
              return 1;
            }
          }
        }
      }
      else
      {
        cout << "Please enter nr of desired threads and number of threads "
             << "that have to be finished for the program to end\n";
      }
}
catch(...)
{
  cout << "haHA caught one!\n";
}
