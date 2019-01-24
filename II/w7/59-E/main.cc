#include "main.ih"

int main(int argc, char const *argv[])
{
  Storage warehouse(argv[1]);
  // Define warehouse, given filename

  thread addTread(&addlines, ref(warehouse), ref(cin));
  // Add lines to the queue
  thread runThread(&Storage::run, ref(warehouse));
  // Process those lines

  addTread.join();
  runThread.join();
}
