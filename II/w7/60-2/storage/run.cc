#include "storage.ih"

void Storage::run(Client aClient)
{
  while (!d_finished || !empty())
  {
    if (!empty())
      aClient << next() << '\n';

    this_thread::sleep_for(1s);
  }
}
