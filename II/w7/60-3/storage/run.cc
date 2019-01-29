/*
#include "storage.ih"

void Storage::run()
{
  ofstream outputStream(d_outputFile);  // Output file
  while (!d_finished || !empty())       // While queue is not empty, or cin
  {                                     // is still writing to the queue
    if (!empty())                       // If the queue is not empty
      outputStream << next() << '\n';   // Output the element from the queue

    this_thread::sleep_for(1s);         // Sleep
  }
}
*/
