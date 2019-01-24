#include "main.ih"

void dotting(size_t seconds, bool &calcDone)
{
  while (!calcDone)
  {
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
    cerr << '.';
  }
}
