#include "main.ih"

int main(int argc, char const **argv)
try
{
    // start all threads

    if (argc == 3)
    {
        vector<promise<bool>> promises;
        vector<future<bool>> futures;


        size_t Promnr = stoul(argv[1]);

        thread threads[Promnr];
        vector<bool> done;

        for (size_t idx = 0; idx < Promnr; ++idx)
        {
          promises.emplace_back();
          futures.emplace_back(promises[idx].get_future());

          done.emplace_back(false);

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


        size_t count = 0;

        size_t end = 0;

        size_t stop = stoul(argv[2]);


        while (count < 10)
        {
            // do the main-task
            this_thread::sleep_for(chrono::seconds(1));

            for (size_t idx = 0; idx < Promnr; ++idx)
            {
              if(done[idx] == false)
              {
                if (futures[idx].wait_for(chrono::seconds(0)) == future_status::ready)
                {
                  cout << idx << "\t is done!\n";
                  done[idx] = true;
                  if(++end == stop)
                    break;
                }else
                cout << idx << " is not done!\n";
              }
            }
            cout << "end counter: " << end << '\n';

            if (end == stop)
              break;



            cerr << "inspecting: " << ++count << '\n';

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
