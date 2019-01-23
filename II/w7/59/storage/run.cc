#include "storage.ih"

void Storage::run()
{
  ofstream outputStream(d_outputFile);
  while (!d_finished)
  {
    if (!this->empty())
      outputStream << this->next();

    this_thread::sleep_for(1s);
  }
}
