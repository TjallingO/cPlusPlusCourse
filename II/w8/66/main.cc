#include "main.ih"

#include <thread>
#include <chrono>
#include <iostream>
#include <future>

string threadFun(bool &p)
{
    cerr << "entry\n";

    this_thread::sleep_for(chrono::seconds(3));
    cerr << "first cerr\n";

    this_thread::sleep_for(chrono::seconds(3));
    cerr << "second cerr\n";

    //p.set_value(true);
    p = true;

    return "end the program";
}

int main()
try
{
    // start all threads
    //thread thr(threadFun);
    promise<bool> prom;
    bool p;
    auto future = prom.get_future();

    thread thr(threadFun, ref(p));

    size_t idx = 0;

    auto status = future.wait_for(chrono::seconds(0));

    while (idx < 10)
    {
        // do the main-task
        this_thread::sleep_for(chrono::seconds(1));


//        if (status == future_status::ready)
        if (p == true)
          return 0;
         //(prom == future_status::ready)


        cerr << "inspecitng: " << ++idx << '\n';

        // inspect whether a thread indicates
        // to end the program. If so, end it.
    }

    thr.join();
}
catch(...)
{
  cout << "haHA caught one!\n";
}
