#include "main.ih"

#include <thread>
#include <chrono>
#include <iostream>
#include <future>

string threadFun(promise<bool> &prom)
{
    cerr << "entry\n";

    this_thread::sleep_for(chrono::seconds(3));
    cerr << "first cerr\n";

    this_thread::sleep_for(chrono::seconds(3));
    cerr << "second cerr\n";

    prom.set_value(true);


    return "end the program";
}

int main()
try
{
    // start all threads

    promise<bool> prom;

    auto future = prom.get_future();

    thread thr(threadFun, ref(prom));

    size_t idx = 0;

  //  auto status = future.wait_for(chrono::seconds(0));

    while (idx < 10)
    {
        // do the main-task
        this_thread::sleep_for(chrono::seconds(1));

        auto status = future.wait_for(chrono::seconds(0));

        if (status == future_status::ready)
          return 0;


        cerr << "inspecting: " << ++idx << '\n';

        // inspect whether a thread indicates
        // to end the program. If so, end it.
    }

    thr.join();
}
catch(...)
{
  cout << "haHA caught one!\n";
}
