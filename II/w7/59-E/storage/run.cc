#include "storage.ih"

void Storage::run()
{
  ofstream outputStream(d_outputFile);
  while (!d_finished || !empty())
  {
    if (!empty())
      outputStream << next() << '\n';

    this_thread::sleep_for(1s);
  }
}
