#include "main.ih"

int main(int argc, char const **argv)
{
  future<string> fut = async(threadFun);

  size_t count = 0;

  while (true)
  {
    this_thread::sleep_for(chrono::seconds(1));
    cerr << "inspecting: " << ++count << '\n';

    if (fut.wait_for(chrono::seconds(0)) == future_status::ready)
    {
      cout << "done \n";
      return 1;
    }
    // inspect whether a thread indicates
    // to end the program. If so, end it.
  }
}

// If we were to run multiple threads we could have a vector of futures, then
// rather than checking if our one future object is ready we check if any of
// the futures is ready, if one (or however many is preferred) is/are ready
// the program returns.
