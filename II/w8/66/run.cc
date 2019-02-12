#include "main.ih"

void run(size_t const &Promnr
                        , vector<future<bool>> &futures, size_t const &stopAt)
{
  future_status status[Promnr];
  vector<future_status> vstatus(status,
     status + sizeof(status) / sizeof(status[0]) );

  size_t count = 0;
  size_t end = 0;

  vector<bool> done (Promnr, false); //zodat er niet wordt gewacht op futures
  // die al ready zijn leek me niet nodig maar dit was ook
  //niet waar de fout zit

  while (count < 10)
  {
      this_thread::sleep_for(chrono::seconds(1));

      for (size_t idx = 0; idx < Promnr; ++idx)
      {
        if (done[idx] == false)
        {
          if (futures[idx].wait_for(chrono::seconds(0)) == future_status::ready)
          {
            //cout << idx << "\t is done!\n";
            done[idx] = true;
            if (++end == stopAt)
              break;
          }//else
          //cout << idx << " is not done!\n";
        }
      }
      //cout << "end counter: " << end << '\n';

      if (end == stopAt) //stoppen na stopAt ready futures statusses
        break;

      cerr << "inspecting: " << ++count << '\n';
  }
}
