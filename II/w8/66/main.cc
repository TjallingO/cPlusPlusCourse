#include "main.ih"

int main(int argc, char const **argv)
try
{
    // start all threads

    if (argc == 3)
    {
        vector<promise<bool>> promises;
        vector<future<bool>> futures;
        //vector<thread> threads;

        size_t Promnr = stoul(argv[1]);

        thread threads[Promnr];

        for (size_t idx = 0; idx < Promnr; ++idx)
        {
          promises.emplace_back();
          futures.emplace_back(promises[idx].get_future());
          //threads.emplace_back(threadFun, ref(promises[idx]));

          threads[idx] = thread
          {
            [&, idx]()
            {
              threadFun(promises[idx]);
            }
          };
        }

        future_status status[Promnr];
        vector<future_status> vstatus(status, status + sizeof(status) / sizeof(status[0]) );
        //status.reserve(Promnr);

        size_t idx = 0;

        size_t end = 0;

        size_t stop = stoul(argv[2]);

        while (idx < 10)
        {
            // do the main-task
            this_thread::sleep_for(chrono::seconds(1));

            for (size_t idx = 0; idx < Promnr; ++idx)
              if (futures[idx].wait_for(chrono::seconds(0)) == future_status::ready)
              {
                if(++end == stop)
                  break;
              }

            // for (size_t idx = 0; idx < Promnr; ++idx)
            //   status[idx] = futures[idx].wait_for(chrono::seconds(0));
            //
            //
            // for_each(vstatus.begin(), vstatus.end(),
            //   [&end](future_status &status)
            //   {
            //     //cout << (int)status << '\n';
            //     if(status == future_status::ready)
            //     {
            //       cerr << "!\n";
            //       end = true;
            //     }
            //   }
            // );

            if (end == stop)
              break;



            cerr << "inspecting: " << ++idx << '\n';

            // inspect whether a thread indicates
            // to end the program. If so, end it.
        }

        for (auto &it: threads)
          it.join();
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
